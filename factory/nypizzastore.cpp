#include "nypizzastore.h"

NYPizzaStore::NYPizzaStore()
{

}

NYPizzaStore::~NYPizzaStore()
{

}

std::shared_ptr<Pizza> NYPizzaStore::createPizza(std::string type)
{
    if(type == "cheese")
    {
        return std::make_shared<NYStyleCheesePizza>();
    }
    else
        return nullptr;
}

