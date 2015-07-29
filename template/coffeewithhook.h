#ifndef COFFEEWITHHOOK_H
#define COFFEEWITHHOOK_H
#include <string>
#include "caffeinebeveragewithhook.h"
class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
    CoffeeWithHook();
    ~CoffeeWithHook();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
private:
    std::string getUserInput();
};

#endif // COFFEEWITHHOOK_H
