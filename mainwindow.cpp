#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTabBar>

#include "registrform.h"
#include "regformadmin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(QString::fromUtf8("Интерактивная платформа для проведения спортивных соревнований"));

    ui->tabWidget->tabBar()->hide();
    connect(ui->pBRegistr, SIGNAL(clicked()), this, SLOT(getRegistr()));
    ui->rBPlayer->isChecked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getRegistr()
{
    if(ui->rBPlayer->isChecked())
        {

        RegistrForm regFormPlayer;

        if(regFormPlayer.exec())
            return;

        }
        else if(ui->rBAdmin->isChecked())
        {
            RegFormAdmin regFormAdmin;
            if(regFormAdmin.exec())
                return;
        }
}

void MainWindow::on_pushButton_clicked()
{
    QString Login = ui->lELogin->text();
    QString Password = ui->lEPassword->text();

    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonEXPERT_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonPORJIEKT_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonParty_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonHelpData_clicked()
{
    ui->tabWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonBackPro_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonBackProParty_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonBackHelp_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

