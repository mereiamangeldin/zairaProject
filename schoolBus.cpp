#include "SchoolBus.h"
#include <string>
using namespace std;
SchoolBus::SchoolBus(string brand, string model, int year, int seatingCapacity, string fuelType, string color, bool stopSign)
    : Bus(brand, model, year, seatingCapacity, fuelType), color(color), stopSign(stopSign) {}

string SchoolBus::toString(){
    return Bus::toString() + "color: " + color + "; stop sign: " + to_string(stopSign) + "; ";
}

string SchoolBus::getColor(){
    return color;
}

void SchoolBus:: setColor(string color){
    this->color = color;
}

bool SchoolBus::getStopSign(){
    return stopSign;
}

void SchoolBus::setStopSign(bool stopSign){
    this->stopSign = stopSign;
}