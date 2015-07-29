#include "menu.h"
#include  <iostream>
using std::cout;
using std::endl;
Menu::Menu(std::string name)
{
    m_name = name;
}

Menu::~Menu()
{

}

void Menu::add(std::shared_ptr<MenuComponet> menuComponet)
{
    m_menuComponets.push_back(menuComponet);
//    numbers.push_back(5);
}

std::string Menu::getName()
{
    return m_name;

}

void Menu::print()
{
    cout << "Menu: " << getName() << endl;
    for(auto i:m_menuComponets)
    {
        i->print();
    }
}

