/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *Nombre;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *registro;
    QPushButton *delete_2;
    QLineEdit *Cuenta;
    QLineEdit *saldo;
    QPushButton *add;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(589, 483);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 561, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Nombre = new QLineEdit(gridLayoutWidget);
        Nombre->setObjectName(QStringLiteral("Nombre"));

        gridLayout_2->addWidget(Nombre, 5, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 3);

        registro = new QLineEdit(gridLayoutWidget);
        registro->setObjectName(QStringLiteral("registro"));

        gridLayout_2->addWidget(registro, 1, 0, 1, 2);

        delete_2 = new QPushButton(gridLayoutWidget);
        delete_2->setObjectName(QStringLiteral("delete_2"));

        gridLayout_2->addWidget(delete_2, 1, 2, 1, 1);

        Cuenta = new QLineEdit(gridLayoutWidget);
        Cuenta->setObjectName(QStringLiteral("Cuenta"));

        gridLayout_2->addWidget(Cuenta, 4, 1, 1, 1);

        saldo = new QLineEdit(gridLayoutWidget);
        saldo->setObjectName(QStringLiteral("saldo"));

        gridLayout_2->addWidget(saldo, 6, 1, 1, 1);

        add = new QPushButton(gridLayoutWidget);
        add->setObjectName(QStringLiteral("add"));

        gridLayout_2->addWidget(add, 3, 2, 4, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 5, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        tableWidget_2 = new QTableWidget(gridLayoutWidget);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 1, 1, 1);

        tableWidget = new QTableWidget(gridLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(Cuenta, Nombre);
        QWidget::setTabOrder(Nombre, saldo);
        QWidget::setTabOrder(saldo, add);
        QWidget::setTabOrder(add, registro);
        QWidget::setTabOrder(registro, delete_2);
        QWidget::setTabOrder(delete_2, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, tableWidget);
        QWidget::setTabOrder(tableWidget, pushButton);
        QWidget::setTabOrder(pushButton, tableWidget_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Delete :", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Insert :", nullptr));
        delete_2->setText(QApplication::translate("MainWindow", "&Delele", nullptr));
        add->setText(QApplication::translate("MainWindow", "&Add", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Cuenta", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Saldo", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "&Index Dense", nullptr));
        label->setText(QApplication::translate("MainWindow", "Index", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "&Load", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Registros", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Index Disperse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
