#include "cesaretsavas1.h"
#include "ui_cesaretsavas1.h"

cesaretsavas1::cesaretsavas1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cesaretsavas1)
{
    ui->setupUi(this);
}

cesaretsavas1::~cesaretsavas1()
{
    delete ui;
}

void cesaretsavas1::on_pushButton_clicked()
{
    cesaretsavas1::close();
}
