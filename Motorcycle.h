#include "Vehicle.h"

class Motorcycle : public Vehicle {
protected:
    string licensePlate;
public:
    Motorcycle(string brand, string model, int year, string licensePlate);
    string toString();
    string getLicensePlate();
    void setLicensePlate(string licensePlate);
};