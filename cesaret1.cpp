#include "cesaret1.h"
#include "ui_cesaret1.h"

cesaret1::cesaret1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cesaret1)
{
    ui->setupUi(this);
}

cesaret1::~cesaret1()
{
    delete ui;
}

void cesaret1::on_pushButton_clicked()
{
    this->hide();
    cesaretkac1 cesaretkac1;
    cesaretkac1.exec();
}

void cesaret1::on_pushButton_2_clicked()
{
    this->hide();
    cesaretsavas2 cesaretsavas2;
    cesaretsavas2.exec();
}
