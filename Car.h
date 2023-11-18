#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
protected:
    int numDoors;
    string engineType;
public:
    Car(string brand, string model, int year, int numDoors, string engineType);
    string toString() override;
    int getNumDoors();
    void setNumDoors(int numDoors);
    string getEngineType();
    void setEngineType(string engineType);
};

#endif

