#include "regformadmin.h"
#include "ui_regformadmin.h"
#include "QFile"
#include <QTextStream>
#include <QFileDialog>


RegFormAdmin::RegFormAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegFormAdmin)
{
    ui->setupUi(this);
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();


    this->setWindowTitle(QString::fromUtf8("Регистрация администратора"));

}

RegFormAdmin::~RegFormAdmin()
{
    delete ui;
}

void RegFormAdmin::on_pushButtonClose_clicked()
{
    this->close();
}

void RegFormAdmin::on_pushButtonGet_clicked()
{
//    ui->tabWidget->tabBar()->hide();




    ui->tabWidget->setCurrentIndex(1);
//    ui->tabWidget->tabBar()->hide();
}

void RegFormAdmin::on_pushButtonBack_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->tabBar()->hide();
}

void RegFormAdmin::on_pushButton2Close_clicked()
{
    this->close();
}

void RegFormAdmin::on_pushButton2get_clicked()
{
    PrivateData data;
    data._name = ui->lEName->text();
    data._familie = ui->lEFamilie->text();
    data._middleName = ui->lEMiddleName->text();
    data._phone = ui->lENumPhone->text();
    data._Email = ui->lEEMail->text();
    data._login = ui->lineEdit_Login->text();
    data._password = ui->lineEdit1Password->text();
    data.DateGeburt = ui->dateEdit->text();
    data._Land = ui->lELand->text();
    data._statd = ui->lEStadt->text();
    data._citizenship = ui->lEcitizenship->text();

    data._Vuz = ui->lineEditVUZ->text();
    data._Spec = ui->lineEditSpec->text();
    data._yearFinish = ui->dateEditYearFinishVUS->text();

    data.degree =/* QString::fromLocal8Bit(*/ui->comboBoxPhD->currentText()/*)*/;
    data.title = /*QString::fromLocal8Bit(*/ui->comboBoxScienceRank->currentText()/*)*/;
    data._work = ui->lineEditWork->text();
    data._experience = ui->lineEditexperience->text();


    QFile file("bd.txt");
    if(file.open(QIODevice::WriteOnly))
    {
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << data._login << " " <<  data._password
            << " " << data._name << " " << data._familie
            << " " << data._middleName << " " << data.DateGeburt << " " <<
               data._phone << " " << data._Email  << " " <<
               data.DateGeburt << " " <<
               data._Land  << " " <<
               data._statd  << " " <<
               data._citizenship  << " " <<

               data._Vuz  << " " <<
               data._Spec  << " " <<
               data._yearFinish  << " " <<

               data.degree  << " " <<
               data.title << " " <<
               data._work  << " " <<
               data._experience;

        file.close();
    }

    this->close();
}

void RegFormAdmin::on_pBgetPhoto_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Выберете фотографию"),
                                                      QString(),
                                                      tr("Images (*.png *.xpm *.jpg)"));

    ui->labelImage->setPixmap(fileName);
//        scrollArea->setWidget(imageLabel);
}
