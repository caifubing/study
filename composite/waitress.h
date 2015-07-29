#ifndef WAITRESS_H
#define WAITRESS_H
#include <memory>
#include "menucomponet.h"
class Waitress
{
public:
    Waitress(std::shared_ptr<MenuComponet> mC);
    ~Waitress();
    void printMenu();
private:
    std::shared_ptr<MenuComponet> m_mc;
};

#endif // WAITRESS_H
