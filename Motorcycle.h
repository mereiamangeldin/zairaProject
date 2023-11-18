#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
protected:
    string licensePlate;
    int torque;
public:
    Motorcycle(string brand, string model, int year, string licensePlate, int torque);
    string toString() override;
    string getLicensePlate();
    void setLicensePlate(string licensePlate);
    int getTorque();
    void setTorque(int torque);
};

#endif

