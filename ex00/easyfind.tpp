#pragma once
#include "easyfind.hpp"

template <typename T>
void easyfind(T& object, int a)
{
    typename T::iterator it = object.begin();
    for (; it != object.end(); it++)
    {
        if (*it == a)
        {
            std::cout << "The first occurance of the: " << a << " is found at the position: " << std::distance(object.begin(), it) << std::endl;
            return ;
        }
    }
    throw std::invalid_argument("received nonexsisting value");
}