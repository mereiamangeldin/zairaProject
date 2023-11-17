#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;
    int year;
public:
    Vehicle(string brand, string model, int year);
    string toString();
    string getBrand();
    void setBrand(string brand);
    string getModel();
    void setModel(string model);
    int getYear();
    void setYear(int year);

};
