#ifndef REGISTRFORM_H
#define REGISTRFORM_H

#include <QDialog>
#include <QString>


// поле данных
struct PrivateData
{
    QString _name;
    QString _familie;
    QString _middleName;
    QString _phone;
    QString _Email;
    QString _login;
    QString _password;
    QString _password2;

    QString DateGeburt;
    QString _Land;
    QString _statd;
    QString _citizenship;

    QString _Vuz;
    QString _Spec;
    QString _yearFinish;

    QString degree;
    QString title;

    QString _work;
    QString _experience;

};




namespace Ui {
class RegistrForm;
}

class RegistrForm : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrForm(QWidget *parent = 0);
    ~RegistrForm();

private slots:
    void on_pushButtonClose_clicked();

    void on_pushButtonGet_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButton2Close_clicked();

    void on_pushButton2get_clicked();

    void on_pBgetPhoto_clicked();

private:
    Ui::RegistrForm *ui;
};

#endif // REGISTRFORM_H
