#include "Bus.h"

class CityBus : public Bus {
protected:
    string routeNumber;
public:
    CityBus(string brand, string model, int year, string routeNumber);
    string toString();
    string getRouteNumber();
    void setRouteNumber(string routeNumber);
};