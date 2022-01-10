#ifndef CESARETKAC2_H
#define CESARETKAC2_H

#include <QDialog>

namespace Ui {
class cesaretkac2;
}

class cesaretkac2 : public QDialog
{
    Q_OBJECT

public:
    explicit cesaretkac2(QWidget *parent = nullptr);
    ~cesaretkac2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cesaretkac2 *ui;
};

#endif // CESARETKAC2_H
