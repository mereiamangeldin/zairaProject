#include "CityBus.h"
#include <string>
using namespace std;

CityBus::CityBus(string brand, string model, int year, int seatingCapacity, string fuelType, string routeNumber)
    : Bus(brand, model, year, seatingCapacity, fuelType), routeNumber(routeNumber) {}

string CityBus::toString(){
    return Bus::toString() + "route number: " + routeNumber + "; ";
}

string CityBus::getRouteNumber(){
    return routeNumber;
}

void CityBus:: setRouteNumber(string routeNumber){
    this->routeNumber = routeNumber;
}