/********************************************************************************
** Form generated from reading UI file 'robotqme.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTQME_H
#define UI_ROBOTQME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotQMEClass
{
public:
    QAction *action_new;
    QAction *action_save;
    QAction *action_open;
    QAction *action_close;
    QAction *action_setstart;
    QAction *action_setend;
    QAction *action_resetflag;
    QAction *action_setobstacle;
    QAction *action_run;
    QAction *action_clearobstacle;
    QAction *action_setocean;
    QAction *action_setdesert;
    QAction *action_clearterrain;
    QWidget *centralWidget;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RobotQMEClass)
    {
        if (RobotQMEClass->objectName().isEmpty())
            RobotQMEClass->setObjectName(QString::fromUtf8("RobotQMEClass"));
        RobotQMEClass->resize(502, 352);
        RobotQMEClass->setMouseTracking(true);
        RobotQMEClass->setAutoFillBackground(false);
        action_new = new QAction(RobotQMEClass);
        action_new->setObjectName(QString::fromUtf8("action_new"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RobotQME/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon);
        action_save = new QAction(RobotQMEClass);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/RobotQME/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon1);
        action_open = new QAction(RobotQMEClass);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/RobotQME/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon2);
        action_close = new QAction(RobotQMEClass);
        action_close->setObjectName(QString::fromUtf8("action_close"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/RobotQME/Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_close->setIcon(icon3);
        action_setstart = new QAction(RobotQMEClass);
        action_setstart->setObjectName(QString::fromUtf8("action_setstart"));
        action_setstart->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/RobotQME/Resources/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setstart->setIcon(icon4);
        action_setend = new QAction(RobotQMEClass);
        action_setend->setObjectName(QString::fromUtf8("action_setend"));
        action_setend->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/RobotQME/Resources/end.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setend->setIcon(icon5);
        action_resetflag = new QAction(RobotQMEClass);
        action_resetflag->setObjectName(QString::fromUtf8("action_resetflag"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/RobotQME/Resources/resetflag.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_resetflag->setIcon(icon6);
        action_setobstacle = new QAction(RobotQMEClass);
        action_setobstacle->setObjectName(QString::fromUtf8("action_setobstacle"));
        action_setobstacle->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/RobotQME/Resources/obstacle.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setobstacle->setIcon(icon7);
        action_run = new QAction(RobotQMEClass);
        action_run->setObjectName(QString::fromUtf8("action_run"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/RobotQME/Resources/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_run->setIcon(icon8);
        action_clearobstacle = new QAction(RobotQMEClass);
        action_clearobstacle->setObjectName(QString::fromUtf8("action_clearobstacle"));
        action_clearobstacle->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/RobotQME/Resources/removeobstacle.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_clearobstacle->setIcon(icon9);
        action_setocean = new QAction(RobotQMEClass);
        action_setocean->setObjectName(QString::fromUtf8("action_setocean"));
        action_setocean->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/RobotQME/Resources/ocean.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setocean->setIcon(icon10);
        action_setdesert = new QAction(RobotQMEClass);
        action_setdesert->setObjectName(QString::fromUtf8("action_setdesert"));
        action_setdesert->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/RobotQME/Resources/desert.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setdesert->setIcon(icon11);
        action_clearterrain = new QAction(RobotQMEClass);
        action_clearterrain->setObjectName(QString::fromUtf8("action_clearterrain"));
        action_clearterrain->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/RobotQME/Resources/clearterrain.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_clearterrain->setIcon(icon12);
        centralWidget = new QWidget(RobotQMEClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMouseTracking(true);
        RobotQMEClass->setCentralWidget(centralWidget);
        toolBar = new QToolBar(RobotQMEClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(30, 30));
        toolBar->setFloatable(false);
        RobotQMEClass->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(RobotQMEClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setAutoFillBackground(false);
        statusBar->setStyleSheet(QString::fromUtf8(""));
        statusBar->setSizeGripEnabled(false);
        RobotQMEClass->setStatusBar(statusBar);

        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addAction(action_close);
        toolBar->addSeparator();
        toolBar->addAction(action_setobstacle);
        toolBar->addAction(action_clearobstacle);
        toolBar->addAction(action_setocean);
        toolBar->addAction(action_setdesert);
        toolBar->addAction(action_clearterrain);
        toolBar->addSeparator();
        toolBar->addAction(action_setstart);
        toolBar->addAction(action_setend);
        toolBar->addAction(action_resetflag);
        toolBar->addAction(action_run);

        retranslateUi(RobotQMEClass);

        QMetaObject::connectSlotsByName(RobotQMEClass);
    } // setupUi

    void retranslateUi(QMainWindow *RobotQMEClass)
    {
        RobotQMEClass->setWindowTitle(QApplication::translate("RobotQMEClass", "RobotQME", 0, QApplication::UnicodeUTF8));
        action_new->setText(QApplication::translate("RobotQMEClass", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_new->setToolTip(QApplication::translate("RobotQMEClass", "\346\226\260\345\273\272\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_save->setText(QApplication::translate("RobotQMEClass", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_save->setToolTip(QApplication::translate("RobotQMEClass", "\344\277\235\345\255\230\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_open->setText(QApplication::translate("RobotQMEClass", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_open->setToolTip(QApplication::translate("RobotQMEClass", "\346\211\223\345\274\200\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_close->setText(QApplication::translate("RobotQMEClass", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_close->setToolTip(QApplication::translate("RobotQMEClass", "\345\205\263\351\227\255\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_setstart->setText(QApplication::translate("RobotQMEClass", "\350\256\276\347\275\256\350\265\267\347\202\271", 0, QApplication::UnicodeUTF8));
        action_setend->setText(QApplication::translate("RobotQMEClass", "\350\256\276\347\275\256\347\273\210\347\202\271", 0, QApplication::UnicodeUTF8));
        action_resetflag->setText(QApplication::translate("RobotQMEClass", "\351\207\215\347\275\256\350\265\267\346\255\242\347\202\271", 0, QApplication::UnicodeUTF8));
        action_setobstacle->setText(QApplication::translate("RobotQMEClass", "\350\256\276\347\275\256\351\232\234\347\242\215", 0, QApplication::UnicodeUTF8));
        action_run->setText(QApplication::translate("RobotQMEClass", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        action_clearobstacle->setText(QApplication::translate("RobotQMEClass", "\346\270\205\351\231\244\351\232\234\347\242\215", 0, QApplication::UnicodeUTF8));
        action_setocean->setText(QApplication::translate("RobotQMEClass", "\350\256\276\347\275\256\346\265\267\346\264\213", 0, QApplication::UnicodeUTF8));
        action_setdesert->setText(QApplication::translate("RobotQMEClass", "\350\256\276\347\275\256\346\262\231\346\274\240", 0, QApplication::UnicodeUTF8));
        action_clearterrain->setText(QApplication::translate("RobotQMEClass", "\346\270\205\351\231\244\345\234\260\345\275\242", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("RobotQMEClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotQMEClass: public Ui_RobotQMEClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTQME_H
