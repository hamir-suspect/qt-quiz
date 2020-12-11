/********************************************************************************
** Form generated from reading UI file 'radiopitanje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOPITANJE_H
#define UI_RADIOPITANJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RadioPitanje
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *pitanje;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton;

    void setupUi(QDialog *RadioPitanje)
    {
        if (RadioPitanje->objectName().isEmpty())
            RadioPitanje->setObjectName(QString::fromUtf8("RadioPitanje"));
        RadioPitanje->resize(321, 306);
        verticalLayout_3 = new QVBoxLayout(RadioPitanje);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pitanje = new QLabel(RadioPitanje);
        pitanje->setObjectName(QString::fromUtf8("pitanje"));
        pitanje->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(pitanje);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(RadioPitanje);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(RadioPitanje);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(RadioPitanje);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(RadioPitanje);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(RadioPitanje);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(RadioPitanje);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(RadioPitanje);

        QMetaObject::connectSlotsByName(RadioPitanje);
    } // setupUi

    void retranslateUi(QDialog *RadioPitanje)
    {
        RadioPitanje->setWindowTitle(QApplication::translate("RadioPitanje", "Dialog", nullptr));
        pitanje->setText(QApplication::translate("RadioPitanje", "TextLabel", nullptr));
        radioButton->setText(QApplication::translate("RadioPitanje", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("RadioPitanje", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("RadioPitanje", "RadioButton", nullptr));
        radioButton_4->setText(QApplication::translate("RadioPitanje", "RadioButton", nullptr));
        radioButton_5->setText(QApplication::translate("RadioPitanje", "RadioButton", nullptr));
        pushButton->setText(QApplication::translate("RadioPitanje", "Odgovori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioPitanje: public Ui_RadioPitanje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOPITANJE_H
