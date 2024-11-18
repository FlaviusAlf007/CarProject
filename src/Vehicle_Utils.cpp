#include <Vehicle_Utils.h>

void Vehicle_Utils::printMessage(const std::string& message)
{
    std::cout<< "\nMessage: " << message << std::endl;
}


void Vehicle_Utils::printInfoVehicle(std::string br, long vin, std::string eng, std::string comb)
{
    std::cout << "\nBrand: " << br << " - VIN: " << vin
             << " - Engine: " << eng << " - Combustibil: " << comb << std::endl;
}
