/********************************************************************************
** Form generated from reading UI file 'studentlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGIN_H
#define UI_STUDENTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentLogin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *Login_Button;

    void setupUi(QDialog *StudentLogin)
    {
        if (StudentLogin->objectName().isEmpty())
            StudentLogin->setObjectName(QString::fromUtf8("StudentLogin"));
        StudentLogin->resize(340, 203);
        layoutWidget = new QWidget(StudentLogin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 40, 176, 93));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout->addWidget(username);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        Login_Button = new QPushButton(layoutWidget);
        Login_Button->setObjectName(QString::fromUtf8("Login_Button"));

        verticalLayout_3->addWidget(Login_Button);


        retranslateUi(StudentLogin);

        QMetaObject::connectSlotsByName(StudentLogin);
    } // setupUi

    void retranslateUi(QDialog *StudentLogin)
    {
        StudentLogin->setWindowTitle(QApplication::translate("StudentLogin", "Log in", nullptr));
        label->setText(QApplication::translate("StudentLogin", "Korisni\304\215ko ime", nullptr));
        label_2->setText(QApplication::translate("StudentLogin", "\305\240ifra", nullptr));
        Login_Button->setText(QApplication::translate("StudentLogin", "Prijava", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentLogin: public Ui_StudentLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGIN_H
