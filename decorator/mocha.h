#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"
#include "beverage.h"
#include <memory>

class Mocha : public CondimentDecorator
{
public:
    Mocha(std::shared_ptr<Beverage> beverage);
    ~Mocha();
    std::string getDescription();
    double cost();
private:
    std::shared_ptr<Beverage> m_beverage;
};

#endif // MOCHA_H
