#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "beverage.h"
#include <string>

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
   virtual ~CondimentDecorator();
    virtual std::string getDescription() = 0;
};

#endif // CONDIMENTDECORATOR_H
