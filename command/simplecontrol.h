#ifndef SIMPLECONTROL_H
#define SIMPLECONTROL_H
#include <memory>
#include "command.h"

class SimpleControl
{
public:
    SimpleControl();
    ~SimpleControl();
    void setCommand(std::shared_ptr<Command> command);
    void buttonPress();
    private:
    std::shared_ptr<Command> m_slot;
};

#endif // SIMPLECONTROL_H
