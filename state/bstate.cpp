#include "bstate.h"
#include <iostream>
using std::cout;
using std::endl;
BState::BState(std::shared_ptr<GumballMachine> gm)
{
    m_gm = gm;
}

BState::~BState()
{

}

void BState::insert()
{
    cout << "B insert." <<endl;
}

void BState::remove()
{
    cout << "B remove." <<endl;
}

