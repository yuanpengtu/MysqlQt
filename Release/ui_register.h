/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_register
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditEnsure;
    QLabel *labelName;
    QLabel *labelPassword;
    QLabel *labelEnsure;

    void setupUi(QWidget *register_ui)
    {
        if (register_ui->objectName().isEmpty())
            register_ui->setObjectName(QStringLiteral("register"));
        register_ui->resize(361, 302);
        pushButton = new QPushButton(register_ui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 240, 93, 28));
        lineEditName = new QLineEdit(register_ui);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(140, 100, 113, 21));
        lineEditPassword = new QLineEdit(register_ui);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(140, 140, 113, 21));
        lineEditEnsure = new QLineEdit(register_ui);
        lineEditEnsure->setObjectName(QStringLiteral("lineEditEnsure"));
        lineEditEnsure->setGeometry(QRect(140, 180, 113, 21));
        labelName = new QLabel(register_ui);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(40, 100, 72, 15));
        labelPassword = new QLabel(register_ui);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setGeometry(QRect(40, 140, 72, 15));
        labelEnsure = new QLabel(register_ui);
        labelEnsure->setObjectName(QStringLiteral("labelEnsure"));
        labelEnsure->setGeometry(QRect(40, 180, 72, 15));

        retranslateUi(register_ui);

        QMetaObject::connectSlotsByName(register_ui);
    } // setupUi

    void retranslateUi(QWidget *register_ui)
    {
        register_ui->setWindowTitle(QApplication::translate("register", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("register", "\346\263\250\345\206\214", Q_NULLPTR));
        labelName->setText(QApplication::translate("register", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("register", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelEnsure->setText(QApplication::translate("register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class register_ui: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
