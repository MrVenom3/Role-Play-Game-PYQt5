#ifndef BILGELIK_H
#define BILGELIK_H
#include "bilgelikyanlis1.h"
#include <QDialog>
#include "bilgelik2.h"
namespace Ui {
class Bilgelik;
}

class Bilgelik : public QDialog
{
    Q_OBJECT

public:
    explicit Bilgelik(QWidget *parent = nullptr);
    ~Bilgelik();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Bilgelik *ui;
};

#endif // BILGELIK_H
