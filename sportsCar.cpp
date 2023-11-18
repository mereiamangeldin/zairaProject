#include "SportsCar.h"
#include <string>
using namespace std;
SportsCar::SportsCar(string brand, string model, int year, int numDoors, string engineType, int topSpeed, string brakeType)
    : Car(brand, model, year, numDoors, engineType), topSpeed(topSpeed), brakeType(brakeType)  {}

string SportsCar::toString(){
    return Car::toString() + "top speed: " + to_string(topSpeed) + "; brake type: " + brakeType + "; ";
}

int SportsCar::getTopSpeed(){
    return topSpeed;
}

void SportsCar::setTopSpeed(int topSpeed){
    this->topSpeed = topSpeed;
}

string SportsCar::getBrakeType(){
    return brakeType;
}

void SportsCar:: setBrakeType(string brakeType){
    this->brakeType = brakeType;
}