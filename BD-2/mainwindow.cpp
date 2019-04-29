#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(4);
    QStringList titulos;
    titulos<<"REGISTRO"<<"CUENTA"<<"NOMBRE"<<"SALDO";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);

    ////////////////////////////////////////
    ui->tableWidget_2->setColumnCount(2);
    QStringList titu;
    titu<<"Key"<<"Address";
    ui->tableWidget_2->setHorizontalHeaderLabels(titu);

    ////////////////////////////////////
    setCentralWidget(ui->gridLayoutWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    IndexD.Index.clear();
    IndexD.Registre.clear();
    IndexD.i=0;
    IndexD.Load();
    ui->tableWidget->setRowCount(0);
    for(auto it=IndexD.Registre.begin();it!=IndexD.Registre.end();it++){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        int fila = ui->tableWidget->rowCount()-1;
        ui->tableWidget->setItem(fila,REGISTRO,new QTableWidgetItem(QString::number((*(it))->registro)));
        ui->tableWidget->setItem(fila,CUENTA,new QTableWidgetItem((*(it))->cuenta));
        ui->tableWidget->setItem(fila,NOMBRE,new QTableWidgetItem((*(it))->name));
        ui->tableWidget->setItem(fila,SALDO,new QTableWidgetItem((*(it))->saldo));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    IndexD.state=1;
    IndexD.IndexDense();
    actualizar();
}

void MainWindow::actualizar(){

    if(!IndexD.Index.empty()){
        ui->tableWidget_2->setRowCount(0);
        for(auto it:IndexD.Index){
            //cout<<it.first<<endl;
            ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
            int fila = ui->tableWidget_2->rowCount()-1;
            ui->tableWidget_2->setItem(fila,table2::NOMBRE1,new QTableWidgetItem(QString::fromStdString(it.first)));
            QString dir=QString::number((long long)it.second.front(),16);
            ui->tableWidget_2->setItem(fila,table2::CUENTA1,new QTableWidgetItem(dir));
        }
    }

    if(IndexD.Indexado.empty()){
        ui->tableWidget->setRowCount(0);
        for(auto it=IndexD.Registre.begin();it!=IndexD.Registre.end();it++){
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            int fila = ui->tableWidget->rowCount()-1;
            ui->tableWidget->setItem(fila,REGISTRO,new QTableWidgetItem(QString::number((*(it))->registro)));
            ui->tableWidget->setItem(fila,CUENTA,new QTableWidgetItem((*(it))->cuenta));
            ui->tableWidget->setItem(fila,NOMBRE,new QTableWidgetItem((*(it))->name));
            ui->tableWidget->setItem(fila,SALDO,new QTableWidgetItem((*(it))->saldo));
        }
    }
    else{
        ui->tableWidget->setRowCount(0);
        for(auto it=IndexD.Indexado.begin();it!=IndexD.Indexado.end();it++){
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            int fila = ui->tableWidget->rowCount()-1;
            ui->tableWidget->setItem(fila,REGISTRO,new QTableWidgetItem(QString::number((*(it))->registro)));
            ui->tableWidget->setItem(fila,CUENTA,new QTableWidgetItem((*(it))->cuenta));
            ui->tableWidget->setItem(fila,NOMBRE,new QTableWidgetItem((*(it))->name));
            ui->tableWidget->setItem(fila,SALDO,new QTableWidgetItem((*(it))->saldo));
        }
    }

}


void MainWindow::on_delete_2_clicked()
{
    IndexD.Delete1(ui->registro->text().toInt());
    actualizar();
}

void MainWindow::on_add_clicked()
{
    IndexD.insert(ui->Cuenta->text().toStdString(),ui->Nombre->text().toStdString(),ui->saldo->text().toStdString());
    actualizar();
}

void MainWindow::on_pushButton_3_clicked()
{
    IndexD.IndexDisperse();
    IndexD.state=2;
    actualizar();
}
