#include <bits/stdc++.h>
#include "Car.h"
#include "Motorcycle.h"
#include "Vehicle.h"
#include "Race.h"
#include "Bus.h"
#include "CityBus.h"
#include "ElectricCar.h"
#include "Motorcycle.h"
#include "PickupTruck.h"
#include "SchoolBus.h"
#include "SemiTruck.h"
#include "SportsCar.h"
#include "Truck.h"

using namespace std;




int main(){
    Race<Vehicle> race;

    race += new CityBus("TransitCo", "CityMax", 2022, 50, "Diesel", "Route123");
    race += new ElectricCar("EcoMotors", "VoltX", 2022, 4, "Electric", 300, "Type2");
    race += new Motorcycle("SpeedCycles", "RapidEagle", 2022, "Plate123", 150);
    race += new PickupTruck("HaulMaster", "CargoKing", 2022, 1000.0, "Hydraulic", 5000.0, "Double Cab");
    race += new SchoolBus("KidTransit", "SchoolStar", 2022, 30, "Diesel", "Yellow", true);
    race += new SemiTruck("FreightMasters", "HaulerPro", 2022, 20000.0, "Air", 53.0, "Diesel");
    race += new SportsCar("SpeedyRides", "TurboX", 2022, 2, "Petrol", 200, "High Performance");


    race.listAllVehicles();

    race.run(5);

    return 0;
}