#include <iostream>
#include "simplecontrol.h"
#include "lightoncommand.h"
using namespace std;

int main()
{
    shared_ptr<SimpleControl> sc = make_shared<SimpleControl>();//女招待员
    shared_ptr<Light> light = make_shared<Light>();//顾客
    shared_ptr<LightOnCommand> lc = make_shared<LightOnCommand>(light);//订单
    sc->setCommand(lc);//女招待员拿到订单
    sc->buttonPress();//女招待员将订单给厨师
    //女招待员有从顾客取得订单和将订单给厨师的职责
    //厨师按照订单执行动作 execute();
    return 0;
}

