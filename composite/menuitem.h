#ifndef MENUITEM_H
#define MENUITEM_H

#include "menucomponet.h"

class MenuItem : public MenuComponet
{
public:
    MenuItem(std::string name, double price);
    ~MenuItem();
    std::string getName();
    double getPrice();
    void print();
private:
    std::string m_name;
    double m_price;
};

#endif // MENUITEM_H
