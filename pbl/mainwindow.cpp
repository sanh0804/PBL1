#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->main_page->setCurrentIndex(0);
    //icon home;
//    QPixmap pixhome("C:/Users/sanhg/OneDrive/Documents/PBL2/img/home");
//    int w=ui->label1->width();
//    int h=ui->label1->height();
//    ui->label1->setPixmap(pixhome.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));

//    //icon back;
//    QPixmap pixback("C:/Users/sanhg/OneDrive/Documents/PBL2/img/back");
//    int w2=ui->label2->width();
//    int h2=ui->label2->height();
//    ui->label2->setPixmap(pixback.scaled(w2,h2,Qt::KeepAspectRatio,Qt::SmoothTransformation));

//    //icon add;
////    QPixmap pixadd("C:/Users/sanhg/OneDrive/Documents/PBL2/img/add");
////    int w3=ui->widget_3->width();
////    int h3=ui->widget_3->height();
////    ui->widget_3->setPixmap(pixadd.scaled(w3,h3,Qt::KeepAspectRatio,Qt::SmoothTransformation));


//    //icon remove;
//    QPixmap pixremove("C:/Users/sanhg/OneDrive/Documents/PBL2/img/remove");
//    int w4=ui->label4->width();
//    int h4=ui->label4->height();
//    ui->label4->setPixmap(pixremove.scaled(w3,h3,Qt::KeepAspectRatio,Qt::SmoothTransformation));

//    //icon statistic;
    qDebug()<<ui->tableWidget->width();

    ui->tableWidget->setColumnWidth(0,100);
    ui->tableWidget->setColumnWidth(1,200);
    ui->tableWidget->setColumnWidth(2,120);
    ui->tableWidget->setColumnWidth(3,100);
    ui->tableWidget->setColumnWidth(4,100);
    ui->tableWidget->setColumnWidth(5,150);
// tắt thanh ngang ở tablewidget nhân viên
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);



}

MainWindow::~MainWindow()
{
    delete ui;
}



//void MainWindow::on_pushButton_2_clicked()
//{
//    ui->main_page->setCurrentIndex(1);
//}


//nhan nut dang nhap



void MainWindow::on_logined_btn_clicked()
{
    QString user = ui->user_name->text();
    QString password = ui->password->text();
        if(user == "sanh" && password == "1"){
            logined = 1;
            ui->main_page->setCurrentIndex(1);
            ui->user_name->setText("");
            ui->password->setText("");
            ui->notify_text->setText("");
//            ui->login_btn->setText("Đăng xuất");
//            QPixmap pix_logout("C:/Users/ASUS-PRO/Downloads/logout");
//            int w=ui->login_icon->width();
//            int h=ui->login_icon->height();
//            ui->login_icon->setPixmap(pix_logout.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
//            which_page = 0;
        }
        else{
            ui->notify_text->setText("Tên đăng nhập hoặc mật khẩu sai!!!");
        }
}
void MainWindow::on_pushButton_h_1_clicked()
{
    ui->main_page->setCurrentIndex(1);
}
void MainWindow::on_pushButton_h_2_clicked()
{

        ui->main_page->setCurrentIndex(2);
}

void MainWindow::on_pushButton_h_3_clicked()
{
        ui->main_page->setCurrentIndex(3);
}

void MainWindow::on_pushButton_h_4_clicked()
{
        ui->main_page->setCurrentIndex(4);
}
void MainWindow::on_pushButton_h_5_clicked()
{
    ui->main_page->setCurrentIndex(5);
}



void MainWindow::on_pushButton_l_1_clicked()
{
    ui->main_page->setCurrentIndex(1);
}

void MainWindow::on_pushButton_l_2_clicked()
{
    ui->main_page->setCurrentIndex(2);
}

void MainWindow::on_pushButton_l_3_clicked()
{
    ui->main_page->setCurrentIndex(3);
}

void MainWindow::on_pushButton_l_4_clicked()
{
    ui->main_page->setCurrentIndex(4);
}

void MainWindow::on_pushButton_l_5_clicked()
{
    ui->main_page->setCurrentIndex(5);
}

void MainWindow::on_pushButton_a_1_clicked()
{
     ui->main_page->setCurrentIndex(1);
}

void MainWindow::on_pushButton_a_2_clicked()
{
    ui->main_page->setCurrentIndex(2);
}

void MainWindow::on_pushButton_a_3_clicked()
{
     ui->main_page->setCurrentIndex(3);
}

void MainWindow::on_pushButton_a_4_clicked()
{
    ui->main_page->setCurrentIndex(4);
}

void MainWindow::on_pushButton_a_5_clicked()
{
    ui->main_page->setCurrentIndex(5);
}

void MainWindow::on_pushButton_r_1_clicked()
{
     ui->main_page->setCurrentIndex(1);
}

void MainWindow::on_pushButton_r_2_clicked()
{
    ui->main_page->setCurrentIndex(2);
}

void MainWindow::on_pushButton_r_3_clicked()
{
     ui->main_page->setCurrentIndex(3);
}

void MainWindow::on_pushButton_r_4_clicked()
{
    ui->main_page->setCurrentIndex(4);
}

void MainWindow::on_pushButton_r_5_clicked()
{
     ui->main_page->setCurrentIndex(5);
}

void MainWindow::on_pushButton_s_1_clicked()
{
     ui->main_page->setCurrentIndex(1);
}

void MainWindow::on_pushButton_s_2_clicked()
{
    ui->main_page->setCurrentIndex(2);
}

void MainWindow::on_pushButton_s_3_clicked()
{
     ui->main_page->setCurrentIndex(3);
}

void MainWindow::on_pushButton_s_4_clicked()
{
    ui->main_page->setCurrentIndex(4);
}

void MainWindow::on_pushButton_s_5_clicked()
{
     ui->main_page->setCurrentIndex(5);
}



void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    ui->infor->setText("ID nhân viên :" +ui->tableWidget->item(row,0)->text()+"<br>"
                       +"Họ và tên :"+ui->tableWidget->item(row,1)->text() + "<br>"
                       +"Ngày sinh :" +ui->tableWidget->item(row,2)->text() +"<br>"
                       +"Giới tính: " +ui->tableWidget->item(row,3)->text() +"<br>"
                       +"ID đơn vị: " +ui->tableWidget->item(row,3)->text() + "<br>"
                       +"Chức vụ: " +ui->tableWidget->item(row,4)->text() + "<br>"

                       );
}
