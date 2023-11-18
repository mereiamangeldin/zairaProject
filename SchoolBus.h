#ifndef SCHOOLBUS_H
#define SCHOOLBUS_H

#include "Bus.h"

class SchoolBus : public Bus {
protected:
    string color;
    bool stopSign;
public:
    SchoolBus(string brand, string model, int year, int seatingCapacity, string fuelType, string color, bool stopSign);
    string toString() override;
    string getColor();
    void setColor(string color);
    bool getStopSign();
    void setStopSign(bool stopSign);
};

#endif