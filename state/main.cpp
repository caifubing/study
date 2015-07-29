#include <iostream>
#include "gumballmachine.h"
#include "astate.h"
#include "bstate.h"
using namespace std;

int main()
{

    shared_ptr<GumballMachine> gm = make_shared<GumballMachine>();
    shared_ptr<AState> a = make_shared<AState>(gm);
    shared_ptr<BState> b = make_shared<BState>(gm);

    gm->setstate(a);
        gm->setAState(a);
        gm->setBState(b);
    gm->insert();
    gm->remove();
    gm->insert();
    gm->insert();
    gm->insert();
    return 0;
}

