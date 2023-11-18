#include "Motorcycle.h"
#include <string>
using namespace std;
Motorcycle::Motorcycle(string brand, string model, int year, string licensePlate, int torque)
    : Vehicle(brand, model, year), licensePlate(licensePlate), torque(torque) {}

string Motorcycle::toString(){
    return Vehicle::toString() + "licence plate: " + licensePlate + "; torque: " + to_string(torque) + "; ";
}

string Motorcycle::getLicensePlate(){
    return licensePlate;
}

void Motorcycle::setLicensePlate(string licensePlate){
    this->licensePlate = licensePlate;
}

int Motorcycle::getTorque(){
    return torque;
}

void Motorcycle::setTorque(int torque){
    this->torque = torque;
}

