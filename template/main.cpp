#include <iostream>
#include <memory>
#include "coffeewithhook.h"

using namespace std;

int main()
{
   shared_ptr<CoffeeWithHook> coffeeHook = make_shared<CoffeeWithHook>();
    coffeeHook->prepareRecipe();
    return 0;
}

