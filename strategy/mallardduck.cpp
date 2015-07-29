#include "mallardduck.h"

#include <iostream>
#include <memory>

#include "quack.h"
#include "flywithwings.h"

using std::make_shared;
using std::shared_ptr;
using std::cout; using std::endl;

MallardDuck::MallardDuck()
{
   m_qb = make_shared<Quack>();
   m_fb = make_shared<FlyWithWings>();
}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::display()
{
    cout << "I'm a real Mallard duck!" << endl;
}

