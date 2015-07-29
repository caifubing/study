#include "pancakehousemenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{

    addItem("K&B's Pancake Breakfast","Packcakes with scarambled eggs, and toast",true,2.99);
    addItem("Waffles","Waffles, with your choice of blueberries or strawberries",true,3.59);
}

PancakeHouseMenu::~PancakeHouseMenu()
{

}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
    MenuItem menuItem(name,description,vegetarian,price);
    m_menuItems.push_back(menuItem);

}

std::list<MenuItem> PancakeHouseMenu::getMenuItems()
{
    return m_menuItems;
}

