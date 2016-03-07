#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>


class Settings
{
public:
    struct setting
    {
        QString name;
        bool display;
        double value;
    };
    Settings();
   // void setDisplay(int n, bool arg);
    static const int n = 5;
    /* change value depending on how many different settings there are (may need to add more labels in the ui if increased)
     * To add another setting change the constructor to account for it increase n
     * In mainwindow.ui add the action and make it checkable and make the toggel select action function
     * In mainwindow.cpp construct switch the action to checked
     */
    struct setting set[n];
};

#endif // SETTINGS_H
