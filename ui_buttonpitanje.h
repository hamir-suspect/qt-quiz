/********************************************************************************
** Form generated from reading UI file 'buttonpitanje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONPITANJE_H
#define UI_BUTTONPITANJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ButtonPitanje
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pitanje;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *ButtonPitanje)
    {
        if (ButtonPitanje->objectName().isEmpty())
            ButtonPitanje->setObjectName(QString::fromUtf8("ButtonPitanje"));
        ButtonPitanje->resize(400, 300);
        verticalLayout = new QVBoxLayout(ButtonPitanje);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pitanje = new QLabel(ButtonPitanje);
        pitanje->setObjectName(QString::fromUtf8("pitanje"));

        verticalLayout->addWidget(pitanje);

        groupBox = new QGroupBox(ButtonPitanje);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ButtonPitanje);

        QMetaObject::connectSlotsByName(ButtonPitanje);
    } // setupUi

    void retranslateUi(QDialog *ButtonPitanje)
    {
        ButtonPitanje->setWindowTitle(QApplication::translate("ButtonPitanje", "Dialog", nullptr));
        pitanje->setText(QApplication::translate("ButtonPitanje", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("ButtonPitanje", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("ButtonPitanje", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("ButtonPitanje", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("ButtonPitanje", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("ButtonPitanje", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonPitanje: public Ui_ButtonPitanje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONPITANJE_H
