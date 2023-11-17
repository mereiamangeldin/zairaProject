#include "Vehicle.h"

class Bus : public Vehicle {
protected:
    int seatingCapacity;
    string fuelType;
public:
    Bus(string brand, string model, int year, int seatingCapacity, string fuelType);
    string toString();
    int getSeatingCapacity();
    void setSeatingCapacity(int seatingCapacity);
    string getFuelType();
    void setFuelType(string fuelType);
};