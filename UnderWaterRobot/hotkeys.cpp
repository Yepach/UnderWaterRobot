#include "hotkeys.h"

Hotkeys::Hotkeys():Forward(Qt::Key_Up), Backwards(Qt::Key_Down), Straft_Right(Qt::Key_Right), Straft_Left(Qt::Key_Left),
  Up(Qt::Key_Space), Down(Qt::Key_C), Pitch_Up(Qt::Key_Z), Pitch_Down(Qt::Key_X), Roll_Right(Qt::Key_G), Roll_Left(Qt::Key_F),
  Turn_Right(Qt::Key_E), Turn_Left(Qt::Key_Q),Speed_Increase(Qt::Key_1), Speed_Decrease(Qt::Key_3), Picture_Capture(Qt::Key_2),
  changed(false), changedKey(Qt::Key_0)
{

}

void Hotkeys::resetKeys()
{
    Forward = Qt::Key_Up; Backwards = Qt::Key_Down; Straft_Right = Qt::Key_Right; Straft_Left = Qt::Key_Left;
    Up = Qt::Key_Space; Down = Qt::Key_C; Pitch_Up = Qt::Key_Z; Pitch_Down = Qt::Key_X; Roll_Right = Qt::Key_G; Roll_Left = Qt::Key_F;
    Turn_Right = Qt::Key_E; Turn_Left = Qt::Key_Q; Speed_Increase = Qt::Key_1; Speed_Decrease = Qt::Key_3; Picture_Capture = Qt::Key_2;
    changed = false; changedKey = Qt::Key_0;

}

// Getters and setters
void Hotkeys::setForward(int forw) {Forward = forw;}
int Hotkeys::getStraft_Right() const {return Straft_Right;}
void Hotkeys::setStraft_Right(int value) {Straft_Right = value;}
int Hotkeys::getSpeed_Decrease() const {return Speed_Decrease;}
void Hotkeys::setSpeed_Decrease(int value){Speed_Decrease = value;}
int Hotkeys::getSpeed_Increase() const{return Speed_Increase;}
void Hotkeys::setSpeed_Increase(int value){Speed_Increase = value;}
int Hotkeys::getStraft_Left() const{return Straft_Left;}
void Hotkeys::setStraft_Left(int value){Straft_Left = value;}
int Hotkeys::getUp() const{return Up;}
void Hotkeys::setUp(int value){Up = value;}
int Hotkeys::getDown() const{return Down;}
void Hotkeys::setDown(int value){Down = value;}
int Hotkeys::getPitch_Up() const{return Pitch_Up;}
void Hotkeys::setPitch_Up(int value){Pitch_Up = value;}
int Hotkeys::getPitch_Down() const{return Pitch_Down;}
void Hotkeys::setPitch_Down(int value){Pitch_Down = value;}
int Hotkeys::getRoll_Right() const{return Roll_Right;}
void Hotkeys::setRoll_Right(int value){Roll_Right = value;}
int Hotkeys::getRoll_Left() const{return Roll_Left;}
void Hotkeys::setRoll_Left(int value){Roll_Left = value;}
int Hotkeys::getTurn_Right() const{return Turn_Right;}
void Hotkeys::setTurn_Right(int value){Turn_Right = value;}
int Hotkeys::getTurn_Left() const{return Turn_Left;}
void Hotkeys::setTurn_Left(int value){Turn_Left = value;}
int Hotkeys::getBackwards() const{return Backwards;}
void Hotkeys::setBackwards(int value){Backwards = value;}
int Hotkeys::getForward() const{return Forward;}
int Hotkeys::getPicture_Capture() const{return Picture_Capture;}
void Hotkeys::setPicture_Capture(int value){Picture_Capture = value;}

QString Hotkeys::buttonWordBank(int n)
{
    if (n == Qt::Key_Up)
        return "DPad/LJoy Up";
    else if (n == Qt::Key_Down)
        return "DPad/LJoy Down";
    else if (n == Qt::Key_Right)
        return "DPad/LJoy Right";
    else if (n == Qt::Key_Left)
        return "DPad/LJoy Left";
    else if (n == Qt::Key_4)
        return "L1";
    else if (n == Qt::Key_F)
        return "L2";
    else if (n == Qt::Key_9)
        return "L3";
    else if (n == Qt::Key_5)
        return "R1";
    else if (n == Qt::Key_G)
        return "R2";
    else if (n == Qt::Key_C)
        return "R3";
    else if (n == Qt::Key_1)
        return "Triangle";
    else if (n == Qt::Key_2)
        return "Square";
    else if (n == Qt::Key_3)
        return "Circle";
    else if (n == Qt::Key_Space)
        return "Cross";
    else if (n == Qt::Key_Z)
        return "RJoy Up";
    else if (n == Qt::Key_X)
        return "RJoy Down";
    else if (n == Qt::Key_Q)
        return "RJoy Right";
    else if (n == Qt::Key_E)
        return "RJoy Left";
    else if (n == Qt::Key_6)
        return "Start";
    else if (n == Qt::Key_7)
        return "Select";
    else if (n == Qt::Key_8)
        return "PS";
    else
        return "";

}
QString Hotkeys::keyboardKeysWordBank(int n)
{
    // TODO if I implement keyboard hotkeys
    if (n == Qt::Key_Up)
        return "Up Arrow";
    else
        return "";
}

void Hotkeys::keyPressEvent(QKeyEvent* event)
{
    changedKey = event->key();
    changed = true;
}

void Hotkeys::keyReleaseEvent(QKeyEvent* event)
{
    changed = false;
}
bool Hotkeys::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        keyPressEvent(keyEvent);
        return true;
    }
    else if (event->type() == QEvent::KeyRelease){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        keyReleaseEvent(keyEvent);
        return true;
    }
    else {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}

