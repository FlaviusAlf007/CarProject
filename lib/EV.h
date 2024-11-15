#ifndef _EV_H_
#define _EV_H_

#include <iostream>
#include <Engine.h>

class EV: public Engine
{
    public:
        virtual void startEngine() const override
        {
            std::cout<< "Electric Engine is ready. \n";
        }
};

#endif
