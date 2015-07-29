#ifndef DINERMENU_H
#define DINERMENU_H
#include <vector>
#include <memory>
#include "menuitem.h"
#include "iterator.h"
#include "dinermenuiterator.h"
class DinerMenu
{
public:
    DinerMenu();
    ~DinerMenu();
    void addItem(std::string name, std::string description, bool vegetarian, double price);
//    std::vector<MenuItem> getMenuItems();
    std::shared_ptr<Iterator> createIterator();
//创建迭代器
private:

    std::vector<MenuItem> m_menuItems;
};

#endif // DINERMENU_H
