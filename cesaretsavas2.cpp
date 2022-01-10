#include "cesaretsavas2.h"
#include "ui_cesaretsavas2.h"

cesaretsavas2::cesaretsavas2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cesaretsavas2)
{
    ui->setupUi(this);
}

cesaretsavas2::~cesaretsavas2()
{
    delete ui;
}

void cesaretsavas2::on_pushButton_clicked()
{
    this->hide();
    cesaretkac2 cesaretkac2;
    cesaretkac2.exec();
}

void cesaretsavas2::on_pushButton_2_clicked()
{
    this->hide();
    cesaretsavas1 cesaretsavas1;
    cesaretsavas1.exec();
}
