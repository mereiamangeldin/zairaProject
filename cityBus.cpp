#include "CityBus.h"
#include <string>
using namespace std;
CityBus::CityBus(string brand, string model, int year, string routeNumber)
    : Bus(brand, model, year), routeNumber(routeNumber) {}

string CityBus::toString(){
    return Bus::toString() + " " + routeNumber;
}

string CityBus::getRouteNumber(){
    return routeNumber;
}

void CityBus:: setRouteNumber(string routeNumber){
    this->routeNumber = routeNumber;
}