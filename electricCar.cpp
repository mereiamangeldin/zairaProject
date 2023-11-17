#include "ElectricCar.h"
#include <string>
using namespace std;
ElectricCar::ElectricCar(string brand, string model, int year, int batteryRange, string chargingConnector)
    : Car(brand, model, year), batteryRange(batteryRange), chargingConnector(chargingConnector)  {}

string ElectricCar::toString(){
    return Car::toString() + " " + batteryRange.toString() + chargingConnector;
}

int ElectricCar::getBatteryRange(){
    return batteryRange;
}

void ElectricCar::setBatteryRange(int batteryRange){
    this->batteryRange = batteryRange;
}

string ElectricCar::getChargingConnector(){
    return chargingConnector;
}

void ElectricCar:: setChargingConnector(string chargingConnector){
    this->chargingConnector = chargingConnector;
}