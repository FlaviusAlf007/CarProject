#include <iostream>
#include <memory>
#include <Motorcycle.h>
#include <SUV.h>
#include <Sedan.h>
#include <Cabrio.h>
#include <EV.h>
#include <ATV.h>
#include <Thermic.h>
#include <Truck.h>

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


    /* Sedan */
    Sedan thermic_Sedan ("Mercedes", "Diesel", "Gt", 4, 370, 56217309, thermic);
    thermic_Sedan.afisare();
    std::cout<<std::endl;

        /* Move constructor */
        Sedan sedan_2(std::move(thermic_Sedan));
        sedan_2.afisare();

        /* Move Assignment Operator */
        Sedan sedan_3("Kia", "Benzina", "Standard", 4, 220, 56211124, thermic);
        sedan_3 = std::move(sedan_2);
        sedan_3.afisare();

    std::cout<<std::endl;
    

    /* ATV */
    try
    {
        ATV thermic_ATV ("CF Moto", "Benzina", "750", 4, 55, 85211667, thermic);
        thermic_ATV.afisare();

        /* Move constructor */
        ATV atv_2(std::move(thermic_ATV));
        atv_2.afisare();

        /* Move Assignment Operator */
        ATV atv_3("Canam", "Benzina", "Outlander", 4, 70, 12345678, thermic);
        atv_3 = std::move(atv_2);
        atv_3.afisare();

    }
    catch(std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<std::endl;



    /* Cabrio 
            --> Singleton
    */
    auto cabrio = Cabrio::getInstance("YAMAHA", "Benzina", "SP", 2, 110, 45642354, thermic);
    cabrio->afisare();

    auto cabrio_2 = Cabrio::getInstance("Mercedes", "Diesel", "Gt", 4, 370, 56217309, thermic);
    cabrio_2->afisare();
    std::cout<<std::endl;



    /* Truck 
            --> Singleton
    */
    auto truck = Truck::getInstance("Volvo", "Diesel", "700", 4, 500, 49902354, thermic);
    truck->afisare();

    auto truck_2 = Truck::getInstance("Scania", "Diesel", "800", 4, 670, 23517309, thermic);
    truck_2->afisare();
    std::cout<<std::endl;



    return 0;
}