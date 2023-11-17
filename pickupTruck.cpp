#include "PickupTruck.h"
#include <string>
using namespace std;
PickupTruck::PickupTruck(string brand, string model, int year, double towingCapacity, string cabType)
    : Truck(brand, model, year), towingCapacity(towingCapacity), cabType(cabType)  {}

string PickupTruck::toString(){
    return Truck::toString() + " " + towingCapacity.toString() + cabType;
}

double PickupTruck::getTowingCapacity(){
    return towingCapacity;
}

void PickupTruck::setTowingCapacity(double towingCapacity){
    this->towingCapacity = towingCapacity;
}

string PickupTruck::getCabType(){
    return cabType;
}

void PickupTruck:: setCabType(string cabType){
    this->cabType = cabType;
}