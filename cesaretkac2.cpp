#include "cesaretkac2.h"
#include "ui_cesaretkac2.h"

cesaretkac2::cesaretkac2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cesaretkac2)
{
    ui->setupUi(this);
}

cesaretkac2::~cesaretkac2()
{
    delete ui;
}

void cesaretkac2::on_pushButton_clicked()
{
    cesaretkac2::close();
}
