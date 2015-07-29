#include <iostream>
#include <memory>
#include "waitress.h"
#include "menucomponet.h"
#include "menuitem.h"
#include "menu.h"
using namespace std;
int main(void)
{
    shared_ptr<MenuComponet> dinerMenu = make_shared<Menu>("DinerMenu");

   shared_ptr<MenuComponet> allMenu = make_shared<Menu>("ALL Menu");
    allMenu->add(dinerMenu);

    shared_ptr<MenuComponet> item = make_shared<MenuItem>("Pasta",3.89);
     dinerMenu->add(item);
//     item->print();
     Waitress waitess(allMenu);
    waitess.printMenu();
    return 0;
}

