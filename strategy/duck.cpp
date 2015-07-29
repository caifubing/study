#include "duck.h"
#include <iostream>
using std::cout; using std::endl;
Duck::Duck()
{

}

Duck::~Duck()
{

}

void Duck::performFly()
{
    m_fb->fly();
}

void Duck::performQuack()
{
    m_qb->quack();
}

void Duck::swim()
{
    cout << "All ducks float, even decoys!" << endl;
}

