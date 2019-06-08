#ifndef EDITPASS_H
#define EDITPASS_H

#include <QWidget>

namespace Ui {
class editPass;
}

class editPass : public QWidget
{
    Q_OBJECT

public:
    explicit editPass(QWidget *parent = 0);
    ~editPass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editPass *ui;
};

#endif // EDITPASS_H
