#include <Cabrio.h>

std::shared_ptr<Cabrio> Cabrio::instance = nullptr;

 
Cabrio::Cabrio(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    std::cout<<"--> Constructor: Singleton Cabrio.\n";
};

Cabrio::~Cabrio()
{
    std::cout<<"--> Destructor Cabrio.\n";
}

std::shared_ptr<Cabrio> Cabrio::getInstance(const std::string br, const std::string comb, const std::string echip, 
                                           const int tr, const int pr, const long vin, const std::shared_ptr<Engine> eng)
{
    if(!instance)
        instance = std::shared_ptr<Cabrio>(new Cabrio(br, comb, echip, tr, pr, vin, eng));
    else    
        std::cout<< "Warning: Singleton Cabrio instance already exist. \n";

    return instance;
}


void Cabrio::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}