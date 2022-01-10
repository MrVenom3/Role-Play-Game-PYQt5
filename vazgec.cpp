#include "vazgec.h"
#include "ui_vazgec.h"

vazgec::vazgec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vazgec)
{
    ui->setupUi(this);
}

vazgec::~vazgec()
{
    delete ui;
}

void vazgec::on_pushButton_clicked()
{
    vazgec::close();
}
