#ifndef vehicle_factory.hpp
#define vehicle_factory.hpp

#include<iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class VehicleFactory{
    public:
        static Vehicle* getVehicle(string vehicleType);
};

#endif