#include "Car.h"

class SportsCar : public Car {
protected:
    int topSpeed;
    string brakeType;
public:
    SportsCar(string brand, string model, int year, int topSpeed, string brakeType);
    string toString();
    int getTopSpeed();
    void setTopSpeed(int topSpeed);
    string getBrakeType();
    void setBrakeType(string brakeType);
};