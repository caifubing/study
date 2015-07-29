#ifndef ASTATE_H
#define ASTATE_H


#include "gumballmachine.h"
class AState : public State
{
public:
    AState(std::shared_ptr<GumballMachine> gm);
    ~AState();
    void insert();
    void remove();
private:
    std::shared_ptr<GumballMachine> m_gm;
};

#endif // ASTATE_H
