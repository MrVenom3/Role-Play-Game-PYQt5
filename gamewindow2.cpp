#include "gamewindow2.h"
#include "ui_gamewindow2.h"

gamewindow2::gamewindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow2)
{
    ui->setupUi(this);
}

gamewindow2::~gamewindow2()
{
    delete ui;
    QPixmap pix1("C:/Users/Batuhan/Desktop/ResimlerProje");
    ui->label_p2->setPixmap(pix1);
}

void gamewindow2::on_pushButton_clicked()
{
this->hide();
    cesaret1 cesaret1;
    cesaret1.setModal(true);
    cesaret1.exec();
}

void gamewindow2::on_pushButton_2_clicked()
{
    this->hide();
    Bilgelik bilgelik;
    bilgelik.setModal(true);
    bilgelik.exec();

}
