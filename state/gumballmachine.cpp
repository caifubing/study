#include "gumballmachine.h"
#include <iostream>
#include "bstate.h"
#include "astate.h"
using std::cout;
using std::endl;
GumballMachine::GumballMachine()
{
//    getAState();
//    getBState();
//    m_state = m_aState;
    cout << " state = AState." << endl;
}

GumballMachine::~GumballMachine()
{

}

void GumballMachine::insert()
{
    m_state->insert();
}

void GumballMachine::remove()
{
    m_state->remove();
}

std::shared_ptr<State> GumballMachine::getBState()
{
    return m_bState;
}

std::shared_ptr<State> GumballMachine::getAState()
{
    return m_aState;
}

void GumballMachine::setstate(std::shared_ptr<State> state)
{
    m_state = state;
}

void GumballMachine::setAState(std::shared_ptr<AState> astate)
{
    cout << "Set AState." << endl;
    m_aState = astate;
}

void GumballMachine::setBState(std::shared_ptr<BState> bstate)
{
    cout << "Set BState." <<endl;
    m_bState = bstate;
}



