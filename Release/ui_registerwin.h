/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerWin
{
public:
    QPushButton *pushButton;
    QLabel *labelUsername;
    QLabel *labelNew;
    QLabel *labelEnsure;
    QLineEdit *lineEditName;
    QLineEdit *lineEditNew;
    QLineEdit *lineEditEnsure;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *registerWin)
    {
        if (registerWin->objectName().isEmpty())
            registerWin->setObjectName(QStringLiteral("registerWin"));
        registerWin->resize(400, 300);
        pushButton = new QPushButton(registerWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 93, 28));
        labelUsername = new QLabel(registerWin);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));
        labelUsername->setGeometry(QRect(40, 50, 72, 15));
        labelNew = new QLabel(registerWin);
        labelNew->setObjectName(QStringLiteral("labelNew"));
        labelNew->setGeometry(QRect(40, 90, 72, 15));
        labelEnsure = new QLabel(registerWin);
        labelEnsure->setObjectName(QStringLiteral("labelEnsure"));
        labelEnsure->setGeometry(QRect(40, 130, 72, 15));
        lineEditName = new QLineEdit(registerWin);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(130, 50, 113, 21));
        lineEditNew = new QLineEdit(registerWin);
        lineEditNew->setObjectName(QStringLiteral("lineEditNew"));
        lineEditNew->setGeometry(QRect(130, 90, 113, 21));
        lineEditEnsure = new QLineEdit(registerWin);
        lineEditEnsure->setObjectName(QStringLiteral("lineEditEnsure"));
        lineEditEnsure->setGeometry(QRect(130, 130, 113, 21));
        label = new QLabel(registerWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 170, 72, 15));
        comboBox = new QComboBox(registerWin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 170, 87, 22));

        retranslateUi(registerWin);

        QMetaObject::connectSlotsByName(registerWin);
    } // setupUi

    void retranslateUi(QWidget *registerWin)
    {
        registerWin->setWindowTitle(QApplication::translate("registerWin", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("registerWin", "\346\263\250\345\206\214", Q_NULLPTR));
        labelUsername->setText(QApplication::translate("registerWin", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        labelNew->setText(QApplication::translate("registerWin", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelEnsure->setText(QApplication::translate("registerWin", "\347\241\256\350\256\244\345\257\206\347\240\201:", Q_NULLPTR));
        label->setText(QApplication::translate("registerWin", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("registerWin", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("registerWin", "\345\245\263", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class registerWin: public Ui_registerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
