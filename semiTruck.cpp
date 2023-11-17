#include "SemiTruck.h"
#include <string>
using namespace std;
SemiTruck::SemiTruck(string brand, string model, int year, double trailerLength, string fuelType)
    : Truck(brand, model, year), trailerLength(trailerLength), fuelType(fuelType)  {}

string SemiTruck::toString(){
    return Truck::toString() + " " + trailerLength.toString() + fuelType;
}

double SemiTruck::getTrailerLength(){
    return trailerLength;
}

void SemiTruck::setTrailerLength(double trailerLength){
    this->trailerLength = trailerLength;
}

string SemiTruck::getFuelType(){
    return fuelType;
}

void SemiTruck:: setFuelType(string fuelType){
    this->fuelType = fuelType;
}