#ifndef GAMEWINDOW2_H
#define GAMEWINDOW2_H
#include "gamewindow1.h"
#include "bilgelik.h"
#include <QDialog>
#include "cesaret1.h"
#include "mainwindow.h"
namespace Ui {
class gamewindow2;
}

class gamewindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit gamewindow2(QWidget *parent = nullptr);
    ~gamewindow2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gamewindow2 *ui;
};

#endif // GAMEWINDOW2_H
