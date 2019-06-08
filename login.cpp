#include "login.h"
#include "ui_login.h"
#include"mainwindow.h"
#include"registerwin.h"
#include"common.h"
#include<QSqlQuery>
#include<QDebug>
#include<QMessageBox>
#include<QCryptographicHash>
QString GlobalUsername;
QString GlobalPassword;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("登录");
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

void login::on_ButtonLogin_clicked()
{
    QString Username_tmp=ui->lineEditName->text();
    QString Password_tmp=ui->lineEditPassword->text();


    QString md5;
    QByteArray str=QCryptographicHash::hash(Password_tmp.toLatin1(),QCryptographicHash::Md5);
    md5.append(str.toHex());

    QSqlQuery query(db);
    QString search=QString("select count(*) from user where Username='%1' and Password='%2'").arg(Username_tmp).arg(md5);
    if(!query.exec(search))
    {
        QMessageBox::information(NULL,"提示","数据库出错！",QMessageBox::Yes);
    }
    else{
        while(query.next())
        {
            if(query.value(0).toInt()==1)
            {
                GlobalUsername=Username_tmp;
                GlobalPassword=md5;
                Win=new MainWindow();
                Win->show();
                this->close();
                break;
            }
            else{
                QMessageBox::information(NULL,"提示","用户名或密码错误！",QMessageBox::Yes);
                break;
            }
        }
    }
}

void login::on_ButtonRegister_clicked()
{
    register_win=new registerWin();
    register_win->show();
    this->close();
}
