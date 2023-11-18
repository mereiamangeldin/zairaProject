#ifndef SEMITRUCK_H
#define SEMITRUCK_H

#include "Truck.h"

class SemiTruck : public Truck {
protected:
    double trailerLength;
    string fuelType;
public:
    SemiTruck(string brand, string model, int year, double payloadCapacity, string brakeSystem, double trailerLength, string fuelType);
    string toString() override;
    double getTrailerLength();
    void setTrailerLength(double trailerLength);
    string getFuelType();
    void setFuelType(string fuelType);
};

#endif