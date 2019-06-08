/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassword;
    QLabel *label;
    QLabel *labelPassword;
    QPushButton *ButtonLogin;
    QPushButton *ButtonRegister;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(400, 300);
        lineEditName = new QLineEdit(login);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(142, 110, 151, 21));
        lineEditPassword = new QLineEdit(login);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(142, 160, 151, 20));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 120, 72, 15));
        labelPassword = new QLabel(login);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setGeometry(QRect(80, 160, 72, 15));
        ButtonLogin = new QPushButton(login);
        ButtonLogin->setObjectName(QStringLiteral("ButtonLogin"));
        ButtonLogin->setGeometry(QRect(110, 210, 93, 28));
        ButtonRegister = new QPushButton(login);
        ButtonRegister->setObjectName(QStringLiteral("ButtonRegister"));
        ButtonRegister->setGeometry(QRect(230, 210, 93, 28));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        ButtonLogin->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        ButtonRegister->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
