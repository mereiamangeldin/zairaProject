#include "Bus.h"
#include <string>
using namespace std;
Bus::Bus(string brand, string model, int year, int seatingCapacity, string fuelType)
    : Vehicle(brand, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

string Bus::toString(){
    return Vehicle::toString() + "seating capacity: " + to_string(seatingCapacity) + "; fuel type: " + fuelType + "; ";
}

string Bus::getFuelType(){
    return fuelType;
}

void Bus::setFuelType(string fuelType){
    this->fuelType = fuelType;
}

int Bus::getSeatingCapacity(){
    return seatingCapacity;
}

void Bus::setSeatingCapacity(int seatingCapacity){
    this->seatingCapacity = seatingCapacity;
}
