/********************************************************************************
** Form generated from reading UI file 'checkpitanje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKPITANJE_H
#define UI_CHECKPITANJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckPitanje
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pitanje;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QPushButton *pushButton;

    void setupUi(QDialog *CheckPitanje)
    {
        if (CheckPitanje->objectName().isEmpty())
            CheckPitanje->setObjectName(QString::fromUtf8("CheckPitanje"));
        CheckPitanje->resize(400, 300);
        verticalLayout = new QVBoxLayout(CheckPitanje);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pitanje = new QLabel(CheckPitanje);
        pitanje->setObjectName(QString::fromUtf8("pitanje"));

        verticalLayout->addWidget(pitanje);

        groupBox = new QGroupBox(CheckPitanje);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_2->addWidget(checkBox_5);


        verticalLayout->addWidget(groupBox);

        pushButton = new QPushButton(CheckPitanje);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(CheckPitanje);

        QMetaObject::connectSlotsByName(CheckPitanje);
    } // setupUi

    void retranslateUi(QDialog *CheckPitanje)
    {
        CheckPitanje->setWindowTitle(QApplication::translate("CheckPitanje", "Dialog", nullptr));
        pitanje->setText(QApplication::translate("CheckPitanje", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        checkBox->setText(QApplication::translate("CheckPitanje", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("CheckPitanje", "CheckBox", nullptr));
        checkBox_3->setText(QApplication::translate("CheckPitanje", "CheckBox", nullptr));
        checkBox_4->setText(QApplication::translate("CheckPitanje", "CheckBox", nullptr));
        checkBox_5->setText(QApplication::translate("CheckPitanje", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("CheckPitanje", "Odgovori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckPitanje: public Ui_CheckPitanje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKPITANJE_H
