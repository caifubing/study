#include <iostream>
#include <memory>
#include "duck.h"
#include "mallardduck.h"

using namespace std;

int main()
{
    shared_ptr<Duck> mallard = make_shared<MallardDuck>();
    mallard->performFly();
    mallard->performQuack();
    mallard->display();
    mallard->swim();
    return 0;
}

