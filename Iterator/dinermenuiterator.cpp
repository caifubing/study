#include "dinermenuiterator.h"

DinerMenuIterator::DinerMenuIterator(std::vector<MenuItem> items)
    :m_items(items)
{

}

DinerMenuIterator::~DinerMenuIterator()
{

}

bool DinerMenuIterator::hasNext()
{
   if(m_postion < m_items.size())
       return true;
   else
       return false;
}

MenuItem DinerMenuIterator::next()
{
    MenuItem menuItem = m_items[m_postion];
    ++m_postion;
    return menuItem;
}

