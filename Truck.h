#include "Vehicle.h"

class Truck : public Vehicle {
protected:
    double payloadCapacity;
    string brakeSystem;
public:
    Truck(string brand, string model, int year, double payloadCapacity, string brakeSystem);
    string toString();
    double getPayloadCapacity();
    void setPayloadCapacity(double payloadCapacity);
    string getBrakeSystem();
    void setBrakeSystem(string brakeSystem);
};