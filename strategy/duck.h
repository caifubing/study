#ifndef DUCK_H
#define DUCK_H

#include <memory>

#include "quackbehavior.h"
#include "flybehavior.h"


class QuackBehavior;
class FlyBehavior;

class Duck
{
public:
    Duck();
    virtual ~Duck();
    virtual void display(void) = 0;
    void performFly(void);
    void performQuack(void);
    void swim(void);
protected:
    std::shared_ptr<QuackBehavior> m_qb;
    std::shared_ptr<FlyBehavior> m_fb;
};

#endif // DUCK_H
