#ifndef MENUCOMPONET
#define MENUCOMPONET

#include <string>
#include <memory>
class MenuComponet
{
public:
    MenuComponet();
    virtual ~MenuComponet();
    virtual std::string getName();
    virtual double getPrice();
    virtual void add(std::shared_ptr<MenuComponet> menuComponet);
    virtual void print();
};


#endif // MENUCOMPONET

