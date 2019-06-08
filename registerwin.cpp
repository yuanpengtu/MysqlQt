#include "registerwin.h"
#include "ui_registerwin.h"
#include"mainwindow.h"
#include"common.h"
#include<QMessageBox>
#include<QSqlQuery>
#include<QDebug>
#include<QDateTime>
#include <QCryptographicHash>
registerWin::registerWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registerWin)
{
    ui->setupUi(this);
    this->setWindowTitle("注册");
    ui->lineEditEnsure->setEchoMode(QLineEdit::Password);
    ui->lineEditNew->setEchoMode(QLineEdit::Password);
}

registerWin::~registerWin()
{
    delete ui;
}

void registerWin::on_pushButton_clicked()
{

    QString Username_register=ui->lineEditName->text();
    QString Password_register=ui->lineEditNew->text();
    QString Password_ensure=ui->lineEditEnsure->text();
    QString Gender=ui->comboBox->currentText();

    if(Gender=="男")
        Gender="male";
    else
        Gender="female";
    QSqlQuery Idall(db);
    QString searchAll="select count(*) from user";


    int idnum;
    Idall.exec(searchAll);
    while(Idall.next()){
        idnum=Idall.value(0).toInt();
        break;
    }

    QSqlQuery query(db);
    QString search=QString("select count(*) from user where Username='%1'").arg(Username_register);
    if(Username_register==""){
        QMessageBox::information(NULL,"提示","用户名为空！",QMessageBox::Yes);
        return;
    }

    if(Password_register==""){
        QMessageBox::information(NULL,"提示","输入密码为空！",QMessageBox::Yes);
        return;
    }

    if(Password_ensure!=Password_register){
        QMessageBox::information(NULL,"提示","两次输入密码不一致！",QMessageBox::Yes);
        return;
    }
    if(!query.exec(search))
    {
        QMessageBox::information(NULL,"提示","数据库出错！",QMessageBox::Yes);
    }
    else{
        while(query.next())
        {
            if(query.value(0).toInt()>=1)
            {
                QMessageBox::information(NULL,"提示","用户名已存在！",QMessageBox::Yes);
                return;

            }
            else{
                QDateTime createtime=QDateTime::currentDateTime();
                QDateTime LastLogin=createtime;
                QSqlQuery insertSql(db);
                insertSql.prepare("INSERT INTO user(Userid,Username,Password,Gender,Createtime,Lastlogintime,Background,Font)" "VALUES(:Userid,:Username,:Password,:Gender,:Createtime,:Lastlogintime,:Background,:Font)");
                insertSql.bindValue(":Userid",idnum+1);
                insertSql.bindValue(":Username",Username_register);

                QByteArray str=QCryptographicHash::hash(Password_register.toLatin1(),QCryptographicHash::Md5);
                QString md5;
                md5.append(str.toHex());
                insertSql.bindValue(":Password",md5);
                insertSql.bindValue(":Gender",Gender);
                insertSql.bindValue(":Createtime",createtime);
                insertSql.bindValue(":Lastlogintime",LastLogin);
                insertSql.bindValue(":Background",1);
                insertSql.bindValue(":Font","Microsoft YaHei");
                insertSql.exec();
                break;
            }
        }
    }
    QMessageBox::information(NULL,"提示","注册成功！",QMessageBox::Yes);
    MainWin=new MainWindow();
    MainWin->show();
    this->close();
}
