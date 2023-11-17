#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;
    int year;
    int distance;
public:
    Vehicle(string brand, string model, int year);
    string toString();
    string getBrand();
    void setBrand(string brand);
    string getModel();
    void setModel(string model);
    int getYear();
    void setYear(int year);
    int getDistance();
    void setDistance(int distance);

};


#endif