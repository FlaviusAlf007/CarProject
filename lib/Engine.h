#ifndef _ENGINE_H_
#define _ENGINE_H_

class Engine
{
    public:
        virtual ~Engine() = default;
        virtual void startEngine() const = 0;
};

#endif