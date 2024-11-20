#include <Truck.h>

std::shared_ptr<Truck> Truck::instance = nullptr;

 
Truck::Truck(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    std::cout<<"--> Constructor: Singleton Truck.\n";
}


Truck::~Truck()
{
    std::cout<<"--> Destructor Truck.\n";
}


std::shared_ptr<Truck> Truck::getInstance(const std::string br, const std::string comb, const std::string echip, 
                                           const int tr, const int pr, const long vin, const std::shared_ptr<Engine> eng)
{
    if(!instance)
        instance = std::shared_ptr<Truck>(new Truck(br, comb, echip, tr, pr, vin, eng));
    else    
        std::cout<< "Warning: Singleton Truck instance already exist. \n";

    return instance;
}


void Truck::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}