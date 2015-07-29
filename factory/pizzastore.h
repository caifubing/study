#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <string>
#include <memory>
#include "pizza.h"

class PizzaStore
{
public:
    PizzaStore();
    virtual ~PizzaStore();
    virtual std::shared_ptr<Pizza> createPizza(std::string type) = 0;
    std::shared_ptr<Pizza> orderPizza(std::string type);
};

#endif // PIZZASTORE_H
