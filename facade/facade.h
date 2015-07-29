#ifndef FACADE_H
#define FACADE_H
#include <memory>
#include "light.h"
class Facade
{
public:
    Facade(std::shared_ptr<Light> light);
    ~Facade();
    void on();
    void off();
private:
    std::shared_ptr<Light> m_light;
};

#endif // FACADE_H
