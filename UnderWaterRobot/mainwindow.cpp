#include "mainwindow.h"
#include "controller.h"
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
void MainWindow::showDisplay(){
    Controller c;
    ui->label1->setText(c.Display());
}
