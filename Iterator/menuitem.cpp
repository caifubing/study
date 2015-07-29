#include "menuitem.h"


MenuItem::MenuItem(std::string name, std::string description, bool vegetarian, double price)
    :m_name(name),
      m_descrption(description),
      m_vegetarian(vegetarian),
      m_price(price)
{

}

MenuItem::~MenuItem()
{

}

std::string MenuItem::getName()
{
    return m_name;
}

std::string MenuItem::getDescription()
{
    return m_descrption;
}

double MenuItem::getPrice()
{
    return m_price;
}

bool MenuItem::getVegetarian()
{
    return m_vegetarian;
}

