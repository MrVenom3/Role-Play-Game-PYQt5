#ifndef BILGELIKYANLIS1_H
#define BILGELIKYANLIS1_H
#include "mainwindow.h"
#include <QDialog>
#include <QTextStream>
namespace Ui {
class bilgelikyanlis1;
}

class bilgelikyanlis1 : public QDialog
{
    Q_OBJECT

public:
    explicit bilgelikyanlis1(QWidget *parent = nullptr);
    ~bilgelikyanlis1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::bilgelikyanlis1 *ui;
};

#endif // BILGELIKYANLIS1_H
