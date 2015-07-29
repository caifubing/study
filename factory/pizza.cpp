#include "pizza.h"
#include <iostream>
using std::cout;  using std::endl;
Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::prepare()
{
    cout << "Prepare " << m_name  << "\n";
    cout << "Tossing dough..." << endl;
    cout << "Adding sauce..." << endl;
    cout << "Adding toppings: " << endl;
    for(auto &i: m_toppings)
    {
        cout << "       "        << i << endl;
    }
}

void Pizza::bake()
{
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
    cout << "Cutting the pizza into diagonal slices" << endl;
}


void Pizza::box()
{
    cout << "Place pizza in official pizzastore box" << endl;
}

std::string Pizza::getName()
{
    return m_name;
}

