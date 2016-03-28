#ifndef HOTKEYS_H
#define HOTKEYS_H

#include <QKeyEvent>
#include <QTextStream>

class Hotkeys: public QObject
{
public:
    Hotkeys(int keyboard);
    void saveHotkeys();
    void loadHotkeys();
    void resetKeys();
    void setForward(int forw);
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);
    QString buttonWordBank(int n);
    QString keyboardKeysWordBank(int n);
    bool changed;
    int changedKey;

    // Getters and Setters
    int getForward() const;
    int getBackwards() const;
    void setBackwards(int value);
    int getStraft_Right() const;
    void setStraft_Right(int value);
    int getStraft_Left() const;
    void setStraft_Left(int value);
    int getUp() const;
    void setUp(int value);
    int getDown() const;
    void setDown(int value);
    int getPitch_Up() const;
    void setPitch_Up(int value);
    int getPitch_Down() const;
    void setPitch_Down(int value);
    int getRoll_Right() const;
    void setRoll_Right(int value);
    int getRoll_Left() const;
    void setRoll_Left(int value);
    int getTurn_Right() const;
    void setTurn_Right(int value);
    int getTurn_Left() const;
    void setTurn_Left(int value);
    int getSpeed_Increase() const;
    void setSpeed_Increase(int value);
    int getSpeed_Decrease() const;
    void setSpeed_Decrease(int value);
    int getPicture_Capture() const;
    void setPicture_Capture(int value);

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    int Forward, Backwards, Straft_Right, Straft_Left, Up, Down, Pitch_Up, Pitch_Down, Roll_Right, Roll_Left, Turn_Right, Turn_Left,
    Speed_Increase, Speed_Decrease, Picture_Capture, Keyboard;


};

#endif // HOTKEYS_H
