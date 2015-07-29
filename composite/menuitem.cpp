#include "menuitem.h"
#include <iostream>
using std::cout;
using std::endl;
MenuItem::MenuItem(std::string name, double price)
{
    m_name = name;
    m_price = price;
}

MenuItem::~MenuItem()
{

}
std::string MenuItem::getName()
{
    return m_name;
}

double MenuItem::getPrice()
{
    return m_price;
}

void MenuItem::print()
{
    cout << "  " << getName() << "-------- "<< getPrice() << endl;
}

