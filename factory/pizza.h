#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <list>
class Pizza
{
public:
    Pizza();
    virtual ~Pizza();
    void prepare();
    void bake();
    void cut();
    void box();
    std::string getName();
protected:
    std::string m_name;
    std::string  m_dough;
    std::string m_sauce;
    std::list<std::string> m_toppings;
};

#endif // PIZZA_H
