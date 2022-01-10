#include "bilgelik2.h"
#include "ui_bilgelik2.h"

bilgelik2::bilgelik2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bilgelik2)
{
    ui->setupUi(this);
}

bilgelik2::~bilgelik2()
{
    delete ui;
}

void bilgelik2::on_pushButton_2_clicked()
{
    this->hide();
    bilgelikyanlis2 bilgelikyanlis2;
    bilgelikyanlis2.exec();
}

void bilgelik2::on_pushButton_clicked()
{
    this->hide();
    bilgelikson bilgelikson;
    bilgelikson.exec();
}
