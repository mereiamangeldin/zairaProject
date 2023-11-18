#include "ElectricCar.h"
#include <string>
using namespace std;
ElectricCar::ElectricCar(string brand, string model, int year, int numDoors, string engineType, int batteryRange, string chargingConnector)
    : Car(brand, model, year, numDoors, engineType), batteryRange(batteryRange), chargingConnector(chargingConnector)  {}

string ElectricCar::toString(){
    return Car::toString() + "battery range: " + to_string(batteryRange) + "; charging connector: " + chargingConnector + "; ";
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