#ifndef _COUPE_H_
#define _COUPE_H_

#include <Vehicle.h>

class Coupe: public Vehicle
{
    private:
        static std::shared_ptr<Coupe> instance;

        Coupe(const std::string br = "None", const std::string comb = "None", const std::string echip = "None", 
                const int tr = 0, const int pr = 0, const long vin = 0, 
                const std::shared_ptr<Engine> eng = nullptr);

    public:

        /* Rule of tree! */
        ~Coupe() override;

        /* Copy Constructor */
        Coupe(const Coupe& aux) = delete;

        /* Copy assigment Operator */
        Coupe &operator=(const Coupe& aux) = delete;

        /* Move constructor */
        Coupe(Coupe&& aux) = delete;

        /* Move Assignment Operator */
        Coupe& operator=(Coupe&& aux) = delete;

        static std::shared_ptr<Coupe> getInstance(const std::string br, const std::string comb, const std::string echip, 
                                                   const int tr, const int pr, const long vin, const std::shared_ptr<Engine> eng);

        virtual void afisare() const override;
};

#endif