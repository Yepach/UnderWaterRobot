#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Underwater Robot");
    setCentralWidget(ui->gridLayoutWidget);

    ui->graphicsView->setFocusPolicy(Qt::NoFocus);
    ui->centralWidget->setFocusPolicy(Qt::NoFocus);
    ui->verticalSlider->setFocusPolicy(Qt::NoFocus);

    StatMovement = new QLabel(this);
    ui->statusBar->addPermanentWidget(StatMovement);

    c = new Controller();
    c->installEventFilter(this);
    this->installEventFilter(c);
}

void MainWindow::showDisplay(){
    StatMovement->setText(c->getMovementsMessage());
    ui->verticalSlider->setValue(c->getSpeed()*100);
    ui->speedLabel->setText(QString::number(c->getSpeed()*100)+"%");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionHotkeys_triggered()
{
    hw = new hotkeysWindow(c->getHotkeys());
    hw->show();
}
