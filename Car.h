#ifndef CAR_H
#define cAR_H

#include "Vehicle.h"

class Car : public Vehicle {
protected:
    int numDoors;
public:
    Car(string brand, string model, int year, int numDoors);
    string toString();
    int getNumDoors();
    void setNumDoors(int numDoors);
};

#endif