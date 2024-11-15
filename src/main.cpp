#include <iostream>
#include <memory>
#include <Motorcycle.h>
#include <EV.h>
#include <Thermic.h>

using namespace std;



int main()
{
    shared_ptr<Engine> ev = make_shared<EV>();
    shared_ptr<Engine> thermic = make_shared<Thermic>();

    try
    {
        /*  Ordine apelare Constructori:
                1.Constructor Vehicle
                2.Constructor Motorcycle
        */
        Motorcycle thermic_motorcycle ("YAMAHA", "Benzina", "SP", 2, 110, 45642354, thermic);
        thermic_motorcycle.startEngine();
        thermic_motorcycle.afisare();

        // Testare a limitarii de a se putea vreea un singur obiect de acelasi fel.
        Motorcycle electric_motorcycle("BMW", "Electric", "Standard", 2, 40, 23234234,  ev);
        electric_motorcycle.startEngine();
        electric_motorcycle.afisare();


        /*  Ordine apelare Destructori:
                1.Destructor Motorcycle
                2.Destructor Vehicle
        */
    }
    catch(std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

     
    Vehicle_Utils::printMessage("Ready To Race");




    return 0;
}