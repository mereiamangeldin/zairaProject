#include "Vehicle.h"

class Motorcycle : public Vehicle {
protected:
    string licensePlate;
    int torque;
public:
    Motorcycle(string brand, string model, int year, string licensePlate, int torque);
    string toString();
    string getLicensePlate();
    void setLicensePlate(string licensePlate);
    int getTorque();
    void setTorque(int torque);
};