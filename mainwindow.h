#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include"confedit.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButtonConf_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    ConfEdit *ConfWin;
};

#endif // MAINWINDOW_H
