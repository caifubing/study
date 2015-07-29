#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "pizzastore.h"
#include "nystylecheesepizza.h"
class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    ~NYPizzaStore();
    std::shared_ptr<Pizza> createPizza(std::string type);
};

#endif // NYPIZZASTORE_H
