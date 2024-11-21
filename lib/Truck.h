#ifndef _TRUCK_H_
#define _TRUCK_H_

#include <Vehicle.h>

class Truck: public Vehicle
{
    private:
        std::string remorca;
        static std::shared_ptr<Truck> instance;

        Truck(const std::string br = "None", const std::string comb = "None", const std::string echip = "None", 
                const int tr = 0, const int pr = 0, const long vin = 0, 
                const std::shared_ptr<Engine> eng = nullptr, const std::string remorca = "None");

    public:

        /* Rule of tree! */
        ~Truck() override;

        /* Copy Constructor */
        Truck(const Truck& aux) = delete;

        /* Copy assigment Operator */
        Truck &operator=(const Truck& aux) = delete;

        /* Move constructor */
        Truck(Truck&& aux) = delete;

        /* Move Assignment Operator */
        Truck& operator=(Truck&& aux) = delete;

        static std::shared_ptr<Truck> getInstance(const std::string br, const std::string comb, const std::string echip, 
                                                   const int tr, const int pr, const long vin, const std::string remorca,
                                                   const std::shared_ptr<Engine> eng);

        
        std::string get_remorca() const;
        void set_remorca(const std::string&);
        virtual void afisare() const override;
};

#endif