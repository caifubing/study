#include <iostream>
#include <memory>
#include "mocha.h"
#include "espresso.h"
using namespace std;
int main()
{
    shared_ptr<Beverage> beverage = make_shared<Espresso>();

    cout << beverage->getDescription() << " ," << "$" <<beverage->cost() << endl;

    shared_ptr<Beverage> b1 = make_shared<Mocha>(beverage);
    cout  << b1->getDescription() << " ,$" << b1->cost() << endl;
    return 0;
}


