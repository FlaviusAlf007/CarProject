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

std::shared_ptr<long> Vehicle::get_VIN() const
 {
    return VIN;
 }

std::shared_ptr<Engine> Vehicle::get_engine() const
{
    return engine;
}


void Vehicle::set_brand(const std::string& br)
{
    this->brand = br;
}

void Vehicle::set_vin(const std::shared_ptr<long> vin)
{
    this->VIN = vin;
}

void Vehicle::set_engine(const std::shared_ptr<Engine> eng)
{
    this->engine = eng;
}

void Vehicle::set_echipare(const std::string& echip)
{
    this->echipare = echip;
}