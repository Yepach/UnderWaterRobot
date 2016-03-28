#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "QString"
#include "movement.h"
#include "hotkeys.h"
#include "settings.h"
#include <QKeyEvent>
#include <QtGui>
#include <QWidget>


class Controller : public QObject
{

public:
    Controller();
    QString getMovementsMessage();
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);
    double getSpeed();
    Hotkeys *getKeyboardHotkeys();
    Hotkeys *getJoystickHotkeys();
    Settings *getSettings();
    Movement *getMovement();
    void setKeyboard(bool keyboard){Keyboard = keyboard;}

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    Movement *m;
    Hotkeys *hKeybaord;
    Hotkeys *hJoystick;
    Hotkeys *h;
    Settings *s;
    bool Keyboard;
};

#endif // CONTROLLER_H
