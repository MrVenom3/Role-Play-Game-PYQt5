#ifndef CESARETSAVAS2_H
#define CESARETSAVAS2_H
#include "cesaretkac2.h"
#include <QDialog>
#include "cesaretsavas1.h"
namespace Ui {
class cesaretsavas2;
}

class cesaretsavas2 : public QDialog
{
    Q_OBJECT

public:
    explicit cesaretsavas2(QWidget *parent = nullptr);
    ~cesaretsavas2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cesaretsavas2 *ui;
};

#endif // CESARETSAVAS2_H
