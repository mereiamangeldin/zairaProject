#include "Car.h"

class ElectricCar : public Car {
protected:
    int batteryRange;
    string chargingConnector;
public:
    ElectricCar(string brand, string model, int year, int batteryRange, string chargingConnector);
    string toString();
    int getBatteryRange();
    void setBatteryRange(int batteryRange);
    string getChargingConnector();
    void setChargingConnector(string chargingConnector);
};