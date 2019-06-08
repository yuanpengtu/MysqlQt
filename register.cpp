#include "register_ui.h"
#include "ui_register.h"

register_ui::register_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_ui)
{
    ui->setupUi(this);
}

register_ui::~register_ui()
{
    delete ui;
}
