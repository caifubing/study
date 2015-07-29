
#include "dinermenu.h"
#include <iostream>
using std::shared_ptr; using std::make_shared;
using std::cout; using std::endl;

DinerMenu::DinerMenu()
{
    addItem("Vegetarian","(Fakin) bacon with lettuce", true, 2.99);
    addItem("BLT","bacon tomato on whole wheat", true,3.29);
}

DinerMenu::~DinerMenu()
{

}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
    MenuItem menuItem(name,description,vegetarian,price);
    m_menuItems.push_back(menuItem);
}

std::shared_ptr<Iterator> DinerMenu::createIterator()
{
   shared_ptr<Iterator> dIterator = make_shared<DinerMenuIterator>(m_menuItems);
    return dIterator;
}

//std::vector<MenuItem> DinerMenu::getMenuItems()
//{
//    return m_menuItems;
//}

