#ifndef _VEHICLE_UTILS_H_
#define _VEHICLE_UTILS_H_

#include <string>
#include <iostream>

class Vehicle_Utils
{
    public:
        static void printMessage(const std::string& message);

        // static void printInfoVehicle(std::string br, long vin, std::shared_ptr<Engine> eng, std::string comb);
};

#endif