#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H
#include "menuitem.h"
#include <list>
#include <string>


class PancakeHouseMenu
{
public:
    PancakeHouseMenu();
    ~PancakeHouseMenu();
    void addItem(std::string name, std::string description, bool vegetarian, double price);
    std::list<MenuItem> getMenuItems();
private:
    std::list<MenuItem> m_menuItems;
};

#endif // PANCAKEHOUSEMENU_H
