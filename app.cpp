#include <bits/stdc++.h>
#include "car.h"
using namespace std;

int main(){
    Car c("Toyota", "Camry", 2023, 4);

    cout << c.toString() << endl;

    c.setModel("Corolla");

    cout << c.getBrand() << ' ' << c.getModel();
}