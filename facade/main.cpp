#include <iostream>
#include "light.h"
#include "facade.h"
using namespace std;

int main()
{
    shared_ptr<Light> light  = make_shared<Light>();
    shared_ptr<Facade> ligthFacade = make_shared<Facade>(light);
    ligthFacade->on();
    ligthFacade->off();
    return 0;
}

