/********************************************************************************
** Form generated from reading UI file 'editpass.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPASS_H
#define UI_EDITPASS_H

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

class Ui_editPass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *editPass)
    {
        if (editPass->objectName().isEmpty())
            editPass->setObjectName(QStringLiteral("editPass"));
        editPass->resize(400, 300);
        label = new QLabel(editPass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 72, 15));
        label_2 = new QLabel(editPass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 72, 15));
        label_3 = new QLabel(editPass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 72, 15));
        lineEdit = new QLineEdit(editPass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 151, 21));
        lineEdit_2 = new QLineEdit(editPass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 120, 151, 20));
        lineEdit_3 = new QLineEdit(editPass);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 170, 151, 20));
        pushButton = new QPushButton(editPass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 93, 28));

        retranslateUi(editPass);

        QMetaObject::connectSlotsByName(editPass);
    } // setupUi

    void retranslateUi(QWidget *editPass)
    {
        editPass->setWindowTitle(QApplication::translate("editPass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("editPass", "\345\216\237\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("editPass", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("editPass", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editPass", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editPass: public Ui_editPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPASS_H
