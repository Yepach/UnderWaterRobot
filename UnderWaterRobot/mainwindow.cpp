#include "mainwindow.h"
#include "ui_mainwindow.h"


/* Bug: When Right, Up and yaw clockwise is pressed not proper combination shown
 *
 *
 *
 */


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Underwater Robot");
    setCentralWidget(ui->gridLayoutWidget);


   // ui->graphicsView->setFocusPolicy(Qt::NoFocus);
    ui->centralWidget->setFocusPolicy(Qt::NoFocus);
    ui->progressBar->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderLeft->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderBack->setFocusPolicy(Qt::NoFocus);
    ui->verticalSliderRight->setFocusPolicy(Qt::NoFocus);
    ui->labelLeftMotorValue->setText("0");
    ui->labelRearMotorValue->setText("0");
    ui->labelRightMotorValue->setText("0");

    ui->mainToolBar->hide();
    QFont font =  ui->labelStatistics->font();
    font.setPointSize(16);
    font.setBold(true);
    ui->labelStatistics->setFont(font);
    ui->labelStatistics->hide();
    Keyboard = 0;

    this->setStyleSheet("background-color:rgb(200,254,254);");
    ui->menuSettings->setStyleSheet("background-color:rgb(254,254,254);");
    ui->menuBar->setStyleSheet("background-color:rgb(254,254,254);");


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

    pixCameraCannotConnect.load(":/Images/CameraCannotConnect.png");
    pixCameraCannotConnect2.load(":/Images/CameraCannotConnect2.png");
    ui->labelView->setPixmap(pixCameraCannotConnect);

    this->showMaximized();

    /****************************** Images for arrows *****************/
    int imageSize = 50;
    pixDownBlank.load(":/Images/ArrowBlankDown.png");
    pixUpBlank.load(":/Images/ArrowBlankUp.png");
    pixRightBlank.load(":/Images/ArrowBlankRight.png");
    pixLeftBlank.load(":/Images/ArrowBlankLeft.png");
    pixForwardBlank.load(":/Images/ArrowBlankForward.png");
    pixBackwardsBlank.load(":/Images/ArrowBlankBackwards.png");

    pixDownFull.load(":/Images/ArrowFullDown.png");
    pixUpFull.load(":/Images/ArrowFullUp.png");
    pixRightFull.load(":/Images/ArrowFullRight.png");
    pixLeftFull.load(":/Images/ArrowFullLeft.png");
    pixForwardFull.load(":/Images/ArrowFullForward.png");
    pixBackwardsFull.load(":/Images/ArrowFullBackwards.png");

    pixDownFullCounter.load(":/Images/ArrowFullDownCounter.png");
    pixLeftFullCounter.load(":/Images/ArrowFullLeftCounter.png");
    pixForwardFullCounter.load(":/Images/ArrowFullForwardCounter.png");
    pixBackwardsFullClockwise.load(":/Images/ArrowFullBackwardsClockwise.png");

    pixDownFullClockwise.load(":/Images/ArrowFullDownClockwise.png");
    pixLeftFullClockwise.load(":/Images/ArrowFullLeftClockwise.png");
    pixForwardCounter.load(":/Images/ArrowForwardCounter.png");
    pixBackwardsClockwise.load(":/Images/ArrowBackwardsClockwise.png");

    pixDownClockwise.load(":/Images/ArrowDownClockwise.png");
    pixLeftClockwise.load(":/Images/ArrowLeftClockwise.png");
    pixDownCounter.load(":/Images/ArrowDownCounter.png");
    pixLeftCounter.load(":/Images/ArrowLeftCounter.png");

    pixDownBlank = pixDownBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixUpBlank = pixUpBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixRightBlank = pixRightBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftBlank = pixLeftBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixForwardBlank = pixForwardBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixBackwardsBlank = pixBackwardsBlank.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);

    pixDownFull = pixDownFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixUpFull = pixUpFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixRightFull = pixRightFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftFull = pixLeftFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixForwardFull = pixForwardFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixBackwardsFull = pixBackwardsFull.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);

    pixDownFullCounter = pixDownFullCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftFullCounter = pixLeftFullCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixForwardFullCounter = pixForwardFullCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixBackwardsFullClockwise = pixBackwardsFullClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);

    pixDownFullClockwise = pixDownFullClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftFullClockwise = pixLeftFullClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixForwardCounter = pixForwardCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixBackwardsClockwise = pixBackwardsClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);

    pixDownClockwise = pixDownClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftClockwise = pixLeftClockwise.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixDownCounter = pixDownCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pixLeftCounter = pixLeftCounter.scaled(imageSize,imageSize,Qt::KeepAspectRatio, Qt::SmoothTransformation);

    /****************** Images for arrows end ********************/

}

