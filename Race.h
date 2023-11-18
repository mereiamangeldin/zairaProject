#ifndef RACE_H
#define RACE_H

#include<bits/stdc++.h>
#include "Vehicle.h"
using namespace std;

template <typename T>
class Race{
public: 
    void operator+=(T* vehicle);
    void operator-=(T* vehicle);

    void listAllVehicles();
    void run(int turns);
private:
    vector <T*> vehicles;
};

template <typename T>
void Race<T>::operator+=(T* vehicle) {
    vehicles.push_back(vehicle);
}

template <typename T>
void Race<T>::operator-=(T* vehicle) {
    vehicles.erase(remove(vehicles.begin(), vehicles.end(), vehicle), vehicles.end());
}

template <typename T>
void Race<T>::listAllVehicles() {
    for (auto& vehicle : vehicles) {
        cout << vehicle->toString() << endl;
    }
}

template <typename T>
void Race<T>::run(int turns) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int turn = 1; turn <= turns; ++turn) {
        cout << "Turn " << turn << ":\n";
        for (auto& vehicle : vehicles) {
            int distance = rand() % 100 + 1; 
            cout << vehicle->toString() << " - Traveled distance: " << distance << endl;
            vehicle->setDistance(vehicle->getDistance()+distance);
        }
        cout << endl;
    }

    sort(vehicles.begin(), vehicles.end(), [](T* a, T* b) {
        return a->getDistance() > b->getDistance();
    });

    cout << "After the race (sorted by distance):\n";
    for (auto& vehicle : vehicles) {
        cout << vehicle->toString() << " - Traveled distance: " << vehicle->getDistance() << endl;
    }
}

#endif