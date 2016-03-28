#include "hotkeyswindow.h"
#include "ui_hotkeyswindow.h"

hotkeysWindow::hotkeysWindow(Hotkeys *h, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hotkeysWindow)
{
    ui->setupUi(this);
    setWindowTitle("Hotkeys");
    this->h = h;

    displayButtonsText();
    setTabOrder(ui->forwardHotkeyButton,ui->backwardsHotkeyButton);
    setTabOrder(ui->backwardsHotkeyButton, ui->speedIncreaseHotkeyButton);
    setTabOrder(ui->speedIncreaseHotkeyButton,ui->straftRightHotkeyButton);
    setTabOrder(ui->straftRightHotkeyButton,ui->straftLeftHotkeyButton);
    setTabOrder(ui->straftLeftHotkeyButton,ui->speedDecreaseHotkeyButton);
    setTabOrder(ui->speedDecreaseHotkeyButton,ui->upHotkeyButton);
    setTabOrder(ui->upHotkeyButton,ui->downHotkeyButton);
    setTabOrder(ui->downHotkeyButton,ui->takePictureHotkeyButtton);
    setTabOrder(ui->takePictureHotkeyButtton,ui->pitchUpHotkeyButton);
    setTabOrder(ui->pitchUpHotkeyButton,ui->pitchDownHotkeyButton);
    setTabOrder(ui->pitchDownHotkeyButton,ui->rollRightHotkeyButton);
    setTabOrder(ui->rollRightHotkeyButton,ui->rollLeftHotkeyButton);
    setTabOrder(ui->rollLeftHotkeyButton,ui->turnRightHotkeyButton);
    setTabOrder(ui->turnRightHotkeyButton,ui->turnLeftHotkeyButton);
    setTabOrder(ui->turnLeftHotkeyButton,ui->defaultKeysButton);
    setTabOrder(ui->defaultKeysButton,ui->exitButton);
    setTabOrder(ui->exitButton,ui->forwardHotkeyButton);

}

hotkeysWindow::~hotkeysWindow()
{
    delete ui;
}

void hotkeysWindow::displayButtonsText()
{
    ui->backwardsHotkeyButton->setText(h->buttonWordBank(h->getBackwards()));
    ui->downHotkeyButton->setText(h->buttonWordBank(h->getDown()));
    ui->forwardHotkeyButton->setText(h->buttonWordBank(h->getForward()));
    ui->pitchDownHotkeyButton->setText(h->buttonWordBank(h->getPitch_Down()));
    ui->pitchUpHotkeyButton->setText(h->buttonWordBank(h->getPitch_Up()));
    ui->rollLeftHotkeyButton->setText(h->buttonWordBank(h->getRoll_Left()));
    ui->rollRightHotkeyButton->setText(h->buttonWordBank(h->getRoll_Right()));
    ui->speedDecreaseHotkeyButton->setText(h->buttonWordBank(h->getSpeed_Decrease()));
    ui->speedIncreaseHotkeyButton->setText(h->buttonWordBank(h->getSpeed_Increase()));
    ui->straftLeftHotkeyButton->setText(h->buttonWordBank(h->getStraft_Left()));
    ui->straftRightHotkeyButton->setText(h->buttonWordBank(h->getStraft_Right()));
    ui->takePictureHotkeyButtton->setText(h->buttonWordBank(h->getPicture_Capture()));
    ui->turnLeftHotkeyButton->setText(h->buttonWordBank(h->getTurn_Left()));
    ui->turnRightHotkeyButton->setText(h->buttonWordBank(h->getTurn_Right()));
    ui->upHotkeyButton->setText(h->buttonWordBank(h->getUp()));
}

