#include <Coupe.h>

std::shared_ptr<Coupe> Coupe::instance = nullptr;

 
Coupe::Coupe(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    std::cout<<"--> Constructor: Singleton Coupe.\n";
}


Coupe::~Coupe()
{
    std::cout<<"--> Destructor Coupe.\n";
}


std::shared_ptr<Coupe> Coupe::getInstance(const std::string br, const std::string comb, const std::string echip, 
                                           const int tr, const int pr, const long vin, const std::shared_ptr<Engine> eng)
{
    if(!instance)
        instance = std::shared_ptr<Coupe>(new Coupe(br, comb, echip, tr, pr, vin, eng));
    else    
        std::cout<< "Warning: Singleton Coupe instance already exist. \n";

    return instance;
}


void Coupe::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}