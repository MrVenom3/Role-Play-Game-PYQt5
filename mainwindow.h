#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamewindow1.h"
#include <QMainWindow>
#include "gamewindow2.h"
#include "bilgelik.h"
#include "cesaret1.h"
#include "vazgec.h"
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include "bilgelikyanlis1.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString nickname;

private slots:
    void on_pushButton_go_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
