#ifndef ITERATOR_H
#define ITERATOR_H
#include <memory>
class MenuItem;
class Iterator
{
public:
    Iterator();
    virtual  ~Iterator();
    virtual bool hasNext() = 0;
    virtual MenuItem next() = 0;
};

#endif // ITERATOR_H
