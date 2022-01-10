#ifndef BILGELIKYANLIS2_H
#define BILGELIKYANLIS2_H

#include <QDialog>

namespace Ui {
class bilgelikyanlis2;
}

class bilgelikyanlis2 : public QDialog
{
    Q_OBJECT

public:
    explicit bilgelikyanlis2(QWidget *parent = nullptr);
    ~bilgelikyanlis2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::bilgelikyanlis2 *ui;
};

#endif // BILGELIKYANLIS2_H
