#ifndef CESARETKAC1_H
#define CESARETKAC1_H

#include <QDialog>

namespace Ui {
class cesaretkac1;
}

class cesaretkac1 : public QDialog
{
    Q_OBJECT

public:
    explicit cesaretkac1(QWidget *parent = nullptr);
    ~cesaretkac1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cesaretkac1 *ui;
};

#endif // CESARETKAC1_H
