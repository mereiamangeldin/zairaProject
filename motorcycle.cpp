#include "Motorcycle.h"
#include <string>
using namespace std;
Motorcycle::Motorcycle(string brand, string model, int year, string licensePlate)
    : Vehicle(brand, model, year), licensePlate(licensePlate) {}

string Motorcycle::toString(){
    return Vehicle::toString() + " " + licensePlate;
}

string Motorcycle::getLicensePlate(){
    return licensePlate;
}

void Motorcycle::setLicensePlate(string licensePlate){
    this->licensePlate = licensePlate;
}