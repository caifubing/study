#include "singleton.h"
#include <iostream>
using std::cout;             using std::endl;
using std::shared_ptr; using std::make_shared;
Singleton::Singleton()
{
    cout << "m_pInstance" << endl;
}

Singleton::~Singleton()
{

}

std::shared_ptr<Singleton> Singleton::getInstance()
{
    if(m_pInstance == nullptr)
        m_pInstance = make_shared<Singleton>();
//        m_pInstance = shared_ptr<Singleton>(new Singleton());
    return m_pInstance;
}

