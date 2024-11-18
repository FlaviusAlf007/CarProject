#include <iostream>
#include <memory>
#include <Motorcycle.h>
#include <SUV.h>
#include <EV.h>
#include <Thermic.h>

using namespace std;



int main()
{
    std::cout<<std::endl<<std::endl;
    /* Instantiere Engine */
    shared_ptr<Engine> ev = make_shared<EV>();
    shared_ptr<Engine> thermic = make_shared<Thermic>();

    /* Motorcycle */
    try
    {
        /*  Ordine apelare Constructori:
                1.Constructor Vehicle
                2.Constructor Motorcycle
        */
        Motorcycle thermic_motorcycle ("YAMAHA", "Benzina", "SP", 2, 110, 45642354, thermic);
        thermic_motorcycle.startEngine();
        thermic_motorcycle.afisare();

        /* Testare a limitarii de a se putea vreea un singur obiect de acelasi fel. */
        // Motorcycle electric_motorcycle("BMW", "Electric", "Standard", 2, 40, 23234234,  ev);
        // electric_motorcycle.startEngine();
        // electric_motorcycle.afisare();


        /*  Ordine apelare Destructori:
                1.Destructor Motorcycle
                2.Destructor Vehicle
        */
    }
    catch(std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }



    /* Functii din Utils */
    Vehicle_Utils::printMessage("Ready To Race");
    Vehicle_Utils::printInfoVehicle("Honda",1234567,"Thermic","Benzina");
    std::cout<<std::endl<<std::endl;


    /* SUV */
    SUV thermic_SUV ("Audi", "Benzina", "RS", 4, 400, 45647309, thermic);
    thermic_SUV.startEngine();
    thermic_SUV.afisare();
    std::cout<<std::endl;

    /* Copy Constructor */
    SUV thermic_SUV_2 = thermic_SUV;
    thermic_SUV_2.afisare();
    std::cout<<std::endl;

    thermic_SUV_2.set_brand("BWM");
    thermic_SUV_2.set_echipare("M");
    
    thermic_SUV_2.afisare();
    std::cout<<std::endl;


    /* Copy assigment Operator */
    thermic_SUV = thermic_SUV_2;
    thermic_SUV.afisare();


    std::cout<<std::endl;


    return 0;
}