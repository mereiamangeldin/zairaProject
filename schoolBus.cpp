#include "SchoolBus.h"
#include <string>
using namespace std;
SchoolBus::SchoolBus(string brand, string model, int year, string color, bool stopSign)
    : Bus(brand, model, year), color(color), stopSign(stopSign) {}

string SchoolBus::toString(){
    return Bus::toString() + " " + color + stopSign;
}

string SchoolBus::getColor(){
    return color;
}

void SchoolBus:: setColor(string color){
    this->color = color;
}

bool getStopSign(){
    return stopSign;
}

void setStopSign(bool stopSign){
    this->stopSign = stopSign;
}