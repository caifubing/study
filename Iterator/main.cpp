#include <iostream>
#include "dinermenu.h"
#include "waitress.h"

using namespace std;

int main()
{
    DinerMenu dm;
    shared_ptr<Waitress> w = make_shared<Waitress>(dm);
    w->printMenu();
    return 0;
}

