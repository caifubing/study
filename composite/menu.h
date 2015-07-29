#ifndef MENU_H
#define MENU_H

#include "menucomponet.h"
#include <vector>
#include <memory>

class Menu : public MenuComponet
{
public:
    Menu(std::string name);
    ~Menu();
    void add(std::shared_ptr<MenuComponet> menuComponet);
    std::string getName();
    void print();

private:
    std::string m_name;
    std::vector<std::shared_ptr<MenuComponet>> m_menuComponets;
    std::vector<int> numbers;

};

#endif // MENU_H
