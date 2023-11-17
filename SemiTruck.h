#include "Truck.h"

class SemiTruck : public Truck {
protected:
    double trailerLength;
    string fuelType;
public:
    SemiTruck(string brand, string model, int year, double trailerLength, string fuelType);
    string toString();
    double getTrailerLength();
    void setTrailerLength(double trailerLength);
    string getFuelType();
    void setFuelType(string fuelType);
};