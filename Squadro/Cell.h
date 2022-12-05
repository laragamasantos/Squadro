#ifndef CELL_H
#define CELL_H

#include <QPushButton>

#include "Player.h"

class Cell : public QPushButton {
    Q_OBJECT
    Q_PROPERTY(Player* player READ player WRITE setPlayer NOTIFY playerChanged)
    Q_PROPERTY(bool inverted READ isInverted WRITE setInverted NOTIFY invertedChanged)

public:
    explicit Cell(QWidget *parent = nullptr);
    virtual ~Cell();

    bool isInverted() const { return m_inverted; }
    void setInverted(bool inverted);
    int getPower(int row_col) { return power[row_col]; }
    int getPowerInverted(int row_col) { return powerInverted[row_col]; }
    bool isVerified() const { return m_verify; }
    void setVerified(bool verify);

    Player* player() const { return m_player; }
    void setPlayer(Player* player);

public slots:
    void reset();

signals:
    void playerChanged(Player* player);
    void invertedChanged(bool inverted);

private:
    Player* m_player;
    bool m_inverted;
    int power[6] = {0, 1, 3, 2, 3, 1};
    int powerInverted[6] = {0, 3, 1, 2, 1, 3};
    bool m_verify = false;

private slots:
    void updateCell();

};

#endif // CELL_H
