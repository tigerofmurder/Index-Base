#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <denso.h>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void actualizar();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_delete_2_clicked();

    void on_add_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    enum table1{
        REGISTRO,
        CUENTA,
        NOMBRE,
        SALDO
    };
    enum table2{
        NOMBRE1,
        CUENTA1

    };


    Denso IndexD;



};

#endif // MAINWINDOW_H
