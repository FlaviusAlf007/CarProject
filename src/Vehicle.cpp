#include <Vehicle.h>


Vehicle::Vehicle(std::string br, std::string comb, std::string echip, 
                 int tr, int pr, long vin,
                 std::shared_ptr<Engine> eng)
            : brand(br), combustibil(comb), echipare(echip), tractiune(tr), putere(pr), VIN(std::make_shared<long>(vin)) , engine(eng) 
{
    std::cout<<"--> Constructor Vehicle.\n";
}

Vehicle::~Vehicle()
{
    std::cout<<"--> Destructor Vehicle.\n";
}


void Vehicle::startEngine() const
{
    std::cout<< "Engine start -> " << brand << ": ";
    engine->startEngine();
}


std::string Vehicle::get_brand() const
{
    return brand;
}

int Vehicle::get_putere() const
{
    return putere;
}

 std::shared_ptr<long> Vehicle::get_VIN() const
 {
    return VIN;
 }