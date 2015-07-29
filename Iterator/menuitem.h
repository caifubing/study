#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem
{
public:
    MenuItem(std::string name, std::string description, bool vegetarian, double price);
    ~MenuItem();
    std::string getName();
    std::string getDescription();
    double getPrice();
    bool getVegetarian();

private:
    std::string m_name;
    std::string m_descrption;
    double m_price;
    bool m_vegetarian;
};

#endif // MENUITEM_H
