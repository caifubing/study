#ifndef BPROXY_H
#define BPROXY_H
#include <iostream>
#include <memory>
#include "a.h"
#include "b.h"

class BProxy : public A
{
public:
    BProxy(std::shared_ptr<B> b);
    ~BProxy();
    void print();
private:
    std::shared_ptr<A> m_a;
};

#endif // BPROXY_H
