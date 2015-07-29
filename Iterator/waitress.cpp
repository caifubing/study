#include "waitress.h"
#include <iostream>
using std::cout; using std::endl;
Waitress::Waitress(DinerMenu dinerMenu)
{
    m_dinerMenu = dinerMenu;
}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
    std::shared_ptr<Iterator> dIterator = m_dinerMenu.createIterator();
    printMenu(dIterator);
}

void Waitress::printMenu(std::shared_ptr<Iterator> iterator)
{
    while(iterator->hasNext())
    {
        MenuItem menuItem =iterator->next();
        cout << menuItem.getName()  <<  ", ";
        cout << menuItem.getDescription() << ", ";
        cout <<menuItem.getPrice() << "!" << endl;
    }
}

