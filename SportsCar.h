#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
protected:
    int topSpeed;
    string brakeType;
public:
    SportsCar(string brand, string model, int year, int numDoors, string engineType, int topSpeed, string brakeType);
    string toString() override;
    int getTopSpeed();
    void setTopSpeed(int topSpeed);
    string getBrakeType();
    void setBrakeType(string brakeType);
};

#endif