/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
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
    QAction *actionLog_in;
    QAction *actionPregled;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuStart;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionLog_in = new QAction(MainWindow);
        actionLog_in->setObjectName(QString::fromUtf8("actionLog_in"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/login.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_in->setIcon(icon);
        actionPregled = new QAction(MainWindow);
        actionPregled->setObjectName(QString::fromUtf8("actionPregled"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/img/pregled.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPregled->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuStart = new QMenu(menubar);
        menuStart->setObjectName(QString::fromUtf8("menuStart"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuStart->menuAction());
        menuStart->addAction(actionLog_in);
        menuStart->addAction(actionPregled);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLog_in->setText(QApplication::translate("MainWindow", "Log In", nullptr));
        actionPregled->setText(QApplication::translate("MainWindow", "Pregled", nullptr));
        menuStart->setTitle(QApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
