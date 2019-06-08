#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class register_ui;
}

class register_ui : public QWidget
{
    Q_OBJECT

public:
    explicit register_ui(QWidget *parent = 0);
    ~register_ui();

private:
    Ui::register_ui *ui;
};

#endif // REGISTER_H
