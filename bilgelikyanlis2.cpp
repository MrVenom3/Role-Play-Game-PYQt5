#include "bilgelikyanlis2.h"
#include "ui_bilgelikyanlis2.h"

bilgelikyanlis2::bilgelikyanlis2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bilgelikyanlis2)
{
    ui->setupUi(this);
}

bilgelikyanlis2::~bilgelikyanlis2()
{
    delete ui;
}

void bilgelikyanlis2::on_pushButton_clicked()
{
    bilgelikyanlis2::close();
}
