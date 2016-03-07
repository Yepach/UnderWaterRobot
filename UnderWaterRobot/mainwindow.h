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

private:
    Ui::MainWindow *ui;
    QLabel *StatMovement;
    Controller *c;
    hotkeysWindow *hw;
};

#endif // MAINWINDOW_H
