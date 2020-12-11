/********************************************************************************
** Form generated from reading UI file 'pregled.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREGLED_H
#define UI_PREGLED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Pregled
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QDialog *Pregled)
    {
        if (Pregled->objectName().isEmpty())
            Pregled->setObjectName(QString::fromUtf8("Pregled"));
        Pregled->resize(500, 600);
        horizontalLayout = new QHBoxLayout(Pregled);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(Pregled);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(Pregled);

        QMetaObject::connectSlotsByName(Pregled);
    } // setupUi

    void retranslateUi(QDialog *Pregled)
    {
        Pregled->setWindowTitle(QApplication::translate("Pregled", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pregled: public Ui_Pregled {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGLED_H
