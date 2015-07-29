#include <iostream>
#include "singleton.h"

using namespace std;
shared_ptr<Singleton> Singleton::m_pInstance = nullptr;
int main()
{
    shared_ptr<Singleton> singleton = Singleton::getInstance();

    return 0;
}

