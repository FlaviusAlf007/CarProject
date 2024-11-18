#ifndef _ATV_H_
#define _ATV_H_

#include <Vehicle.h>

class ATV: public Vehicle
{
    private:
        static bool instance;

    public:
        ATV(std::string br = "None", std::string comb = "None", std::string echip = "None", 
                int tr = 0, int pr = 0, long vin = 0, 
                std::shared_ptr<Engine> eng = nullptr);

        /* Rule of five! */
        ~ATV() override;

        /* Copy Constructor */
        ATV(const ATV& aux);

        /* Copy assigment Operator */
        ATV &operator=(const ATV& aux);

        /* Move constructor */
        ATV(ATV&& aux) noexcept;

        /* Move Assignment Operator */
        ATV& operator=(ATV&& aux) noexcept;


        virtual void afisare() const override;
};

#endif