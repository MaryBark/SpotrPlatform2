#ifndef REGFORMADMIN_H
#define REGFORMADMIN_H

#include <QDialog>
#include "registrform.h"


namespace Ui {
class RegFormAdmin;
}

class RegFormAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit RegFormAdmin(QWidget *parent = 0);
    ~RegFormAdmin();

private slots:
    void on_pushButtonClose_clicked();

    void on_pushButtonGet_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButton2Close_clicked();

    void on_pushButton2get_clicked();

    void on_pBgetPhoto_clicked();

private:
    Ui::RegFormAdmin *ui;
};

#endif // REGFORMADMIN_H
