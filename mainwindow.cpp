#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double K,v,kamata,R,p;
    int i;
    K=ui->lineEdit->text().toDouble();
    v=ui->lineEdit_2->text().toDouble();
    kamata=ui->lineEdit_3->text().toDouble();
    p=1+kamata/100;
    R=K*kamata*v/1200;



    ui->lineEdit_4->setText(QString::number(R));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();

}

void MainWindow::on_pushButton_3_clicked()
{
close();
}
