    #include "vehicle.h"
    #include <string>

Vehicle::Vehicle(string brand, string model, int year)
    : brand(brand), model(model), year(year) {}

string Vehicle::toString() {
    return brand + " " + model;
}

string Vehicle::getBrand() {
    return brand;
}

void Vehicle::setBrand(string brand) {
    this->brand = brand;
}

string Vehicle::getModel() {
    return model;
}

void Vehicle::setModel(string model) {
    this->model = model;
}

int Vehicle::getYear() {
    return year;
}

void Vehicle::setYear(int year) {
    this->year = year;
}