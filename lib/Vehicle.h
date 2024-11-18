#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <Engine.h>
#include <Vehicle_Utils.h>


class Vehicle
{
    private: 
        std::string brand;
        std::shared_ptr<long> VIN;
        std::shared_ptr<Engine> engine;

    protected:
        std::string combustibil;
        std::string echipare;
        int tractiune;
        int putere;

    public:
        Vehicle(std::string br = "None",std::string comb = "None", std::string echip = "None", 
                int tr = 0, int pr = 0, long vin = 0, 
                std::shared_ptr<Engine> eng = nullptr);

        virtual ~Vehicle();

        virtual void afisare() const = 0;
        void startEngine() const; 

        std::string get_brand() const;
        std::shared_ptr<long> get_VIN() const;
        std::shared_ptr<Engine> get_engine() const;

        void set_brand(const std::string& br);
        void set_echipare(const std::string& echip);
        void set_vin(const std::shared_ptr<long> vin);
        void set_engine(const std::shared_ptr<Engine> eng);
};

#endif