void hotkeysWindow::doThingsWhenClicked(QPushButton *b)
{
    h->installEventFilter(b);
    b->installEventFilter(h);

    while(h->changed == false)
    {
        b->setText("Press Key");
        QApplication::processEvents();
    }
    h->changed = false;
    checkDuplicationAndRemove(h->changedKey);
    b->setText(h->buttonWordBank(h->changedKey));
    b->removeEventFilter(h);

}
void hotkeysWindow::on_forwardHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->forwardHotkeyButton);
    h->setForward(h->changedKey);
}
void hotkeysWindow::on_straftRightHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->straftRightHotkeyButton);
    h->setStraft_Right(h->changedKey);
}
void hotkeysWindow::on_upHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->upHotkeyButton);
    h->setUp(h->changedKey);
}
void hotkeysWindow::on_pitchUpHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->pitchUpHotkeyButton);
    h->setPitch_Up(h->changedKey);
}
void hotkeysWindow::on_rollRightHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->rollRightHotkeyButton);
    h->setRoll_Right(h->changedKey);
}
void hotkeysWindow::on_turnRightHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->turnRightHotkeyButton);
    h->setTurn_Right(h->changedKey);
}
void hotkeysWindow::on_backwardsHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->backwardsHotkeyButton);
    h->setBackwards(h->changedKey);
}
void hotkeysWindow::on_straftLeftHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->straftLeftHotkeyButton);
    h->setStraft_Left(h->changedKey);
}
void hotkeysWindow::on_downHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->downHotkeyButton);
    h->setDown(h->changedKey);
}
void hotkeysWindow::on_pitchDownHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->pitchDownHotkeyButton);
    h->setPitch_Down(h->changedKey);
}
void hotkeysWindow::on_rollLeftHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->rollLeftHotkeyButton);
    h->setRoll_Left(h->changedKey);
}
void hotkeysWindow::on_turnLeftHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->turnLeftHotkeyButton);
    h->setTurn_Left(h->changedKey);
}
void hotkeysWindow::on_speedIncreaseHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->speedIncreaseHotkeyButton);
    h->setSpeed_Increase(h->changedKey);
}
void hotkeysWindow::on_speedDecreaseHotkeyButton_clicked()
{
    doThingsWhenClicked(ui->speedDecreaseHotkeyButton);
    h->setSpeed_Decrease(h->changedKey);
}
void hotkeysWindow::on_takePictureHotkeyButtton_clicked()
{
    doThingsWhenClicked(ui->takePictureHotkeyButtton);
    h->setPicture_Capture(h->changedKey);
}
void hotkeysWindow::checkDuplicationAndRemove(int n)
{
    if(n == h->getBackwards()){
        h->setBackwards(0);
        ui->backwardsHotkeyButton->setText("");
    }
    if(n == h->getDown()){
        h->setDown(0);
        ui->downHotkeyButton->setText("");
    }
    if(n == h->getForward()){
        h->setForward(0);
        ui->forwardHotkeyButton->setText("");
    }
    if(n == h->getPitch_Down()){
        h->setPitch_Down(0);
        ui->pitchDownHotkeyButton->setText("");
    }
    if(n == h->getPitch_Up()){
        h->setPitch_Up(0);
        ui->pitchUpHotkeyButton->setText("");
    }
    if(n == h->getRoll_Left()){
        h->setRoll_Left(0);
        ui->rollLeftHotkeyButton->setText("");
    }
    if(n == h->getRoll_Right()){
        h->setRoll_Right(0);
        ui->rollRightHotkeyButton->setText("");
    }
    if(n == h->getSpeed_Decrease()){
        h->setSpeed_Decrease(0);
        ui->speedDecreaseHotkeyButton->setText("");
    }
    if(n == h->getSpeed_Increase()){
        h->setSpeed_Increase(0);
        ui->speedIncreaseHotkeyButton->setText("");
    }
    if(n == h->getStraft_Left()){
        h->setStraft_Left(0);
        ui->straftLeftHotkeyButton->setText("");
    }
    if(n == h->getStraft_Right()){
        h->setStraft_Right(0);
        ui->straftRightHotkeyButton->setText("");
    }
    if(n == h->getPicture_Capture()){
        h->setPicture_Capture(0);
        ui->takePictureHotkeyButtton->setText("");
    }
    if(n == h->getTurn_Left()){
        h->setTurn_Left(0);
        ui->turnLeftHotkeyButton->setText("");
    }
    if(n == h->getTurn_Right()){
        h->setTurn_Right(0);
        ui->turnRightHotkeyButton->setText("");
    }
    if(n == h->getUp()){
        h->setUp(0);
        ui->upHotkeyButton->setText("");
    }
}


void hotkeysWindow::on_defaultKeysButton_clicked()
{
    h->resetKeys();
    displayButtonsText();
}

void hotkeysWindow::on_pushButton_clicked()
{
    h->saveHotkeys();
    ui->exitButton->click();
}

void hotkeysWindow::on_exitButton_clicked()
{
    h->loadHotkeys();
}
