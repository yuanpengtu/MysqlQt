#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include"mainwindow.h"
namespace Ui {
class registerWin;
}

class registerWin : public QWidget
{
    Q_OBJECT

public:
    explicit registerWin(QWidget *parent = 0);
    ~registerWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registerWin *ui;
    MainWindow *MainWin;
};

#endif // REGISTERWIN_H
