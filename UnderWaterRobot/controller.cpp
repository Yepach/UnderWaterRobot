#include "controller.h"
#include <windows.h>

/* The Keys that are mapped to the third party program
 *
 *                  Controller          Keyboard            Default Meaning
 * D-Pad:
 *                  Up          -       Up arrow            Fowward
 *                  Down        -       Down arrow          Backwards
 *                  Right       -       Right arrow         Straft Right
 *                  Left        -       Left arrow          Straft Left
 * Triggers:
 *                  L1          -       xx
 *                  L2          -       f                   Roll Left
 *                  R1          -       xx
 *                  R2          -       g                   Roll Right
 * Shapes-Pad:
 *                  Triangle    -       xx
 *                  Square      -       xx
 *                  Circle      -       xx
 *                  Cross       -       Space               Straight Up
 * Right Joystick:
 *                  Up          -       z                   Pitch Up
 *                  Down        -       x                   Pitch Down
 *                  Left        -       q                   Turn Left
 *                  Right       -       e                   Turn Right
 *                  R3          -       c                   Straight Down
 * Left Joystick:
 *                  Up          -       Up Arrow            Forward
 *                  Down        -       Down Arrow          Backwards
 *                  Left        -       Left Arrow          Straft Left
 *                  Right       -       Right Arrow         Straft Right
 *                  L3          -       c                   Straight Down
 * Other:
 *                  Start       -       xx
 *                  Select      -       xx
 *                  PS          -       xx
*/

Controller::Controller()
{
}

/* Movements and Temps meaning for each index
 * 0 = Forward/Backward
 * 1 = Straft Left/Right
 * 2 = Straight Up/Down
 * 3 = Pitch
 * 4 = Roll
 * 5 = yaw (turn)
*/
int movements[6] = {0};

QString message;
void gotoXY(int change[]);
bool check(const int array[], int n);

QString Controller::Display(){ 
    int temp[6] = {0};
    message = "Nothing pressed";

    // Forward/Backward
    if(GetAsyncKeyState(VK_UP))
        temp[0] = movements[0]+1;
    if(GetAsyncKeyState(VK_DOWN))
        temp[0] = movements[0]-1;

    // Straft Right/Left
    if(GetAsyncKeyState(VK_RIGHT))
        temp[1] = movements[1]+1;
    if(GetAsyncKeyState(VK_LEFT))
        temp[1] = movements[1]-1;

    // Straight Up/Down
    if(GetAsyncKeyState(VK_SPACE))
        temp[2] = movements[2]+1;
    if(GetAsyncKeyState(0x43))//c
        temp[2] = movements[2]-1;

    // Pitch
    if(GetAsyncKeyState(0x58))//x
        temp[3] = movements[3]+1;
    if(GetAsyncKeyState(0x5A))//z
        temp[3] = movements[3]-1;

    // Roll
    if(GetAsyncKeyState(0x47))//g
        temp[4] = movements[4]+1;
    if(GetAsyncKeyState(0x46))//f
        temp[4] = movements[4]-1;

    // Yaw (turn)
    if(GetAsyncKeyState(0x45))//e
        temp[5] = movements[5]+1;
    if(GetAsyncKeyState(0x51))//q
        temp[5] = movements[5]-1;

    gotoXY(temp);
    return message;

}
void gotoXY(int change[]){
    if(!check(change, 6))
        message = "";
    else
        return;

    if(change[0]==1)
        message += QLatin1String("Forward");
    if(change[0]==-1)
        message += QLatin1String("Backward");
    if(change[1]==1)
        message += QLatin1String("Straft Right");
    if(change[1]==-1)
        message += QLatin1String("Straft Left");
    if(change[2]==1)
        message += QLatin1String("Straight Up");
    if(change[2]==-1)
        message += QLatin1String("Straight Down");
    if(change[3]==1)
        message += QLatin1String("Pitch up");
    if(change[3]==-1)
        message += QLatin1String("Pitch Down");
    if(change[4]==1)
        message += QLatin1String("Roll Right");
    if(change[4]==-1)
        message += QLatin1String("Roll Left");
    if(change[5]==1)
        message += QLatin1String("Turn Right");
    if(change[5]==-1)
        message += QLatin1String("Turn Left");
}

bool check(const int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] != array[i + 1])
            return false;
    }
    return true;
}
