#include "cesaretkac1.h"
#include "ui_cesaretkac1.h"

cesaretkac1::cesaretkac1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cesaretkac1)
{
    ui->setupUi(this);
}

cesaretkac1::~cesaretkac1()
{
    delete ui;
}

void cesaretkac1::on_pushButton_clicked()
{
    cesaretkac1::close();
}
