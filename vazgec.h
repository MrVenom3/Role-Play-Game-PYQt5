#ifndef VAZGEC_H
#define VAZGEC_H

#include <QDialog>

namespace Ui {
class vazgec;
}

class vazgec : public QDialog
{
    Q_OBJECT

public:
    explicit vazgec(QWidget *parent = nullptr);
    ~vazgec();

private slots:
    void on_pushButton_clicked();

private:
    Ui::vazgec *ui;
};

#endif // VAZGEC_H
