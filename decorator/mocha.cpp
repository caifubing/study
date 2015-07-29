#include "mocha.h"

Mocha::Mocha(std::shared_ptr<Beverage> beverage)
{
    m_beverage = beverage;
}

Mocha::~Mocha()
{

}

std::string Mocha::getDescription()
{
    return m_beverage->getDescription() + ", mocha";
}

double Mocha::cost()
{
    return 0.20 + m_beverage->cost();
}


