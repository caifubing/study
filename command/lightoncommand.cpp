#include "lightoncommand.h"

LightOnCommand::LightOnCommand(std::shared_ptr<Light> light)
{
    m_light = light;
}

LightOnCommand::~LightOnCommand()
{

}

void LightOnCommand::execute()
{
    m_light->on();
}

