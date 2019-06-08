/********************************************************************************
** Form generated from reading UI file 'confedit.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFEDIT_H
#define UI_CONFEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfEdit
{
public:
    QGroupBox *groupBox;
    QComboBox *comboBoxStyle;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxFont;
    QLabel *label_3;
    QComboBox *comboBoxGender;
    QPushButton *pushButton;

    void setupUi(QWidget *ConfEdit)
    {
        if (ConfEdit->objectName().isEmpty())
            ConfEdit->setObjectName(QStringLiteral("ConfEdit"));
        ConfEdit->resize(474, 333);
        groupBox = new QGroupBox(ConfEdit);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 411, 281));
        comboBoxStyle = new QComboBox(groupBox);
        comboBoxStyle->setObjectName(QStringLiteral("comboBoxStyle"));
        comboBoxStyle->setGeometry(QRect(90, 40, 101, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 72, 15));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 72, 15));
        comboBoxFont = new QComboBox(groupBox);
        comboBoxFont->setObjectName(QStringLiteral("comboBoxFont"));
        comboBoxFont->setGeometry(QRect(90, 90, 131, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 72, 15));
        comboBoxGender = new QComboBox(groupBox);
        comboBoxGender->setObjectName(QStringLiteral("comboBoxGender"));
        comboBoxGender->setGeometry(QRect(90, 140, 87, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 220, 93, 28));

        retranslateUi(ConfEdit);

        QMetaObject::connectSlotsByName(ConfEdit);
    } // setupUi

    void retranslateUi(QWidget *ConfEdit)
    {
        ConfEdit->setWindowTitle(QApplication::translate("ConfEdit", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ConfEdit", "\344\277\241\346\201\257", Q_NULLPTR));
        comboBoxStyle->clear();
        comboBoxStyle->insertItems(0, QStringList()
         << QApplication::translate("ConfEdit", "\351\243\216\346\240\2741", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\351\243\216\346\240\2742", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\351\243\216\346\240\2743", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\351\243\216\346\240\2744", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\351\243\216\346\240\2745", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ConfEdit", "\350\203\214\346\231\257\351\243\216\346\240\274\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfEdit", "\345\255\227\344\275\223\357\274\232", Q_NULLPTR));
        comboBoxFont->clear();
        comboBoxFont->insertItems(0, QStringList()
         << QApplication::translate("ConfEdit", "\345\276\256\350\275\257\351\233\205\351\273\221", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\345\215\216\346\226\207\344\270\255\345\256\213", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\346\226\271\346\255\243\350\210\222\344\275\223", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\346\245\267\344\275\223", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\345\271\274\345\234\206", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ConfEdit", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        comboBoxGender->clear();
        comboBoxGender->insertItems(0, QStringList()
         << QApplication::translate("ConfEdit", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("ConfEdit", "\345\245\263", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("ConfEdit", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfEdit: public Ui_ConfEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFEDIT_H
