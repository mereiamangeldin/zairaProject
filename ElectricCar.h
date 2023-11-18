#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
protected:
    int batteryRange;
    string chargingConnector;
public:
    ElectricCar(string brand, string model, int year, int numDoors, string engineType, int batteryRange, string chargingConnector);
    string toString() override;
    int getBatteryRange();
    void setBatteryRange(int batteryRange);
    string getChargingConnector();
    void setChargingConnector(string chargingConnector);
};

#endif