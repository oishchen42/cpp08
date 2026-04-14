#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    mstack.push(5);
    mstack.push(17);
    std::cout << "size before pop: " << mstack.size() << std::endl;
    std::cout << "our top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size after the pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}