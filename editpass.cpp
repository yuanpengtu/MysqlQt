#include "editpass.h"
#include "ui_editpass.h"
#include"common.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include<QDateTime>
#include<QDebug>
#include<QSqlQuery>
#include<QDebug>
#include<QMessageBox>
#include<QCryptographicHash>
editPass::editPass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editPass)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowTitle("修改密码");
}

editPass::~editPass()
{
    delete ui;
}

void editPass::on_pushButton_clicked()
{
    QString password=ui->lineEdit->text();
    QString md5_1;
    QByteArray str1=QCryptographicHash::hash(password.toLatin1(),QCryptographicHash::Md5);
    md5_1.append(str1.toHex());


    if(md5_1!=GlobalPassword){
        QMessageBox::information(this,"错误","原密码错误",QMessageBox::Ok);
        return;
    }
    QString newpassword=ui->lineEdit_2->text();
    QString EnsurePassword=ui->lineEdit_3->text();
    if(newpassword==""){
        QMessageBox::information(this,"错误","新密码为空",QMessageBox::Ok);
        return;
    }
    if(newpassword!=EnsurePassword){
        QMessageBox::information(this,"错误","两次密码输入不一致",QMessageBox::Ok);
        return;
    }
    QString md5;
    QByteArray str=QCryptographicHash::hash(newpassword.toLatin1(),QCryptographicHash::Md5);
    md5.append(str.toHex());

    QSqlQuery query(db);
    query.prepare("update user set Password=? where Username=?");
    query.addBindValue(md5);
    query.addBindValue(GlobalUsername);
    query.exec();
    QMessageBox::information(NULL,"提示","密码修改成功！",QMessageBox::Yes);
    this->close();
}
