#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void getRegistr();

private slots:
    void on_pushButtonEXPERT_clicked();

    void on_pushButtonPORJIEKT_clicked();

    void on_pushButtonParty_clicked();

    void on_pushButtonHelpData_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButtonBackPro_clicked();

    void on_pushButtonBackProParty_clicked();

    void on_pushButtonBackHelp_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
