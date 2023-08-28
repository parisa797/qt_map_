/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionreturn;
    QAction *actionsetting;
    QAction *actiontable;
    QAction *actionhide;
    QAction *actionmore;
    QAction *actionmap;
    QAction *actionmail;
    QAction *actiontraker;
    QAction *actionearth;
    QAction *actiondocument;
    QAction *actionantenna;
    QAction *actionactivation;
    QAction *actionradar;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menulogo;
    QMenu *menureturn;
    QMenu *menushow_table;
    QMenu *menu;
    QMenu *menuhide_map;
    QMenu *menushow_current_node;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionreturn = new QAction(MainWindow);
        actionreturn->setObjectName("actionreturn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionreturn->setIcon(icon);
        actionsetting = new QAction(MainWindow);
        actionsetting->setObjectName("actionsetting");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/img/icons8-setting-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsetting->setIcon(icon1);
        actiontable = new QAction(MainWindow);
        actiontable->setObjectName("actiontable");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/img/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiontable->setIcon(icon2);
        actionhide = new QAction(MainWindow);
        actionhide->setObjectName("actionhide");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/img/icons8-hide-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhide->setIcon(icon3);
        actionmore = new QAction(MainWindow);
        actionmore->setObjectName("actionmore");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/img/icons8-left-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmore->setIcon(icon4);
        actionmap = new QAction(MainWindow);
        actionmap->setObjectName("actionmap");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/img/address.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmap->setIcon(icon5);
        actionmail = new QAction(MainWindow);
        actionmail->setObjectName("actionmail");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/img/mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmail->setIcon(icon6);
        actiontraker = new QAction(MainWindow);
        actiontraker->setObjectName("actiontraker");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/img/radar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiontraker->setIcon(icon7);
        actionearth = new QAction(MainWindow);
        actionearth->setObjectName("actionearth");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/img/globe-earth.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionearth->setIcon(icon8);
        actiondocument = new QAction(MainWindow);
        actiondocument->setObjectName("actiondocument");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/img/google-docs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondocument->setIcon(icon9);
        actionantenna = new QAction(MainWindow);
        actionantenna->setObjectName("actionantenna");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/img/wifi.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionantenna->setIcon(icon10);
        actionactivation = new QAction(MainWindow);
        actionactivation->setObjectName("actionactivation");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/img/analytics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionactivation->setIcon(icon11);
        actionradar = new QAction(MainWindow);
        actionradar->setObjectName("actionradar");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/img/icons8-radio-waves-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionradar->setIcon(icon12);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menulogo = new QMenu(menubar);
        menulogo->setObjectName("menulogo");
        menureturn = new QMenu(menubar);
        menureturn->setObjectName("menureturn");
        menushow_table = new QMenu(menubar);
        menushow_table->setObjectName("menushow_table");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menuhide_map = new QMenu(menubar);
        menuhide_map->setObjectName("menuhide_map");
        menushow_current_node = new QMenu(menubar);
        menushow_current_node->setObjectName("menushow_current_node");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menulogo->menuAction());
        menubar->addAction(menureturn->menuAction());
        menubar->addAction(menushow_table->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menuhide_map->menuAction());
        menubar->addAction(menushow_current_node->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionreturn->setText(QCoreApplication::translate("MainWindow", "return", nullptr));
#if QT_CONFIG(shortcut)
        actionreturn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionsetting->setText(QCoreApplication::translate("MainWindow", "setting", nullptr));
        actiontable->setText(QCoreApplication::translate("MainWindow", "table", nullptr));
        actionhide->setText(QCoreApplication::translate("MainWindow", "hide", nullptr));
        actionmore->setText(QCoreApplication::translate("MainWindow", "more", nullptr));
        actionmap->setText(QCoreApplication::translate("MainWindow", "map", nullptr));
        actionmail->setText(QCoreApplication::translate("MainWindow", "mail", nullptr));
        actiontraker->setText(QCoreApplication::translate("MainWindow", "traker", nullptr));
        actionearth->setText(QCoreApplication::translate("MainWindow", "earth", nullptr));
        actiondocument->setText(QCoreApplication::translate("MainWindow", "document", nullptr));
        actionantenna->setText(QCoreApplication::translate("MainWindow", "antenna", nullptr));
        actionactivation->setText(QCoreApplication::translate("MainWindow", "activation", nullptr));
        actionradar->setText(QCoreApplication::translate("MainWindow", "radar", nullptr));
        menulogo->setTitle(QCoreApplication::translate("MainWindow", "logo", nullptr));
        menureturn->setTitle(QCoreApplication::translate("MainWindow", "return ", nullptr));
        menushow_table->setTitle(QCoreApplication::translate("MainWindow", "show table", nullptr));
        menu->setTitle(QString());
        menuhide_map->setTitle(QCoreApplication::translate("MainWindow", "hide map", nullptr));
        menushow_current_node->setTitle(QCoreApplication::translate("MainWindow", "show current node", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
