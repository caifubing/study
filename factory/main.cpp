#include <iostream>

#include "nypizzastore.h"
#include "nystylecheesepizza.h"

using namespace std;

int main()
{
    shared_ptr<PizzaStore> ps = make_shared<NYPizzaStore>();
    shared_ptr<Pizza> pizza = ps->orderPizza("cheese") ;
    cout << "Ethan order a  " << pizza->getName() << endl;

    return 0;
}

