#ifndef BILGELIKSON_H
#define BILGELIKSON_H

#include <QDialog>

namespace Ui {
class bilgelikson;
}

class bilgelikson : public QDialog
{
    Q_OBJECT

public:
    explicit bilgelikson(QWidget *parent = nullptr);
    ~bilgelikson();

private slots:
    void on_pushButton_clicked();

private:
    Ui::bilgelikson *ui;
};

#endif // BILGELIKSON_H
