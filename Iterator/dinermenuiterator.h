#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H
#include "iterator.h"
#include "menuitem.h"
#include <vector>
class DinerMenuIterator : public Iterator
{
public:
    DinerMenuIterator(std::vector<MenuItem > items);
    ~DinerMenuIterator();
    bool hasNext();
    MenuItem  next();
private:
    std::vector<MenuItem> m_items;
    int m_postion = 0;
};

#endif // DINERMENUITERATOR_H
