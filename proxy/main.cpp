#include <iostream>
#include "bproxy.h"
using namespace std;

int main()
{
    shared_ptr<B> b = make_shared<B>();
    shared_ptr<BProxy> bp = make_shared<BProxy>(b);
    bp->print();
    return 0;
}

