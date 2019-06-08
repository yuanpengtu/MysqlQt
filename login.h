#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include"mainwindow.h"
#include"registerwin.h"
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    QString Username;
    QString Password;
private slots:
    void on_ButtonLogin_clicked();

    void on_ButtonRegister_clicked();

private:
    Ui::login *ui;
    MainWindow *Win;
    registerWin *register_win;
};

#endif // LOGIN_H
