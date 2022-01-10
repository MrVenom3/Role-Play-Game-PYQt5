#ifndef BILGELIK2_H
#define BILGELIK2_H
#include "bilgelikyanlis2.h"
#include <QDialog>
#include "bilgelikson.h"
namespace Ui {
class bilgelik2;
}

class bilgelik2 : public QDialog
{
    Q_OBJECT

public:
    explicit bilgelik2(QWidget *parent = nullptr);
    ~bilgelik2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::bilgelik2 *ui;
};

#endif // BILGELIK2_H
