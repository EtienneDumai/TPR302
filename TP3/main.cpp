#include <list>
#include <iostream>
using namespace std;
template <class T, class A = allocator<T>>
class List
{
    public:
    typedef T value_type;
    typedef value_type *iterator;
    void push_back(const value_type &val);
    iterator begin();
    iterator end();
};

