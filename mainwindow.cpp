#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow1.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::on_pushButton_go_clicked()
{
    QString nickname=ui->lineEdit_1->text();
    if(nickname==""){
         QMessageBox::warning(this,"Giriş","Adını vermeden kapıdan geçemezsin savaşçı!");


    }
    else{
        this->hide();
            gamewindow1 gamewindow1;
            gamewindow1.setModal(true);
            gamewindow1.exec();


        }



}

