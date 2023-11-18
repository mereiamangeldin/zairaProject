#ifndef PICKUPTRACK_H
#define PICKUPTRACK_H

#include "Truck.h"

class PickupTruck : public Truck {
protected:
    double towingCapacity;
    string cabType;
public:
    PickupTruck(string brand, string model, int year, double payloadCapacity, string brakeSystem, double towingCapacity, string cabType);
    string toString() override;
    double getTowingCapacity();
    void setTowingCapacity(double towingCapacity);
    string getCabType();
    void setCabType(string cabType);
};

#endif