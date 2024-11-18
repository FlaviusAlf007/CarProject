#include <Sedan.h>

 
Sedan::Sedan(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{

    std::cout<<"--> Constructor Sedan.\n";
};

Sedan::~Sedan()
{
    std::cout<<"--> Destructor Sedan.\n";
}


/* Copy Constructor */
Sedan::Sedan(const Sedan& aux): Vehicle(aux)
{
    std::cout<<"Copy Constructor - Sedan copied from: "<< aux.get_brand() << std::endl;
}


/* Copy assigment Operator */
Sedan & Sedan::operator=(const Sedan& aux)
{
    if(this != &aux)
    {
        tractiune = aux.tractiune;
        echipare = aux.echipare;
        combustibil = aux.combustibil;
        set_brand(aux.get_brand());
        set_vin(aux.get_VIN());
        set_engine(aux.get_engine());
    }
    std::cout<< "Sedan Copy-assigned: " << aux.get_brand() << "\n";

    return *this;
}


/* Move constructor */
Sedan::Sedan(Sedan&& aux) noexcept : Vehicle(std::move(aux))
{
    std::cout<< "Moved constructor: Sedan moved from: " << aux.get_brand() << "\n";
}


/* Move Assignment Operator */
Sedan& Sedan::operator=(Sedan&& aux) noexcept
{
    if(this != &aux)
    {
        Vehicle::operator=(std::move(aux));
    }
    std::cout<< "Move Assigned Operator: Sedan move from: " << aux.get_brand() << "\n";

    return *this;
}


void Sedan::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}