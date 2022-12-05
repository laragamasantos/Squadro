/********************************************************************************
** Form generated from reading UI file 'Squadro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQUADRO_H
#define UI_SQUADRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "Cell.h"

QT_BEGIN_NAMESPACE

class Ui_Squadro
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionAjuda;
    QAction *actionAbout;
    QAction *actionVencedor;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    Cell *cell01;
    Cell *cell02;
    Cell *cell03;
    Cell *cell04;
    Cell *cell05;
    Cell *cell10;
    Cell *cell11;
    Cell *cell12;
    Cell *cell13;
    Cell *cell14;
    Cell *cell15;
    Cell *cell16;
    Cell *cell20;
    Cell *cell21;
    Cell *cell22;
    Cell *cell23;
    Cell *cell24;
    Cell *cell25;
    Cell *cell26;
    Cell *cell30;
    Cell *cell31;
    Cell *cell32;
    Cell *cell33;
    Cell *cell34;
    Cell *cell35;
    Cell *cell36;
    Cell *cell40;
    Cell *cell41;
    Cell *cell42;
    Cell *cell43;
    Cell *cell44;
    Cell *cell45;
    Cell *cell46;
    Cell *cell50;
    Cell *cell51;
    Cell *cell52;
    Cell *cell53;
    Cell *cell54;
    Cell *cell55;
    Cell *cell56;
    Cell *cell61;
    Cell *cell62;
    Cell *cell63;
    Cell *cell64;
    Cell *cell65;
    QMenuBar *menubar;
    QMenu *menuGame;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Squadro)
    {
        if (Squadro->objectName().isEmpty())
            Squadro->setObjectName(QString::fromUtf8("Squadro"));
        Squadro->resize(420, 469);
        actionNew = new QAction(Squadro);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionQuit = new QAction(Squadro);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAjuda = new QAction(Squadro);
        actionAjuda->setObjectName(QString::fromUtf8("actionAjuda"));
        actionAbout = new QAction(Squadro);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionVencedor = new QAction(Squadro);
        actionVencedor->setObjectName(QString::fromUtf8("actionVencedor"));
        centralwidget = new QWidget(Squadro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(420, 420));
        centralwidget->setMaximumSize(QSize(420, 420));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget { background: url(':/grid'); }"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        cell01 = new Cell(centralwidget);
        cell01->setObjectName(QString::fromUtf8("cell01"));
        cell01->setMinimumSize(QSize(50, 50));
        cell01->setMaximumSize(QSize(50, 50));
        cell01->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell01->setIconSize(QSize(50, 50));
        cell01->setFlat(true);

        gridLayout->addWidget(cell01, 0, 1, 1, 1);

        cell02 = new Cell(centralwidget);
        cell02->setObjectName(QString::fromUtf8("cell02"));
        cell02->setMinimumSize(QSize(50, 50));
        cell02->setMaximumSize(QSize(50, 50));
        cell02->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell02->setIconSize(QSize(50, 50));
        cell02->setFlat(true);

        gridLayout->addWidget(cell02, 0, 2, 1, 1);

        cell03 = new Cell(centralwidget);
        cell03->setObjectName(QString::fromUtf8("cell03"));
        cell03->setMinimumSize(QSize(50, 50));
        cell03->setMaximumSize(QSize(50, 50));
        cell03->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell03->setIconSize(QSize(50, 50));
        cell03->setFlat(true);

        gridLayout->addWidget(cell03, 0, 3, 1, 1);

        cell04 = new Cell(centralwidget);
        cell04->setObjectName(QString::fromUtf8("cell04"));
        cell04->setMinimumSize(QSize(50, 50));
        cell04->setMaximumSize(QSize(50, 50));
        cell04->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell04->setIconSize(QSize(50, 50));
        cell04->setFlat(true);

        gridLayout->addWidget(cell04, 0, 4, 1, 1);

        cell05 = new Cell(centralwidget);
        cell05->setObjectName(QString::fromUtf8("cell05"));
        cell05->setMinimumSize(QSize(50, 50));
        cell05->setMaximumSize(QSize(50, 50));
        cell05->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell05->setIconSize(QSize(50, 50));
        cell05->setFlat(true);

        gridLayout->addWidget(cell05, 0, 5, 1, 1);

        cell10 = new Cell(centralwidget);
        cell10->setObjectName(QString::fromUtf8("cell10"));
        cell10->setMinimumSize(QSize(50, 50));
        cell10->setMaximumSize(QSize(50, 50));
        cell10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell10->setIconSize(QSize(50, 50));
        cell10->setFlat(true);
        cell10->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell10, 1, 0, 1, 1);

        cell11 = new Cell(centralwidget);
        cell11->setObjectName(QString::fromUtf8("cell11"));
        cell11->setMinimumSize(QSize(50, 50));
        cell11->setMaximumSize(QSize(50, 50));
        cell11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell11->setIconSize(QSize(50, 50));
        cell11->setFlat(true);

        gridLayout->addWidget(cell11, 1, 1, 1, 1);

        cell12 = new Cell(centralwidget);
        cell12->setObjectName(QString::fromUtf8("cell12"));
        cell12->setMinimumSize(QSize(50, 50));
        cell12->setMaximumSize(QSize(50, 50));
        cell12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell12->setIconSize(QSize(50, 50));
        cell12->setFlat(true);

        gridLayout->addWidget(cell12, 1, 2, 1, 1);

        cell13 = new Cell(centralwidget);
        cell13->setObjectName(QString::fromUtf8("cell13"));
        cell13->setMinimumSize(QSize(50, 50));
        cell13->setMaximumSize(QSize(50, 50));
        cell13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell13->setIconSize(QSize(50, 50));
        cell13->setFlat(true);

        gridLayout->addWidget(cell13, 1, 3, 1, 1);

        cell14 = new Cell(centralwidget);
        cell14->setObjectName(QString::fromUtf8("cell14"));
        cell14->setMinimumSize(QSize(50, 50));
        cell14->setMaximumSize(QSize(50, 50));
        cell14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell14->setIconSize(QSize(50, 50));
        cell14->setFlat(true);

        gridLayout->addWidget(cell14, 1, 4, 1, 1);

        cell15 = new Cell(centralwidget);
        cell15->setObjectName(QString::fromUtf8("cell15"));
        cell15->setMinimumSize(QSize(50, 50));
        cell15->setMaximumSize(QSize(50, 50));
        cell15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell15->setIconSize(QSize(50, 50));
        cell15->setFlat(true);

        gridLayout->addWidget(cell15, 1, 5, 1, 1);

        cell16 = new Cell(centralwidget);
        cell16->setObjectName(QString::fromUtf8("cell16"));
        cell16->setMinimumSize(QSize(50, 50));
        cell16->setMaximumSize(QSize(50, 50));
        cell16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell16->setIconSize(QSize(50, 50));
        cell16->setFlat(true);

        gridLayout->addWidget(cell16, 1, 6, 1, 1);

        cell20 = new Cell(centralwidget);
        cell20->setObjectName(QString::fromUtf8("cell20"));
        cell20->setMinimumSize(QSize(50, 50));
        cell20->setMaximumSize(QSize(50, 50));
        cell20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell20->setIconSize(QSize(50, 50));
        cell20->setFlat(true);
        cell20->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell20, 2, 0, 1, 1);

        cell21 = new Cell(centralwidget);
        cell21->setObjectName(QString::fromUtf8("cell21"));
        cell21->setMinimumSize(QSize(50, 50));
        cell21->setMaximumSize(QSize(50, 50));
        cell21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell21->setIconSize(QSize(50, 50));
        cell21->setFlat(true);

        gridLayout->addWidget(cell21, 2, 1, 1, 1);

        cell22 = new Cell(centralwidget);
        cell22->setObjectName(QString::fromUtf8("cell22"));
        cell22->setMinimumSize(QSize(50, 50));
        cell22->setMaximumSize(QSize(50, 50));
        cell22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell22->setIconSize(QSize(50, 50));
        cell22->setFlat(true);

        gridLayout->addWidget(cell22, 2, 2, 1, 1);

        cell23 = new Cell(centralwidget);
        cell23->setObjectName(QString::fromUtf8("cell23"));
        cell23->setMinimumSize(QSize(50, 50));
        cell23->setMaximumSize(QSize(50, 50));
        cell23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell23->setIconSize(QSize(50, 50));
        cell23->setFlat(true);

        gridLayout->addWidget(cell23, 2, 3, 1, 1);

        cell24 = new Cell(centralwidget);
        cell24->setObjectName(QString::fromUtf8("cell24"));
        cell24->setMinimumSize(QSize(50, 50));
        cell24->setMaximumSize(QSize(50, 50));
        cell24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell24->setIconSize(QSize(50, 50));
        cell24->setFlat(true);

        gridLayout->addWidget(cell24, 2, 4, 1, 1);

        cell25 = new Cell(centralwidget);
        cell25->setObjectName(QString::fromUtf8("cell25"));
        cell25->setMinimumSize(QSize(50, 50));
        cell25->setMaximumSize(QSize(50, 50));
        cell25->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell25->setIconSize(QSize(50, 50));
        cell25->setFlat(true);

        gridLayout->addWidget(cell25, 2, 5, 1, 1);

        cell26 = new Cell(centralwidget);
        cell26->setObjectName(QString::fromUtf8("cell26"));
        cell26->setMinimumSize(QSize(50, 50));
        cell26->setMaximumSize(QSize(50, 50));
        cell26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell26->setIconSize(QSize(50, 50));
        cell26->setFlat(true);

        gridLayout->addWidget(cell26, 2, 6, 1, 1);

        cell30 = new Cell(centralwidget);
        cell30->setObjectName(QString::fromUtf8("cell30"));
        cell30->setMinimumSize(QSize(50, 50));
        cell30->setMaximumSize(QSize(50, 50));
        cell30->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell30->setIconSize(QSize(50, 50));
        cell30->setFlat(true);
        cell30->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell30, 3, 0, 1, 1);

        cell31 = new Cell(centralwidget);
        cell31->setObjectName(QString::fromUtf8("cell31"));
        cell31->setMinimumSize(QSize(50, 50));
        cell31->setMaximumSize(QSize(50, 50));
        cell31->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell31->setIconSize(QSize(50, 50));
        cell31->setFlat(true);

        gridLayout->addWidget(cell31, 3, 1, 1, 1);

        cell32 = new Cell(centralwidget);
        cell32->setObjectName(QString::fromUtf8("cell32"));
        cell32->setMinimumSize(QSize(50, 50));
        cell32->setMaximumSize(QSize(50, 50));
        cell32->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell32->setIconSize(QSize(50, 50));
        cell32->setFlat(true);

        gridLayout->addWidget(cell32, 3, 2, 1, 1);

        cell33 = new Cell(centralwidget);
        cell33->setObjectName(QString::fromUtf8("cell33"));
        cell33->setMinimumSize(QSize(50, 50));
        cell33->setMaximumSize(QSize(50, 50));
        cell33->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell33->setIconSize(QSize(50, 50));
        cell33->setFlat(true);

        gridLayout->addWidget(cell33, 3, 3, 1, 1);

        cell34 = new Cell(centralwidget);
        cell34->setObjectName(QString::fromUtf8("cell34"));
        cell34->setMinimumSize(QSize(50, 50));
        cell34->setMaximumSize(QSize(50, 50));
        cell34->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell34->setIconSize(QSize(50, 50));
        cell34->setFlat(true);

        gridLayout->addWidget(cell34, 3, 4, 1, 1);

        cell35 = new Cell(centralwidget);
        cell35->setObjectName(QString::fromUtf8("cell35"));
        cell35->setMinimumSize(QSize(50, 50));
        cell35->setMaximumSize(QSize(50, 50));
        cell35->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell35->setIconSize(QSize(50, 50));
        cell35->setFlat(true);

        gridLayout->addWidget(cell35, 3, 5, 1, 1);

        cell36 = new Cell(centralwidget);
        cell36->setObjectName(QString::fromUtf8("cell36"));
        cell36->setMinimumSize(QSize(50, 50));
        cell36->setMaximumSize(QSize(50, 50));
        cell36->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell36->setIconSize(QSize(50, 50));
        cell36->setFlat(true);

        gridLayout->addWidget(cell36, 3, 6, 1, 1);

        cell40 = new Cell(centralwidget);
        cell40->setObjectName(QString::fromUtf8("cell40"));
        cell40->setMinimumSize(QSize(50, 50));
        cell40->setMaximumSize(QSize(50, 50));
        cell40->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell40->setIconSize(QSize(50, 50));
        cell40->setFlat(true);
        cell40->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell40, 4, 0, 1, 1);

        cell41 = new Cell(centralwidget);
        cell41->setObjectName(QString::fromUtf8("cell41"));
        cell41->setMinimumSize(QSize(50, 50));
        cell41->setMaximumSize(QSize(50, 50));
        cell41->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell41->setIconSize(QSize(50, 50));
        cell41->setFlat(true);

        gridLayout->addWidget(cell41, 4, 1, 1, 1);

        cell42 = new Cell(centralwidget);
        cell42->setObjectName(QString::fromUtf8("cell42"));
        cell42->setMinimumSize(QSize(50, 50));
        cell42->setMaximumSize(QSize(50, 50));
        cell42->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell42->setIconSize(QSize(50, 50));
        cell42->setFlat(true);

        gridLayout->addWidget(cell42, 4, 2, 1, 1);

        cell43 = new Cell(centralwidget);
        cell43->setObjectName(QString::fromUtf8("cell43"));
        cell43->setMinimumSize(QSize(50, 50));
        cell43->setMaximumSize(QSize(50, 50));
        cell43->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell43->setIconSize(QSize(50, 50));
        cell43->setFlat(true);

        gridLayout->addWidget(cell43, 4, 3, 1, 1);

        cell44 = new Cell(centralwidget);
        cell44->setObjectName(QString::fromUtf8("cell44"));
        cell44->setMinimumSize(QSize(50, 50));
        cell44->setMaximumSize(QSize(50, 50));
        cell44->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell44->setIconSize(QSize(50, 50));
        cell44->setFlat(true);

        gridLayout->addWidget(cell44, 4, 4, 1, 1);

        cell45 = new Cell(centralwidget);
        cell45->setObjectName(QString::fromUtf8("cell45"));
        cell45->setMinimumSize(QSize(50, 50));
        cell45->setMaximumSize(QSize(50, 50));
        cell45->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell45->setIconSize(QSize(50, 50));
        cell45->setFlat(true);

        gridLayout->addWidget(cell45, 4, 5, 1, 1);

        cell46 = new Cell(centralwidget);
        cell46->setObjectName(QString::fromUtf8("cell46"));
        cell46->setMinimumSize(QSize(50, 50));
        cell46->setMaximumSize(QSize(50, 50));
        cell46->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell46->setIconSize(QSize(50, 50));
        cell46->setFlat(true);

        gridLayout->addWidget(cell46, 4, 6, 1, 1);

        cell50 = new Cell(centralwidget);
        cell50->setObjectName(QString::fromUtf8("cell50"));
        cell50->setMinimumSize(QSize(50, 50));
        cell50->setMaximumSize(QSize(50, 50));
        cell50->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell50->setIconSize(QSize(50, 50));
        cell50->setFlat(true);
        cell50->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell50, 5, 0, 1, 1);

        cell51 = new Cell(centralwidget);
        cell51->setObjectName(QString::fromUtf8("cell51"));
        cell51->setMinimumSize(QSize(50, 50));
        cell51->setMaximumSize(QSize(50, 50));
        cell51->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell51->setIconSize(QSize(50, 50));
        cell51->setFlat(true);

        gridLayout->addWidget(cell51, 5, 1, 1, 1);

        cell52 = new Cell(centralwidget);
        cell52->setObjectName(QString::fromUtf8("cell52"));
        cell52->setMinimumSize(QSize(50, 50));
        cell52->setMaximumSize(QSize(50, 50));
        cell52->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell52->setIconSize(QSize(50, 50));
        cell52->setFlat(true);

        gridLayout->addWidget(cell52, 5, 2, 1, 1);

        cell53 = new Cell(centralwidget);
        cell53->setObjectName(QString::fromUtf8("cell53"));
        cell53->setMinimumSize(QSize(50, 50));
        cell53->setMaximumSize(QSize(50, 50));
        cell53->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell53->setIconSize(QSize(50, 50));
        cell53->setFlat(true);

        gridLayout->addWidget(cell53, 5, 3, 1, 1);

        cell54 = new Cell(centralwidget);
        cell54->setObjectName(QString::fromUtf8("cell54"));
        cell54->setMinimumSize(QSize(50, 50));
        cell54->setMaximumSize(QSize(50, 50));
        cell54->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell54->setIconSize(QSize(50, 50));
        cell54->setFlat(true);

        gridLayout->addWidget(cell54, 5, 4, 1, 1);

        cell55 = new Cell(centralwidget);
        cell55->setObjectName(QString::fromUtf8("cell55"));
        cell55->setMinimumSize(QSize(50, 50));
        cell55->setMaximumSize(QSize(50, 50));
        cell55->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell55->setIconSize(QSize(50, 50));
        cell55->setFlat(true);

        gridLayout->addWidget(cell55, 5, 5, 1, 1);

        cell56 = new Cell(centralwidget);
        cell56->setObjectName(QString::fromUtf8("cell56"));
        cell56->setMinimumSize(QSize(50, 50));
        cell56->setMaximumSize(QSize(50, 50));
        cell56->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell56->setIconSize(QSize(50, 50));
        cell56->setFlat(true);

        gridLayout->addWidget(cell56, 5, 6, 1, 1);

        cell61 = new Cell(centralwidget);
        cell61->setObjectName(QString::fromUtf8("cell61"));
        cell61->setMinimumSize(QSize(50, 50));
        cell61->setMaximumSize(QSize(50, 50));
        cell61->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell61->setIconSize(QSize(50, 50));
        cell61->setFlat(true);
        cell61->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell61, 6, 1, 1, 1);

        cell62 = new Cell(centralwidget);
        cell62->setObjectName(QString::fromUtf8("cell62"));
        cell62->setMinimumSize(QSize(50, 50));
        cell62->setMaximumSize(QSize(50, 50));
        cell62->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell62->setIconSize(QSize(50, 50));
        cell62->setFlat(true);
        cell62->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell62, 6, 2, 1, 1);

        cell63 = new Cell(centralwidget);
        cell63->setObjectName(QString::fromUtf8("cell63"));
        cell63->setMinimumSize(QSize(50, 50));
        cell63->setMaximumSize(QSize(50, 50));
        cell63->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell63->setIconSize(QSize(50, 50));
        cell63->setFlat(true);
        cell63->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell63, 6, 3, 1, 1);

        cell64 = new Cell(centralwidget);
        cell64->setObjectName(QString::fromUtf8("cell64"));
        cell64->setMinimumSize(QSize(50, 50));
        cell64->setMaximumSize(QSize(50, 50));
        cell64->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell64->setIconSize(QSize(50, 50));
        cell64->setFlat(true);
        cell64->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell64, 6, 4, 1, 1);

        cell65 = new Cell(centralwidget);
        cell65->setObjectName(QString::fromUtf8("cell65"));
        cell65->setMinimumSize(QSize(50, 50));
        cell65->setMaximumSize(QSize(50, 50));
        cell65->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        cell65->setIconSize(QSize(50, 50));
        cell65->setFlat(true);
        cell65->setProperty("home", QVariant(true));

        gridLayout->addWidget(cell65, 6, 5, 1, 1);

        Squadro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Squadro);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 420, 21));
        menuGame = new QMenu(menubar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Squadro->setMenuBar(menubar);
        statusbar = new QStatusBar(Squadro);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Squadro->setStatusBar(statusbar);

        menubar->addAction(menuGame->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuGame->addAction(actionNew);
        menuGame->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(Squadro);

        QMetaObject::connectSlotsByName(Squadro);
    } // setupUi

    void retranslateUi(QMainWindow *Squadro)
    {
        Squadro->setWindowTitle(QApplication::translate("Squadro", "Squadro", nullptr));
        actionNew->setText(QApplication::translate("Squadro", "Novo", nullptr));
        actionQuit->setText(QApplication::translate("Squadro", "Sair", nullptr));
        actionAjuda->setText(QApplication::translate("Squadro", "Ajuda", nullptr));
        actionAbout->setText(QApplication::translate("Squadro", "Sobre", nullptr));
        actionVencedor->setText(QApplication::translate("Squadro", "Vencedor", nullptr));
#ifndef QT_NO_TOOLTIP
        actionVencedor->setToolTip(QApplication::translate("Squadro", "Vencedor", nullptr));
#endif // QT_NO_TOOLTIP
        cell01->setText(QString());
        cell02->setText(QString());
        cell03->setText(QString());
        cell04->setText(QString());
        cell05->setText(QString());
        cell10->setText(QString());
        cell11->setText(QString());
        cell12->setText(QString());
        cell13->setText(QString());
        cell14->setText(QString());
        cell15->setText(QString());
        cell16->setText(QString());
        cell20->setText(QString());
        cell21->setText(QString());
        cell22->setText(QString());
        cell23->setText(QString());
        cell24->setText(QString());
        cell25->setText(QString());
        cell26->setText(QString());
        cell30->setText(QString());
        cell31->setText(QString());
        cell32->setText(QString());
        cell33->setText(QString());
        cell34->setText(QString());
        cell35->setText(QString());
        cell36->setText(QString());
        cell40->setText(QString());
        cell41->setText(QString());
        cell42->setText(QString());
        cell43->setText(QString());
        cell44->setText(QString());
        cell45->setText(QString());
        cell46->setText(QString());
        cell50->setText(QString());
        cell51->setText(QString());
        cell52->setText(QString());
        cell53->setText(QString());
        cell54->setText(QString());
        cell55->setText(QString());
        cell56->setText(QString());
        cell61->setText(QString());
        cell62->setText(QString());
        cell63->setText(QString());
        cell64->setText(QString());
        cell65->setText(QString());
        menuGame->setTitle(QApplication::translate("Squadro", "Jogo", nullptr));
        menuHelp->setTitle(QApplication::translate("Squadro", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Squadro: public Ui_Squadro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUADRO_H
