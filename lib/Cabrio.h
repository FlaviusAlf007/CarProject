#ifndef _CABRIO_H_
#define _CABRIO_H_

#include <Vehicle.h>

class Cabrio: public Vehicle
{
    private:
        static std::shared_ptr<Cabrio> instance;

        Cabrio(const std::string br = "None", const std::string comb = "None", const std::string echip = "None", 
                const int tr = 0, const int pr = 0, const long vin = 0, 
                const std::shared_ptr<Engine> eng = nullptr);

    public:

        /* Rule of tree! */
        ~Cabrio() override;

        /* Copy Constructor */
        Cabrio(const Cabrio& aux) = delete;

        /* Copy assigment Operator */
        Cabrio &operator=(const Cabrio& aux) = delete;

        static std::shared_ptr<Cabrio> getInstance(const std::string br, const std::string comb, const std::string echip, 
                                                   const int tr, const int pr, const long vin, const std::shared_ptr<Engine> eng);

        virtual void afisare() const override;
};

#endif