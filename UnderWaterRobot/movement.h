#ifndef MOVEMENT_H
#define MOVEMENT_H

class Movement {
public:
    Movement();
    double getPitch() const;
    void setPitch(double pitch);
    double getRoll() const;
    void setRoll(double row);
    double getForwardBackward() const;
    void setForwardBackward(double x);
    double getStraft() const;
    void setStraft(double y);
    double getYaw() const;
    void setYaw(double yaw);
    double getUpDown() const;
    void setUpdown(double z);
    double getSpeed() const;
    void setSpeed(double speed);

private:
    double ForwardBackward,Straft,UpDown,Roll,Yaw,Pitch,Speed;
    bool checkConstraints(double value);
};

#endif // MOVEMENT_H
