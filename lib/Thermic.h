#ifndef _THERMIC_H_
#define _THERMIC_H_

#include <iostream>
#include <Engine.h>

class Thermic: public Engine
{
    public:
        virtual void startEngine() const override
        {
            std::cout<< "Thermic Engine is ready. \n";
        }
};

#endif
