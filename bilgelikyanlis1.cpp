#include "bilgelikyanlis1.h"
#include "ui_bilgelikyanlis1.h"

bilgelikyanlis1::bilgelikyanlis1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bilgelikyanlis1)
{
    ui->setupUi(this);
}

bilgelikyanlis1::~bilgelikyanlis1()
{
    delete ui;
}

void bilgelikyanlis1::on_pushButton_clicked()
{
    bilgelikyanlis1::close();
}
