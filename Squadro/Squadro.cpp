#include "Squadro.h"
#include "ui_Squadro.h"
#include "Cell.h"
#include "Player.h"

#include <QDebug>
#include <QMessageBox>
#include <QSignalMapper>

Squadro::Squadro(QWidget *parent)
    : QMainWindow(parent),
        ui(new Ui::Squadro),
        m_player(nullptr) {

    ui->setupUi(this);

    QObject::connect(ui->actionNew, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAbout()));
    QObject::connect(ui->actionVencedor, SIGNAL(triggered(bool)), this, SLOT(showAbout()));

    QSignalMapper* map = new QSignalMapper(this);

    for (int row = 0; row < 7; ++row) {
        for (int col = 0; col < 7; ++col) {
            QString cellName = QString("cell%1%2").arg(row).arg(col);
            Cell* cell = this->findChild<Cell*>(cellName);
            m_board[row][col] = cell;

            if (cell != nullptr) {
                int id = row * 7 + col;
                map->setMapping(cell, id);
                QObject::connect(cell, SIGNAL(clicked(bool)), map, SLOT(map()));
            }
        }
    }

#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
#else
    QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
#endif

    // When the turn ends, switch the player.
    QObject::connect(this, SIGNAL(turnEnded()), this, SLOT(switchPlayer()));

    // Connect the red player counts.
    Player* red = Player::player(Player::Red);
    QObject::connect(red, SIGNAL(countChanged(int)), this, SLOT(updateStatusBar()));

    // Connect the blue player counts.
    Player* blue = Player::player(Player::Blue);
    QObject::connect(blue, SIGNAL(countChanged(int)), this, SLOT(updateStatusBar()));

    // Reset.
    this->reset();

    // Adjust window.
    this->adjustSize();
    this->setFixedSize(this->size());
}

Squadro::~Squadro() {
    delete ui;
}

