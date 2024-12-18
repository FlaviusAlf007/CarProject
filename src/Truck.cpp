#include <Truck.h>

std::shared_ptr<Truck> Truck::instance = nullptr;

 
Truck::Truck(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng, std::string remorca)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) , remorca(remorca)
{
    std::cout<<"--> Constructor: Singleton Truck.\n";
}


Truck::~Truck()
{
    std::cout<<"--> Destructor Truck.\n";
}


std::shared_ptr<Truck> Truck::getInstance(const std::string br, const std::string comb, const std::string echip, 
                                           const int tr, const int pr, const long vin, const std::string remorca,
                                           const std::shared_ptr<Engine> eng)
{
    if(!instance)
        instance = std::shared_ptr<Truck>(new Truck(br, comb, echip, tr, pr, vin, eng, remorca));
    else    
        std::cout<< "Warning: Singleton Truck instance already exist. \n";

    return instance;
}


std::string Truck::get_remorca() const
{
    return remorca;
}

void Truck::set_remorca(const std::string& remorca)
{
    this->remorca = remorca;
}


void Truck::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - Remorca: " << get_remorca()
              << " - hp: " << putere << " ]\n";
}