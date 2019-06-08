#ifndef CONFEDIT_H
#define CONFEDIT_H

#include <QWidget>

namespace Ui {
class ConfEdit;
}

class ConfEdit : public QWidget
{
    Q_OBJECT

public:
    explicit ConfEdit(QWidget *parent = 0);
    ~ConfEdit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ConfEdit *ui;
};

#endif // CONFEDIT_H
