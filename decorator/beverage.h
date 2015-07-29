#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>

class Beverage
{
public:
    Beverage();
   virtual ~Beverage();
    virtual std::string getDescription();
    virtual double cost() = 0;
protected:
    std::string m_description = "Unknow Beverage";
};

#endif // BEVERAGE_H
