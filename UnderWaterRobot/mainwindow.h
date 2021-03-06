#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QLabel>
#include <QKeyEvent>
#include <string>
#include "controller.h"
#include "movement.h"
#include "hotkeyswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void showDisplay();
    void setSettingLabels(int n, int i);
    void resetSettingLabels();
    void displayProgressBar(double n);
    void displaySettings();
    void displayArrowImages();
    ~MainWindow();

protected:
   // bool eventFilter(QObject *obj, QEvent *ev);

private slots:
    void on_actionHotkeys_triggered();

    void on_actionSpeed_toggled(bool arg1);

    void on_actionBattery_Life_toggled(bool arg1);

    void on_actionPressure_toggled(bool arg1);

    void on_actionTempurature_toggled(bool arg1);

    void on_actionDepth_toggled(bool arg1);

    void on_verticalSliderLeft_valueChanged(int value);

    void on_verticalSliderBack_valueChanged(int value);

    void on_verticalSliderRight_valueChanged(int value);

    void on_actionKeyboard_toggled(bool arg1);

    void on_actionCamera_1_triggered();

    void on_actionCamera_2_triggered();

    void on_actionKeyboard_triggered();

private:
    bool Keyboard;
    Ui::MainWindow *ui;
    QLabel *StatMovement;
    Controller *c;
    hotkeysWindow *hw;
    QPixmap pixDownBlank, pixUpBlank, pixRightBlank, pixLeftBlank, pixForwardBlank, pixBackwardsBlank,
            pixDownFull, pixUpFull, pixRightFull, pixLeftFull, pixForwardFull, pixBackwardsFull,
            pixDownFullCounter, pixLeftFullCounter, pixForwardFullCounter, pixBackwardsFullClockwise,
            pixDownFullClockwise, pixLeftFullClockwise,pixForwardCounter, pixBackwardsClockwise ,
            pixDownClockwise, pixLeftClockwise, pixDownCounter, pixLeftCounter,
            pixCameraCannotConnect, pixCameraCannotConnect2;
};

#endif // MAINWINDOW_H
