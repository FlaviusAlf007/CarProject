#ifndef _MOTORCYCLE_H_
#define _MOTORCYCLE_H_

#include <stdexcept>
#include <Vehicle.h>

class Motorcycle: public Vehicle
{
    private:
        static bool instance;

    public:
        Motorcycle(std::string br = "None", std::string comb = "None", std::string echip = "None", 
                int tr = 0, int pr = 0, long vin = 0, 
                std::shared_ptr<Engine> eng = nullptr);

        ~Motorcycle() override;

        virtual void afisare() const override;
};

#endif