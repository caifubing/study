#include "light.h"
#include <iostream>
using std::cout;     using std::endl;
Light::Light()
{

}

Light::~Light()
{

}

void Light::On()
{
    cout << "light on!" << endl;
}

void Light::off()
{
    cout << "light off!" << endl;
}

