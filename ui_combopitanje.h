/********************************************************************************
** Form generated from reading UI file 'combopitanje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOPITANJE_H
#define UI_COMBOPITANJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComboPitanje
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pitanje;
    QComboBox *odgovor;
    QPushButton *pushButton;

    void setupUi(QDialog *ComboPitanje)
    {
        if (ComboPitanje->objectName().isEmpty())
            ComboPitanje->setObjectName(QString::fromUtf8("ComboPitanje"));
        ComboPitanje->resize(400, 300);
        verticalLayout = new QVBoxLayout(ComboPitanje);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pitanje = new QLabel(ComboPitanje);
        pitanje->setObjectName(QString::fromUtf8("pitanje"));

        verticalLayout->addWidget(pitanje);

        odgovor = new QComboBox(ComboPitanje);
        odgovor->setObjectName(QString::fromUtf8("odgovor"));

        verticalLayout->addWidget(odgovor);

        pushButton = new QPushButton(ComboPitanje);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ComboPitanje);

        QMetaObject::connectSlotsByName(ComboPitanje);
    } // setupUi

    void retranslateUi(QDialog *ComboPitanje)
    {
        ComboPitanje->setWindowTitle(QApplication::translate("ComboPitanje", "Dialog", nullptr));
        pitanje->setText(QApplication::translate("ComboPitanje", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("ComboPitanje", "Odgovori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboPitanje: public Ui_ComboPitanje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOPITANJE_H
