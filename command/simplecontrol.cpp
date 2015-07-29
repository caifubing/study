#include "simplecontrol.h"

SimpleControl::SimpleControl()
{

}

SimpleControl::~SimpleControl()
{

}

void SimpleControl::setCommand(std::shared_ptr<Command> command)
{
    m_slot = command;
}

void SimpleControl::buttonPress()
{
    m_slot->execute();
}