void Squadro::play(int id) {
    int row = id / 7;
    int col = id % 7;
    Cell* cell = m_board[row][col];
    Q_ASSERT(cell != nullptr);

    //Condição que verifica peça selecionada e se está é válida
    /*A função "isVerified" retorna true quando a peça ja percorreu seu caminho e portanto não pode mais
    ser selecionada. Quando isso acontece a peça nao se movimentará. Apenas jogadas válidas são contabilizadas.*/
    if (cell->player() == m_player && !cell->isVerified()) {

//---------------------- RED PLAYER --------------------------------------------------------------------------------------
        if(m_player->type() == Player::Red){ //RED (walks through columns)
            if(!cell->isInverted()){ //if cell is NOT INVERTED, then the next cell shouldn't be inverted
                int distance = cell->getPower(row);     //variável recebe o poder da peça de acordo com sua célula (poderes salvos na função getPower)
                int jump = (col+distance);      //variável referêcia para percorrer as células


                //percorre a linha em que a peça vermelha andará, verificando se há peças azuis
                for(int i=1; i<=distance; i++){
                    if(m_board[row][col+i]->player() != nullptr){       //verifica se a celula seguinte está ocupada (player diferente de null)
                        jump = col+i+1;      //jump recebe proxima célula para qual a peça se movimentaria

                        if((m_board[row][col+i]->player() != nullptr) && (m_board[row][col+i+1]->player() != nullptr)){     //verifica se a proxima celula estará ocupada
                           distance++;      //distância aumenta para verificar célula seguinte
                        }

                        //Verifica se as posições estão invertidas e, caso necessário, inverte para desenhar na direção certa
                        //Desenha peça que está sendo usada na posição de destino
                        //Caso alguma peça azul tenha sido pulada, volta a mesma para sua posição (podendo ser linha 0 ou 6 de acordo com o jogo
                        if(m_board[row][col+i]->isInverted()){
                            m_board[0][col+i]->setPlayer(m_board[row][col+i]->player());
                            m_board[0][col+i]->setInverted(true);
                            m_board[row][col+i]->setPlayer(nullptr);
                            m_board[row][col+i]->setInverted(false);
                        }else{
                            m_board[6][col+i]->setPlayer(m_board[row][col+i]->player());
                            m_board[6][col+i]->setInverted(false);
                            m_board[row][col+i]->setPlayer(nullptr);
                            m_board[row][col+i]->setInverted(false);
                        }

                    //Verifica se chegou ao final da ida
                    }else if(jump >= 6){
                        jump = 6;
                        break;
                    }
                }

                //Caso tenha chegado ao final, cell recebe posição da peça e invete esta
                if(jump==6){
                    cell = m_board[row][jump];
                    cell->setInverted(true);
                }
                else{       //Se nao for o final, apenas recebe a posição da peça
                    cell = m_board[row][jump];
                }

                cell->setPlayer(m_player);       //desenha a peça
                m_board[row][col]->setPlayer(nullptr);       //apaga a peça anterior
                m_board[row][col]->setInverted(false);      //deixa a celula anterior "normal" para peça azul que passe por ali
                emit turnEnded();        //acaba jogada
            }


            //MESMA LÓGICA ACIMA, PARA VERMELHA INVERTIDA, MUDANDO APENAS O FATOR DE QUE A PEÇA ANDA PARA TRÁS (VOLTA)

            else if(cell->isInverted()){ //if cell is INVERTED, then the next cell should be inverted
                int distance = (col-cell->getPowerInverted(row));
                int jump = (col-cell->getPowerInverted(row));


                for(int i=(col-1); i>=distance; i--){
                    if(m_board[row][i]->player() != nullptr){
                        jump = i-1; //jump recebe proxima célula para qual a peça se movimentaria (movimento para trás)

                        if((m_board[row][i-1]->player() != nullptr) && (m_board[row][i]->player() != nullptr)){
                            distance--;
                        }

                        if(m_board[row][i]->isInverted()){
                            m_board[0][i]->setPlayer(m_board[row][i]->player());
                            m_board[0][i]->setInverted(true);
                            m_board[row][i]->setPlayer(nullptr);
                            m_board[row][i]->setInverted(false);
                        }else{
                            m_board[6][i]->setPlayer(m_board[row][i]->player());
                            m_board[6][i]->setInverted(false);
                            m_board[row][i]->setPlayer(nullptr);
                            m_board[row][i]->setInverted(false);
                        }


                    }else if(jump <= 0){
                        jump = 0;
                        break;
                    }
                }
                if(jump==0){
                    cell = m_board[row][jump];
                    cell->setInverted(true);
                    cell->setVerified(true);        //indica que aquela peça chegou (para que ela não possa mais se mexer)
                    m_player->incrementCount();     //aumenta contador que indica quantas peças cmpletaram o percurso
                }else{
                    cell = m_board[row][jump];
                }

                cell->setInverted(true); //inverte a celula para o qual a peça vai, uma vez que esta já está invertida
                cell->setPlayer(m_player); //desenha a peça
                m_board[row][col]->setPlayer(nullptr); //apaga a peça anterior
                m_board[row][col]->setInverted(false); //deixa a celula anterior "normal" para peça azul que passe por ali
                emit turnEnded(); //acaba jogada
            }
           }

//---------------------- BLUE PLAYER --------------------------------------------------------------------------------------
        //MESMA LÓGICA PARA O CASO VERMELHO, MUDANDO APENAS AS COLUNAS E LINHAS, QUE SÃO DIFERENTES

        else if(m_player->type() == Player::Blue){ //BLUE (walks through rows)
            if(!cell->isInverted()){ //if cell is NOT INVERTED, then the next cell shouldn't be inverted
                int distance = (row-cell->getPower(col));
                int jump = (row-cell->getPower(col));

                for(int i=(row-1); i>=(distance); i--){
                    if(m_board[i][col]->player() != nullptr){
                        jump = i-1;

                        if((m_board[i-1][col]->player() != nullptr) && (m_board[i][col]->player() != nullptr)){
                           distance--;
                        }

                        if(m_board[i][col]->isInverted()){
                            m_board[i][6]->setPlayer(m_board[i][col]->player());
                            m_board[i][6]->setInverted(true);
                            m_board[i][col]->setPlayer(nullptr);
                            m_board[i][col]->setInverted(false);
                        }else{
                            m_board[i][0]->setPlayer(m_board[i][col]->player());
                            m_board[i][0]->setInverted(false);
                            m_board[i][col]->setPlayer(nullptr);
                            m_board[i][col]->setInverted(false);
                        }

                    }else if(jump <= 0){
                        jump = 0;
                        break;
                    }
                }
                if(jump==0){
                    cell = m_board[jump][col];
                    cell->setInverted(true);
                }else{
                 cell = m_board[jump][col];
                }
                cell->setPlayer(m_player);
                m_board[row][col]->setPlayer(nullptr);
                m_board[row][col]->setInverted(false);
                emit turnEnded();
            }

            else if(cell->isInverted()){ //if cell is INVERTED, then the next cell should be inverted
                int distance = (cell->getPowerInverted(col));
                int jump = (row+cell->getPowerInverted(col));

                for(int i=1; i<=(distance); i++){
                    if(m_board[row+i][col]->player() != nullptr){
                        jump = row+i+1;
                        if((m_board[row+i][col]->player() != nullptr) && (m_board[row+i+1][col]->player() != nullptr)){
                            distance++;
                        }

                        if(m_board[row+i][col]->isInverted()){
                            m_board[row+i][6]->setPlayer(m_board[row+i][col]->player());
                            m_board[row+i][6]->setInverted(true);
                            m_board[row+i][col]->setPlayer(nullptr);
                            m_board[row+i][col]->setInverted(false);
                        }else{
                            m_board[row+i][0]->setPlayer(m_board[row+i][col]->player());
                            m_board[row+i][0]->setInverted(false);
                            m_board[row+i][col]->setPlayer(nullptr);
                            m_board[row+i][col]->setInverted(false);
                        }

                    } else if(jump >= 6){
                        jump = 6;
                        break;
                    }
                }

                if(jump==6){
                    cell = m_board[jump][col];
                    cell->setInverted(true);
                    cell->setVerified(true);        //indica que aquela peça chegou (para que ela não possa mais se mexer)
                    m_player->incrementCount();     //aumenta contador que indica quantas peças cmpletaram o percurso
                }else{
                 cell = m_board[jump][col];
                }
                cell->setInverted(true);
                cell->setPlayer(m_player);
                m_board[row][col]->setPlayer(nullptr);
                m_board[row][col]->setInverted(false);
                emit turnEnded();
            }
        }
    }

    if(m_player->other()->count() == 4){        //verifica se 4 peças da cor ja chegaram ao final e qual cor
        if(m_player->other()->type() == Player::Red){
            QMessageBox::information(this, "VENCEDOR!", "Parabéns, o Jogador Vermelho venceu!");
        }else if(m_player->other()->type() == Player::Blue){
            QMessageBox::information(this, "VENCEDOR!", "Parabéns, o Jogador Azul venceu!");
        }
        reset();    //reseta jogo
    }

}

void Squadro::switchPlayer() {
    // Switch the player.
    m_player = m_player->other();

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Squadro::reset() {
    // Reset the red player.
    Player* red = Player::player(Player::Red);
    red->reset();

    // Reset the blue player.
    Player* blue = Player::player(Player::Blue);
    blue->reset();

    // Reset board.
    for (int row = 0; row < 7; ++row) {
        for (int col = 0; col < 7; ++col) {
            Cell* cell = m_board[row][col];
            if (cell != nullptr)
                cell->reset();
        }
    }

    for (int i = 1; i < 6; i++) {
        m_board[i][0]->setPlayer(red);
        m_board[6][i]->setPlayer(blue);
        m_board[i][0]->setVerified(false);
        m_board[6][i]->setVerified(false);
    }

    // Set the starting player.
    m_player = red;

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Squadro::showAbout() {
    QMessageBox::information(this, tr("About"),
        tr("Squadro\n\nLara Gama Santos - laragamasantos@gmail.com"
           "\nMarcela Camarano Caram Peito - marcelaccaram@gmail.com"));
}

void Squadro::updateStatusBar() {
    ui->statusbar->showMessage(tr("Vez do %1 (%2 de 5)").arg(m_player->name()).arg(m_player->count()));
}

