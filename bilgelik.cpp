#include "bilgelik.h"
#include "ui_bilgelik.h"

Bilgelik::Bilgelik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bilgelik)
{
    ui->setupUi(this);
}

Bilgelik::~Bilgelik()
{
    delete ui;
}

void Bilgelik::on_pushButton_clicked()
{
    this->hide();
    bilgelikyanlis1 bilgelikyanlis1;
    bilgelikyanlis1.exec();
}

void Bilgelik::on_pushButton_2_clicked()
{
    this->hide();
    bilgelik2 bilgelik2;
    bilgelik2.exec();
}
