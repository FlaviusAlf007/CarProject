#include <Motorcycle.h>

bool Motorcycle::instance = false;
 
Motorcycle::Motorcycle(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    if(instance)
        throw std::runtime_error("\n Motorcycle already exist! \n");

    instance = true;

    std::cout<<"--> Constructor Motorcycle.\n";
};

Motorcycle::~Motorcycle()
{
    instance = false;
    std::cout<<"--> Destructor Motorcycle.\n";
}


void Motorcycle::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}