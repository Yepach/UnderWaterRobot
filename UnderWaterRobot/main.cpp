#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <cstdlib>


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    while(true){
        w.showDisplay();
        QApplication::processEvents();
    }

    return a.exec();
}
