#include <ATV.h>

bool ATV::instance = false;
 
ATV::ATV(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    if(instance)
        throw std::runtime_error("\n ATV already exist! \n");

    instance = true;
    std::cout<<"--> Constructor ATV.\n";
};

ATV::~ATV()
{
    instance = false;
    std::cout<<"--> Destructor ATV.\n";
}


/* Copy Constructor */
ATV::ATV(const ATV& aux): Vehicle(aux)
{
    std::cout<<"Copy Constructor - ATV copied from: "<< aux.get_brand() << std::endl;
}


/* Copy assigment Operator */
ATV & ATV::operator=(const ATV& aux)
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
    std::cout<< "ATV Copy-assigned: " << aux.get_brand() << "\n";

    return *this;
}


/* Move constructor */
ATV::ATV(ATV&& aux) noexcept : Vehicle(std::move(aux))
{
    std::cout<< "Moved constructor: ATV moved from: " << aux.get_brand() << "\n";
}


/* Move Assignment Operator */
ATV& ATV::operator=(ATV&& aux) noexcept
{
    if(this != &aux)
    {
        Vehicle::operator=(std::move(aux));
    }
    std::cout<< "Move Assigned Operator: ATV move from: " << aux.get_brand() << "\n";

    return *this;
}


void ATV::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}