#ifndef CITYBUS_H
#define CITYBUS_H

#include "Bus.h"

class CityBus : public Bus {
protected:
    string routeNumber;
public:
    CityBus(string brand, string model, int year, int seatingCapacity, string fuelType, string routeNumber);
    string toString() override;
    string getRouteNumber();
    void setRouteNumber(string routeNumber);
};

#endif