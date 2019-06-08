#include "mainwindow.h"
#include"login.h"
#include <QApplication>
#include<QSqlDatabase>
#include<QDebug>
#include<QPluginLoader>
#include<QMessageBox>
#include<QProcess>
#include"common.h"
QSqlDatabase db;
static bool createconnection()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("digitalp");
    db.setUserName("root");
    db.setPassword("");   //设置数据库连接账号的密码
    bool ok = db.open();
    if(ok){
        qDebug()<<"数据库连接成功";
        return 1;
    }
    else{
        QMessageBox::information(NULL,"提示","连接数据库失败!",QMessageBox::Yes);
        return 0;
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QProcess process;
    process.start("D:/360zip/MYSQLINSTALL/mysql-5.7.23-winx64/bin/mysqld.exe");
    if(!createconnection())return true;

    login w;
    w.show();
    return a.exec();
}
