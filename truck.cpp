#include "Truck.h"
#include <string>
using namespace std;
Truck::Truck(string brand, string model, int year, double payloadCapacity, string brakeSystem)
    : Vehicle(brand, model, year), payloadCapacity(payloadCapacity), brakeSystem(brakeSystem)  {}

string Truck::toString(){
    return Vehicle::toString() + " " + payloadCapacity.toString() + brakeSystem;
}

double Truck::getPayloadCapacity(){
    return payloadCapacity;
}

void Truck::setPayloadCapacity(double payloadCapacity){
    this->payloadCapacity = payloadCapacity;
}

string Truck::getBrakeSystem(){
    return brakeSystem;
}

void Truck:: setBrakeSystem(string brakeSystem){
    this->brakeSystem = brakeSystem;
}