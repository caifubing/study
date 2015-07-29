#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H


class FlyBehavior
{
public:
    FlyBehavior();
    virtual ~FlyBehavior();
    virtual void fly(void) = 0;
};

#endif // FLYBEHAVIOR_H
