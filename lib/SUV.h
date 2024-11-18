#ifndef _SUV_H_
#define _SUV_H_

#include <Vehicle.h>

class SUV: public Vehicle
{
    private:
        // static bool instance;

    public:
        SUV(std::string br = "None", std::string comb = "None", std::string echip = "None", 
                int tr = 0, int pr = 0, long vin = 0, 
                std::shared_ptr<Engine> eng = nullptr);

        /* Rule of tree! */
        ~SUV() override;

        /* Copy Constructor */
        SUV(const SUV& aux);

        /* Copy assigment Operator */
        SUV &operator=(const SUV& aux);

        virtual void afisare() const override;
};

#endif