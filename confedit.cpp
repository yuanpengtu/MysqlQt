#include "confedit.h"
#include "ui_confedit.h"
#include"common.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include<QDateTime>
#include<QDebug>
ConfEdit::ConfEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConfEdit)
{
    this->setWindowModality(Qt::ApplicationModal);
    ui->setupUi(this);
    this->setWindowTitle("修改信息");
    //this->setFont();
}

ConfEdit::~ConfEdit()
{
    delete ui;
}

void ConfEdit::on_pushButton_clicked()
{
    QString BackStyle;
    QString FontStyle;
    QString Gender;
    Gender=ui->comboBoxGender->currentText();
    BackStyle=ui->comboBoxStyle->currentText();
    FontStyle=ui->comboBoxFont->currentText();
    int style;
    if(BackStyle=="风格1")
        style=1;
    else if(BackStyle=="风格2")
        style=2;
    else if(BackStyle=="风格3")
        style=3;
    else if(BackStyle=="风格4")
        style=4;
    else if(BackStyle=="风格5")
        style=5;

    if(Gender=="男")
       Gender="female";
    else
        Gender="male";

    if(FontStyle=="微软雅黑")
        FontStyle="Microsoft YaHei";
    else if(FontStyle=="华文中宋")
        FontStyle="STZhongsong";
    else if(FontStyle=="楷体")
        FontStyle="KaiTi";
    else if(FontStyle=="幼圆")
        FontStyle="YouYuan";
    else if(FontStyle=="方正舒体")
        FontStyle="FZShuTi";
    this->setWindowTitle("修改信息");
    QSqlQuery query(db);
    query.prepare("update user set Gender=?,Background=?,Font=? where Username=?");
    query.addBindValue(Gender);
    query.addBindValue(style);
    query.addBindValue(FontStyle.toStdString().data());
    query.addBindValue(GlobalUsername);
    query.exec();
    qDebug()<<FontStyle;
    db.exec("set Font GBK");
    QMessageBox::information(this,"提示","修改信息成功",QMessageBox::Ok);
    this->close();
}