void MainWindow::showDisplay()
{
    StatMovement->setText(c->getMovementsMessage());
    ui->progressBar->setValue(c->getSpeed()*100);
    displayProgressBar(c->getSpeed());
    displaySettings();
    displayArrowImages();
}

void MainWindow::displayArrowImages()
{
    //Decide Up Image
    if(c->getMovement()->getUpDown() == 1)
        ui->labelUpImage->setPixmap(pixUpFull);
    else
        ui->labelUpImage->setPixmap(pixUpBlank);

    //Decide Down Image
    if(c->getMovement()->getUpDown() == -1)
    {
        if(c->getMovement()->getYaw() == -1)
            ui->labelDownImage->setPixmap(pixDownFullClockwise);
        else if(c->getMovement()->getYaw() == 1)
            ui->labelDownImage->setPixmap(pixDownFullCounter);
        else
            ui->labelDownImage->setPixmap(pixDownFull);
    }
    else
    {
        if(c->getMovement()->getYaw() == -1)
            ui->labelDownImage->setPixmap(pixDownClockwise);
        else if(c->getMovement()->getYaw() == 1)
            ui->labelDownImage->setPixmap(pixDownCounter);
        else
            ui->labelDownImage->setPixmap(pixDownBlank);
    }

    //Decide Right Image
    if(c->getMovement()->getStraft() == 1)
        ui->labelRightImage->setPixmap(pixRightFull);
    else
        ui->labelRightImage->setPixmap(pixRightBlank);

    //Decide Left Image
    if(c->getMovement()->getStraft() == -1)
    {
        if(c->getMovement()->getPitch() == -1)
            ui->labelLeftImage->setPixmap(pixLeftFullClockwise);
        else if(c->getMovement()->getPitch() == 1)
            ui->labelLeftImage->setPixmap(pixLeftFullCounter);
        else
            ui->labelLeftImage->setPixmap(pixLeftFull);
    }
    else
    {
        if(c->getMovement()->getPitch() == -1)
            ui->labelLeftImage->setPixmap(pixLeftClockwise);
        else if(c->getMovement()->getPitch() == 1)
            ui->labelLeftImage->setPixmap(pixLeftCounter);
        else
            ui->labelLeftImage->setPixmap(pixLeftBlank);
    }

    //Decide Forward Image
    if(c->getMovement()->getForwardBackward() == 1)
        if(c->getMovement()->getRoll() == -1)
            ui->labelForwardImage->setPixmap(pixForwardFullCounter);
        else
            ui->labelForwardImage->setPixmap(pixForwardFull);
    else
        if(c->getMovement()->getRoll() == -1)
            ui->labelForwardImage->setPixmap(pixForwardCounter);
        else
            ui->labelForwardImage->setPixmap(pixForwardBlank);

    //Decide Backwards Image
    if(c->getMovement()->getForwardBackward() == -1)
        if(c->getMovement()->getRoll() == 1)
            ui->labelBackwardsImage->setPixmap(pixBackwardsFullClockwise);
        else
            ui->labelBackwardsImage->setPixmap(pixBackwardsFull);
    else
        if(c->getMovement()->getRoll() == 1)
            ui->labelBackwardsImage->setPixmap(pixBackwardsClockwise);
        else
            ui->labelBackwardsImage->setPixmap(pixBackwardsBlank);

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
void MainWindow::displaySettings()
{
    resetSettingLabels();
    int n = 0;
    for (int i =  0; i < c->getSettings()->n; i++)
    {
        if (c->getSettings()->set[i].display == true)
        {
            setSettingLabels(n,i);
            n++;
        }
    }
}
void MainWindow::resetSettingLabels()
{
    // Set the font of the statistics
    QFont fontLabel =  ui->labelStats1->font();
    fontLabel.setPointSize(14);
    QFont fontNum =  ui->labelStatsValue1->font();
    fontNum.setPointSize(14);

    // Erase the text anf set the font for each text label and value label for the statistics
    ui->labelStats1->setText("");
    ui->labelStats1->setFont(fontLabel);
    ui->labelStatsValue1->setText("");
    ui->labelStatsValue1->setFont(fontNum);
    ui->labelStats2->setText("");
    ui->labelStats2->setFont(fontLabel);
    ui->labelStatsValue2->setText("");
    ui->labelStatsValue2->setFont(fontNum);
    ui->labelStats3->setText("");
    ui->labelStats3->setFont(fontLabel);
    ui->labelStatsValue3->setFont(fontNum);
    ui->labelStatsValue3->setText("");
    ui->labelStats4->setText("");
    ui->labelStats4->setFont(fontLabel);
    ui->labelStatsValue4->setText("");
    ui->labelStatsValue4->setFont(fontNum);
    ui->labelStats5->setText("");
    ui->labelStats5->setFont(fontLabel);
    ui->labelStatsValue5->setText("");
    ui->labelStatsValue5->setFont(fontNum);
    ui->labelStats6->setText("");
    ui->labelStats6->setFont(fontLabel);
    ui->labelStatsValue6->setText("");
    ui->labelStatsValue6->setFont(fontNum);
    ui->labelStats7->setText("");
    ui->labelStats7->setFont(fontLabel);
    ui->labelStatsValue7->setText("");
    ui->labelStatsValue7->setFont(fontNum);
    ui->labelStats8->setText("");
    ui->labelStats8->setFont(fontLabel);
    ui->labelStatsValue8->setText("");
    ui->labelStatsValue8->setFont(fontNum);
    ui->labelStats9->setText("");
    ui->labelStats9->setFont(fontLabel);
    ui->labelStatsValue9->setText("");
    ui->labelStatsValue9->setFont(fontNum);
}
void MainWindow::setSettingLabels(int n, int i)
{
    // Set the labels to display the statistics and their value
    // sets NA if the value has not been set yet
    // May need to change how NA is determined "Case when values equal 0"

    switch (n)
    {
    case 0:
        ui->labelStats1->setText(c->getSettings()->set[i].name+":");
        if(!c->getSettings()->set[i].value)
            ui->labelStatsValue1->setText("NA");
        else
            ui->labelStatsValue1->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 1:
        ui->labelStats2->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue2->setText("NA");
        else
        ui->labelStatsValue2->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 2:
        ui->labelStats3->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue3->setText("NA");
        else
        ui->labelStatsValue3->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 3:
        ui->labelStats4->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue4->setText("NA");
        else
        ui->labelStatsValue4->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 4:
        ui->labelStats5->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue5->setText("NA");
        else
        ui->labelStatsValue5->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 5:
        ui->labelStats6->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue6->setText("NA");
        else
        ui->labelStatsValue6->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 6:
        ui->labelStats7->setText(c->getSettings()->set[i].name+":");

        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue7->setText("NA");
        else
            ui->labelStatsValue7->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 7:
        ui->labelStats8->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue8->setText("NA");
        else
        ui->labelStatsValue8->setText(QString::number(c->getSettings()->set[i].value));
        break;

    case 8:
        ui->labelStats9->setText(c->getSettings()->set[i].name+":");
        if(c->getSettings()->set[i].value == NULL)
            ui->labelStatsValue9->setText("NA");
        else
        ui->labelStatsValue9->setText(QString::number(c->getSettings()->set[i].value));
        break;
    // Add more cases here if more statistics are needed to be displayed
    // Maybe set up a check to maximize the amount of stats that can be displayed
    }
}
void MainWindow::on_actionHotkeys_triggered()
{
    // Open the hotkeys window depending of which input device is being used
    if(Keyboard)
        hw = new hotkeysWindow(c->getKeyboardHotkeys());
    else
        hw = new hotkeysWindow(c->getJoystickHotkeys());
    hw->show();
}

// *************** Start *************
// Toggle to display which statistics to display
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

// Add here action toggle if more statistics added

// *************** End *************
// Toggle to display which statistics to display

// *************** Start *************
// Motor slider functions
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
// Motor slider functions
// *************** End *************


void MainWindow::on_actionKeyboard_toggled(bool arg1)
{
    Keyboard = arg1;
    c->setKeyboard(arg1);
}

void MainWindow::on_actionCamera_1_triggered()
{
    ui->labelView->setPixmap(pixCameraCannotConnect);
}

void MainWindow::on_actionCamera_2_triggered()
{
    ui->labelView->setPixmap(pixCameraCannotConnect2);
}
MainWindow::~MainWindow()
{
    delete ui;
}
