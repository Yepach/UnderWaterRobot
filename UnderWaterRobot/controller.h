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
    Hotkeys *getHotkeys();
    Settings *getSettings();

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    Movement *m;
    Hotkeys *h;
    Settings *s;
};

#endif // CONTROLLER_H
