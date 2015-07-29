#include "bproxy.h"

BProxy::BProxy(std::shared_ptr<B> b)
{
    m_a = b;
}

BProxy::~BProxy()
{

}

void BProxy::print()
{
    m_a->print();
}

