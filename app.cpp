#include <bits/stdc++.h>
#include "Car.h"
#include "Motorcycle.h"
#include "Vehicle.h"
#include "Race.h"
using namespace std;




int main(){
    Race<Vehicle> race;

    race += Car("Toyota", "Corolla", 2023, 4);
    race += Motorcycle("Mers", "Aventa", 2019, "otomoto");

    race.listAllVehicles();

    race.run(5);

    return 0;
}