#ifndef BSTATE_H
#define BSTATE_H

#include "gumballmachine.h"
class BState : public State
{
public:
    BState(std::shared_ptr<GumballMachine> gm);
    ~BState();
    void insert();
    void remove();
private:
    std::shared_ptr<GumballMachine> m_gm;
};

#endif // BSTATE_H
