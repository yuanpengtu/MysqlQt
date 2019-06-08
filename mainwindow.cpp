#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"common.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include<QDateTime>
#include<QDebug>
#include"editpass.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("user");
    model->select();
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setSort(0, Qt::AscendingOrder);
    ui->tableView->setModel(model);

    this->setWindowTitle("主窗口");

    QDateTime exit_time=QDateTime::currentDateTime();
    QSqlQuery query(db);
    query.prepare("update user set Lastlogintime=? where Username=?");
    query.addBindValue(exit_time);
    query.addBindValue(GlobalUsername);
    query.exec();
    query.clear();



    QString backString;
    query.prepare("select Background,Font from user where Username=?");
    query.addBindValue(GlobalUsername);
    query.exec();
    while(query.next())
    {
        int background=query.value(0).toInt();
        QString font_set=query.value(1).toString();
        switch (background) {
        case 1:
            backString=":/resource/backmain1.jpg";
            break;
        case 2:
            backString=":/resource/backmain2.jpg";
            break;
        case 3:
            backString=":/resource/backmain3.jpg";
            break;
        case 4:
            backString=":/resource/backmain4.jpg";
            break;
        case 5:
            backString=":/resource/backmain5.jpg";
            break;
        default:
            backString=":/resource/backmain1.jpg";
            break;
        }

        QFont fontmain(font_set,8,50);
        this->setFont(fontmain);
        break;
    }
    QPixmap pixmaplogin(backString);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(pixmaplogin));
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButtonConf_clicked()
{
    ConfWin=new ConfEdit;
    ConfWin->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    editPass *editWin=new editPass;
    editWin->show();
}
