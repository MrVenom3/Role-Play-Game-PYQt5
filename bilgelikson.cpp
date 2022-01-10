#include "bilgelikson.h"
#include "ui_bilgelikson.h"

bilgelikson::bilgelikson(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bilgelikson)
{
    ui->setupUi(this);
}

bilgelikson::~bilgelikson()
{
    delete ui;
}

void bilgelikson::on_pushButton_clicked()
{
    bilgelikson::close();
}
