#ifndef _SEDAN_H_
#define _SEDAN_H_

#include <Vehicle.h>

class Sedan: public Vehicle
{
    private:
        // static bool instance;

    public:
        Sedan(std::string br = "None", std::string comb = "None", std::string echip = "None", 
                int tr = 0, int pr = 0, long vin = 0, 
                std::shared_ptr<Engine> eng = nullptr);

        /* Rule of five! */
        ~Sedan() override;

        /* Copy Constructor */
        Sedan(const Sedan& aux);

        /* Copy assigment Operator */
        Sedan &operator=(const Sedan& aux);

        /* Move constructor */
        Sedan(Sedan&& aux) noexcept;

        /* Move Assignment Operator */
        Sedan& operator=(Sedan&& aux) noexcept;


        virtual void afisare() const override;
};

#endif