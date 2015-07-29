#include "astate.h"
using std::cout;
using std::endl;
AState::AState(std::shared_ptr<GumballMachine> gm)
{
    m_gm= gm;
}

AState::~AState()
{

}

void AState::insert()
{
     cout << "A    insert. " << endl;
}

void AState::remove()
{
    cout << "A  remove." << endl;
    m_gm->setstate(m_gm->getBState());
}

