#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include <memory>
#include <iostream>
#include "state.h"
class AState;
class BState;

class GumballMachine
{
public:
    GumballMachine();
    ~GumballMachine();
    void insert();
    void remove();
    std::shared_ptr<State> getAState();
    std::shared_ptr<State> getBState();
    void setstate(std::shared_ptr<State> state);
    void setAState(std::shared_ptr<AState> astate);
    void setBState(std::shared_ptr<BState> bstate);


private:
    std::shared_ptr<State> m_state;

    std::shared_ptr<State> m_aState;
    std::shared_ptr<State> m_bState;
};

#endif // GUMBALLMACHINE_H
