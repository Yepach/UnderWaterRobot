#ifndef HOTKEYSWINDOW_H
#define HOTKEYSWINDOW_H

#include <QDialog>
#include "hotkeys.h"
#include <QMessageBox>

namespace Ui {
class hotkeysWindow;
}

class hotkeysWindow : public QDialog
{
    Q_OBJECT

public:
    explicit hotkeysWindow(Hotkeys *h, QWidget *parent = 0);
    void toggleFocus(bool turnFocusOn);
    void doThingsWhenClicked(QPushButton *b);
    void checkDuplicationAndRemove(int n);
    void displayButtonsText();
    ~hotkeysWindow();

private slots:
    void on_forwardHotkeyButton_clicked();
    void on_straftRightHotkeyButton_clicked();
    void on_upHotkeyButton_clicked();
    void on_pitchUpHotkeyButton_clicked();
    void on_rollRightHotkeyButton_clicked();
    void on_backwardsHotkeyButton_clicked();
    void on_straftLeftHotkeyButton_clicked();
    void on_downHotkeyButton_clicked();
    void on_pitchDownHotkeyButton_clicked();
    void on_turnRightHotkeyButton_clicked();
    void on_rollLeftHotkeyButton_clicked();
    void on_turnLeftHotkeyButton_clicked();
    void on_speedIncreaseHotkeyButton_clicked();
    void on_speedDecreaseHotkeyButton_clicked();
    void on_takePictureHotkeyButtton_clicked();
    void on_defaultKeysButton_clicked();

private:
    Ui::hotkeysWindow *ui;
    Hotkeys *h;
};

#endif // HOTKEYSWINDOW_H
