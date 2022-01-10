#ifndef CESARETSAVAS1_H
#define CESARETSAVAS1_H
#include "cesaretkac2.h"
#include <QDialog>

namespace Ui {
class cesaretsavas1;
}

class cesaretsavas1 : public QDialog
{
    Q_OBJECT

public:
    explicit cesaretsavas1(QWidget *parent = nullptr);
    ~cesaretsavas1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cesaretsavas1 *ui;
};

#endif // CESARETSAVAS1_H
