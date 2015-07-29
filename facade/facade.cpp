#include "facade.h"

Facade::Facade(std::shared_ptr<Light> light)
{
    m_light = light;
}

Facade::~Facade()
{

}

void Facade::on()
{
    m_light->On();
}

void Facade::off()
{
    m_light->off();
}

