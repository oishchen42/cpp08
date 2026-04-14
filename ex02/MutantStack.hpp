#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack& other);
    virtual ~MutantStack();

    MutantStack& operator=(const MutantStack& other);

    using iterator = typename std::stack<T>::container_type::iterator;

    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"