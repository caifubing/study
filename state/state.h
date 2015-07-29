#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <memory>

class State
{
public:
    State();
    virtual ~State();
    virtual void insert() = 0;
    virtual void remove() = 0;
};

#endif // STATE_H
