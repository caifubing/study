#include "pizzastore.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

std::shared_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    std::shared_ptr<Pizza> pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}

