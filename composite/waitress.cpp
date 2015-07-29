#include "waitress.h"
using std::shared_ptr;
using std::make_shared;
Waitress::Waitress(shared_ptr<MenuComponet> mC)
{
    m_mc = mC;
}

Waitress::~Waitress()
{

}
void Waitress::printMenu()
{
    m_mc->print();
}
