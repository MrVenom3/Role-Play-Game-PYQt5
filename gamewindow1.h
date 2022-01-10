#ifndef GAMEWINDOW1_H
#define GAMEWINDOW1_H
#include "mainwindow.h"
#include <QDialog>
#include "gamewindow2.h"
#include <QString>
namespace Ui {
class gamewindow1;
}

class gamewindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit gamewindow1(QWidget *parent = nullptr);
    ~gamewindow1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gamewindow1 *ui;
};

#endif // GAMEWINDOW1_H
