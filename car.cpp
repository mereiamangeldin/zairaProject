#include "car.h"
#include <string>
using namespace std;
Car::Car(string brand, string model, int year, int numDoors)
    : Vehicle(brand, model, year), numDoors(numDoors) {}

string Car::toString(){
    return Vehicle::toString() + " imagine numDoors";
}

int Car::getNumDoors(){
    return numDoors;
}

void Car::setNumDoors(int numDoors){
    this->numDoors = numDoors;
}