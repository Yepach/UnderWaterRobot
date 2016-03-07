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
    ui->progressBar->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderLeft->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderBack->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderRight->setFocusPolicy(Qt::NoFocus);
    ui->labelLeftMotorValue->setText("0");
    ui->labelRearMotorValue->setText("0");
    ui->labelRightMotorValue->setText("0");

    //ui->verticalSliderBack->

    StatMovement = new QLabel(this);
    ui->statusBar->addPermanentWidget(StatMovement);
    ui->progressBar->setOrientation(Qt::Vertical);

    c = new Controller();
    c->installEventFilter(this);
    this->installEventFilter(c);

    ui->actionBattery_Life->setChecked(true);
    ui->actionDepth->setChecked(true);
    ui->actionPressure->setChecked(true);
    ui->actionSpeed->setChecked(true);
    ui->actionTempurature->setChecked(true);
}

void MainWindow::showDisplay()
{
    StatMovement->setText(c->getMovementsMessage());
    ui->progressBar->setValue(c->getSpeed()*100);
    displayProgressBar(c->getSpeed());
    displaySettings();
}

void MainWindow::displayProgressBar(double n)
{
    if(n >= 0 && n < 0.50)
        ui->progressBar->setStyleSheet(QString("QProgressBar::chunk:vertical {background: qlineargradient(x1: 0.5, y1: 1, x2: 0.5, y2: 0, stop: 0 green, stop: 1 green);}"));
    else if(n >= 0.50 && n < 0.90)
        ui->progressBar->setStyleSheet(QString("QProgressBar::chunk:vertical {background: qlineargradient(x1: 0.5, y1: 1, x2: 0.5, y2: 0, stop: 0 green, stop: 1 orange);}"));
    else
        ui->progressBar->setStyleSheet(QString("QProgressBar::chunk:vertical {background: qlineargradient(x1: 0.5, y1: 1, x2: 0.5, y2: 0, stop: 0 green, stop: 1 red);}"));
}
void MainWindow::displaySettings(){
    resetSettingLabels();
    int n = 0;
    for (int i =  0; i < c->getSettings()->n; i++){
        if (c->getSettings()->set[i].display == true){
            setSettingLabels(n,i);
            n++;
        }
    }
}
void MainWindow::resetSettingLabels(){
    ui->labelStats1->setText("");
    ui->labelStatsValue1->setText("");
    ui->labelStats2->setText("");
    ui->labelStatsValue2->setText("");
    ui->labelStats3->setText("");
    ui->labelStatsValue3->setText("");
    ui->labelStats4->setText("");
    ui->labelStatsValue4->setText("");
    ui->labelStats5->setText("");
    ui->labelStatsValue5->setText("");
    ui->labelStats6->setText("");
    ui->labelStatsValue6->setText("");
    ui->labelStats7->setText("");
    ui->labelStatsValue7->setText("");
    ui->labelStats8->setText("");
    ui->labelStatsValue8->setText("");
    ui->labelStats9->setText("");
    ui->labelStatsValue9->setText("");
}
void MainWindow::setSettingLabels(int n, int i){
    switch (n)
    {
    case 0:
    ui->labelStats1->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue1->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 1:
    ui->labelStats2->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue2->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 2:
    ui->labelStats3->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue3->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 3:
    ui->labelStats4->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue4->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 4:
    ui->labelStats5->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue5->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 5:
    ui->labelStats6->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue6->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 6:
    ui->labelStats7->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue7->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 7:
    ui->labelStats8->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue8->setText(QString::number(c->getSettings()->set[i].value));
    break;

    case 8:
    ui->labelStats9->setText(c->getSettings()->set[i].name+":");
    ui->labelStatsValue9->setText(QString::number(c->getSettings()->set[i].value));
    break;
    }
}
void MainWindow::on_actionHotkeys_triggered()
{
    hw = new hotkeysWindow(c->getHotkeys());
    hw->show();
}

void MainWindow::on_actionSpeed_toggled(bool arg1)
{
   for (int i = 0; i < c->getSettings()->n; i++)
       if(c->getSettings()->set[i].name == "Speed")
           c->getSettings()->set[i].display = arg1;
}

void MainWindow::on_actionBattery_Life_toggled(bool arg1)
{
    for (int i = 0; i < c->getSettings()->n; i++)
        if(c->getSettings()->set[i].name == "Battery Life")
            c->getSettings()->set[i].display = arg1;
}

void MainWindow::on_actionPressure_toggled(bool arg1)
{
    for (int i = 0; i < c->getSettings()->n; i++)
        if(c->getSettings()->set[i].name == "Pressure")
            c->getSettings()->set[i].display = arg1;
}

void MainWindow::on_actionTempurature_toggled(bool arg1)
{
    for (int i = 0; i < c->getSettings()->n; i++)
        if(c->getSettings()->set[i].name == "Temperature")
            c->getSettings()->set[i].display = arg1;
}

void MainWindow::on_actionDepth_toggled(bool arg1)
{
    for (int i = 0; i < c->getSettings()->n; i++)
        if(c->getSettings()->set[i].name == "Depth")
            c->getSettings()->set[i].display = arg1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_verticalSliderLeft_valueChanged(int value)
{
    if(value > 50)
        value++;
    ui->labelLeftMotorValue->setText(QString::number((int)(value*3.6)));
}

void MainWindow::on_verticalSliderBack_valueChanged(int value)
{
    if(value > 50)
        value++;
    ui->labelRearMotorValue->setText(QString::number((int)(value*3.6)));
}

void MainWindow::on_verticalSliderRight_valueChanged(int value)
{
    if(value > 50)
        value++;
    ui->labelRightMotorValue->setText(QString::number((int)(value*3.6)));
}
