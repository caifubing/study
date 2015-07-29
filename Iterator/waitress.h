#ifndef WAITRESS_H
#define WAITRESS_H
#include <memory>

#include "dinermenuiterator.h"
#include "dinermenu.h"
#include "iterator.h"
class Waitress
{
public:
    Waitress(DinerMenu dinerMenu);
    ~Waitress();
    void printMenu();
    void printMenu(std::shared_ptr<Iterator>  iterator);
private:
    DinerMenu m_dinerMenu;
};

#endif // WAITRESS_H
