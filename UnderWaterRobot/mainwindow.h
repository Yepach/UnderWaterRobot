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
    ~MainWindow();

protected:
   // bool eventFilter(QObject *obj, QEvent *ev);

private slots:
    void on_actionHotkeys_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *StatMovement;
    Controller *c;
    hotkeysWindow *hw;
};

#endif // MAINWINDOW_H
