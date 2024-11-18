#include <SUV.h>

bool SUV::instance = false;
 
SUV::SUV(std::string br, std::string comb, std::string echip, 
                       int tr, int pr, long vin, 
                       std::shared_ptr<Engine> eng)
            : Vehicle(br, comb, echip, tr, pr, vin, eng) 
{
    if(instance)
        throw std::runtime_error("\n SUV already exist! \n");

    instance = true;

    std::cout<<"--> Constructor SUV.\n";
};

SUV::~SUV()
{
    instance = false;
    std::cout<<"--> Destructor SUV.\n";
}


/* Copy Constructor */
SUV::SUV(const SUV& aux): Vehicle(aux)
{
    std::cout<<"Copy Constructor - SUV copied from: "<< aux.get_brand() << std::endl;
}


/* Copy assigment Operator */
SUV & SUV::operator=(const SUV& aux)
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
    std::cout<< "SUV Copy-assigned: " << aux.get_brand() << "\n";

    return *this;
}


void SUV::afisare() const
{
    std::cout << "[ " << get_brand() 
              << " - Tractiune: " << tractiune
              << " - Echipare: " << echipare
              << " - Combustibil: " << combustibil
              << " - VIN: " << *get_VIN()
              << " - hp: " << putere << " ]\n";
}