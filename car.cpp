#include "car.h"
#include <string>
using namespace std;
Car::Car(string brand, string model, int year, int numDoors, string engineType)
    : Vehicle(brand, model, year), numDoors(numDoors), engineType(engineType) {}

string Car::toString(){
    return Vehicle::toString() + " imagine numDoors";
}

int Car::getNumDoors(){
    return numDoors;
}

void Car::setNumDoors(int numDoors){
    this->numDoors = numDoors;
}

string Car::getEngineType(){
    return engineType;
}

void Car::setEngineType(string engineType){
    this->engineType = engineType;
}