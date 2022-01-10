#ifndef CESARET1_H
#define CESARET1_H
#include "cesaretkac1.h"
#include <QDialog>
#include "cesaretsavas2.h"
namespace Ui {
class cesaret1;
}

class cesaret1 : public QDialog
{
    Q_OBJECT

public:
    explicit cesaret1(QWidget *parent = nullptr);
    ~cesaret1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cesaret1 *ui;
};

#endif // CESARET1_H
