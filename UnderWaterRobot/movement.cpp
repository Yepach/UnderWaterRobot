#include "movement.h"

Movement::Movement():ForwardBackward(0.0),Straft(0.0),UpDown(0.0),Roll(0.0),Yaw(0.0),Pitch(0.0),Speed(0.0) {}

double Movement::getForwardBackward() const {return ForwardBackward;}
double Movement::getStraft() const {return Straft;}
double Movement::getUpDown() const {return UpDown;}

double Movement::getRoll() const {return Roll;}
double Movement::getYaw() const {return Yaw;}
double Movement::getPitch() const {return Pitch;}

double Movement::getSpeed() const {return Speed;}

void Movement::setPitch(double pitch) {
    if(checkConstraints(pitch))
        Pitch = pitch;
}

void Movement::setRoll(double roll) {
    if(checkConstraints(roll))
        Roll = roll;
}

void Movement::setForwardBackward(double x) {
    if(checkConstraints(x))
        ForwardBackward = x;
}

void Movement::setStraft(double y) {
    if(checkConstraints(y))
        Straft = y;
}

void Movement::setYaw(double yaw) {
    if(checkConstraints(yaw))
        Yaw = yaw;
}

void Movement::setUpdown(double z) {
    if(checkConstraints(z))
        UpDown = z;
}

void Movement::setSpeed(double speed) {
    if(checkConstraints(speed) && speed >= -0.01)
        Speed = speed;
}

bool Movement::checkConstraints(double value){
    if(value > 1.01 || value < -1)
        return false;
    else
        return true;
}

