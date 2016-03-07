#include "settings.h"

Settings::Settings()
{
    set[0].name = "Speed";
    set[1].name = "Battery Life";
    set[2].name = "Depth";
    set[3].name = "Pressure";
    set[4].name = "Temperature";

    for (int i = 0; i < n; i ++){
         set[i].display = true;
         set[i].value = 0;
    }

}
/*void Settings::setDisplay(int n, bool arg){
    set[n].display = arg;
}*/
/*  Which seetings do we need
 *  - Speed
 *  - Battery Life
 *  - Depth
 *  - Signal Strength
 *  - Location
 *  - Acceleration
 *  - Pressure
 *  - Internal Tempurature
 *  - Leakage
 *  - Compass
 *
 */

/*
 * Create a list of settings thinking linked list
 * have a loop check to see which ones are true
 * display the content if true
 * other options then a linked list???
 * Matrix
 * Struct array
 *
 */
