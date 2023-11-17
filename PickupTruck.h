#include "Truck.h"

class PickupTruck : public Truck {
protected:
    double towingCapacity;
    string cabType;
public:
    PickupTruck(string brand, string model, int year, double towingCapacity, string cabType);
    string toString();
    double getTowingCapacity();
    void setTowingCapacity(double towingCapacity);
    string getCabType();
    void setCabType(string cabType);
};