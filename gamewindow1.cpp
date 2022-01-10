#include "gamewindow1.h"
#include "ui_gamewindow1.h"
#include "mainwindow.h"

gamewindow1::gamewindow1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow1)
{
    ui->setupUi(this);
}

gamewindow1::~gamewindow1()
{
    delete ui;
    QPixmap pix("C:/Users/Batuhan/Desktop/ResimlerProje/olymposdag");
    ui->label_p1->setPixmap(pix);






}

void gamewindow1::on_pushButton_clicked()
{
this->hide();
    gamewindow2 gamewindow2;
    gamewindow2.setModal(true);
    gamewindow2.exec();

}

void gamewindow1::on_pushButton_2_clicked()
{
    this->hide();
    vazgec vazgec;
    vazgec.exec();
}
