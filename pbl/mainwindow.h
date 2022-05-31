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

private slots:

    void on_logined_btn_clicked();

    void on_pushButton_h_1_clicked();

    void on_pushButton_h_2_clicked();

    void on_pushButton_h_3_clicked();

    void on_pushButton_h_4_clicked();

    void on_pushButton_h_5_clicked();


    void on_pushButton_l_1_clicked();

    void on_pushButton_l_2_clicked();

    void on_pushButton_l_3_clicked();

    void on_pushButton_l_4_clicked();

    void on_pushButton_l_5_clicked();


    void on_pushButton_a_1_clicked();

    void on_pushButton_a_2_clicked();

    void on_pushButton_a_3_clicked();

    void on_pushButton_a_4_clicked();

    void on_pushButton_a_5_clicked();


    void on_pushButton_r_1_clicked();

    void on_pushButton_r_2_clicked();

    void on_pushButton_r_3_clicked();

    void on_pushButton_r_4_clicked();

    void on_pushButton_r_5_clicked();


    void on_pushButton_s_1_clicked();

    void on_pushButton_s_2_clicked();

    void on_pushButton_s_3_clicked();

    void on_pushButton_s_4_clicked();

    void on_pushButton_s_5_clicked();



    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    bool logined = 0;

};

#endif // MAINWINDOW_H
