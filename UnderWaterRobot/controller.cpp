#include "controller.h"


/* The Keys that are mapped to the third party program
 *
 *                  Controller          Keyboard            Default Meaning
 * D-Pad:
 *                  Up          -       Up arrow            Fowward
 *                  Down        -       Down arrow          Backwards
 *                  Right       -       Right arrow         Straft Right
 *                  Left        -       Left arrow          Straft Left
 * Triggers:
 *                  L1          -       4
 *                  L2          -       f                   Roll Left
 *                  R1          -       5
 *                  R2          -       g                   Roll Right
 * Shapes-Pad:
 *                  Triangle    -       1                   Increase Speed
 *                  Square      -       2                   Take Picture
 *                  Circle      -       3                   Decrease Speed
 *                  Cross       -       Space               Up
 * Right Joystick:
 *                  Up          -       z                   Pitch Up
 *                  Down        -       x                   Pitch Down
 *                  Left        -       q                   Turn Left
 *                  Right       -       e                   Turn Right
 *                  R3          -       c                   Down
 * Left Joystick:
 *                  Up          -       Up Arrow            Forward
 *                  Down        -       Down Arrow          Backwards
 *                  Left        -       Left Arrow          Straft Left
 *                  Right       -       Right Arrow         Straft Right
 *                  L3          -       9
 * Other:
 *                  Start       -       6
 *                  Select      -       7
 *                  PS          -       8
*/



Controller::Controller()
{
    m = new Movement();
    h = new Hotkeys();
}

double Controller::getSpeed(){return m->getSpeed();}
Hotkeys *Controller::getHotkeys(){return h;}

QString Controller::getMovementsMessage()
{
    QString message = "";

    if(m->getForwardBackward()>0)
        message += QLatin1String("Forward ");
    if(m->getForwardBackward()<0)
        message += QLatin1String("Backward ");
    if(m->getStraft()>0)
        message += QLatin1String("Straft Right ");
    if(m->getStraft()<0)
        message += QLatin1String("Straft Left ");

    if(m->getUpDown()>0)
        message += QLatin1String("Up ");
    if(m->getUpDown()<0)
        message += QLatin1String("Down ");
    if(m->getPitch()>0)
        message += QLatin1String("Pitch Up ");
    if(m->getPitch()<0)
        message += QLatin1String("Pitch Down ");

    if(m->getRoll()>0)
        message += QLatin1String("Roll Right ");
    if(m->getRoll()<0)
        message += QLatin1String("Roll Left ");
    if(m->getYaw()>0)
        message += QLatin1String("Turn Right ");
    if(m->getYaw()<0)
        message += QLatin1String("Turn Left ");

     message += QString::number(m->getSpeed());

    return message;
}

void Controller::keyPressEvent(QKeyEvent* event)
{
    if(h->getForward() == event->key())
        m->setForwardBackward(1);
    if(h->getBackwards() == event->key())
        m->setForwardBackward(-1);
    if(h->getStraft_Right() == event->key())
        m->setStraft(1);
    if(h->getStraft_Left() == event->key())
        m->setStraft(-1);

    if(h->getUp() == event->key())
        m->setUpdown(1);
    if(h->getDown() == event->key())
        m->setUpdown(-1);
    if(h->getPitch_Up() == event->key())
        m->setPitch(1);
    if(h->getPitch_Down() == event->key())
        m->setPitch(-1);

    if(h->getRoll_Right() == event->key())
        m->setRoll(1);
    if(h->getRoll_Left() == event->key())
        m->setRoll(-1);
    if(h->getTurn_Right() == event->key())
        m->setYaw(1);
    if(h->getTurn_Left() == event->key())
        m->setYaw(-1);

    if(h->getSpeed_Increase() == event->key())
        m->setSpeed(m->getSpeed()+.01);
    if(h->getSpeed_Decrease() == event->key())
        m->setSpeed(m->getSpeed()-.01);

    //if(h->getPicture_Capture() == event->key())
        //TODO picture functionality

}

void Controller::keyReleaseEvent(QKeyEvent* event)
{

    if(h->getForward() == event->key()||h->getBackwards() == event->key())
        m->setForwardBackward(0);
    if(h->getStraft_Right() == event->key()|| h->getStraft_Left() == event->key())
        m->setStraft(0);

    if(h->getUp() == event->key() || h->getDown() == event->key())
        m->setUpdown(0);
    if(h->getPitch_Up() == event->key() || h->getPitch_Down() == event->key())
        m->setPitch(0);

    if(h->getRoll_Right() == event->key() || h->getRoll_Left() == event->key())
        m->setRoll(0);
    if(h->getTurn_Right() == event->key() || h->getTurn_Left() == event->key())
        m->setYaw(0);
}

bool Controller::eventFilter(QObject *obj, QEvent *event)
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

