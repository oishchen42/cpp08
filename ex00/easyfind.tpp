#pragma once
#include "easyfind.hpp"

template <typename T>
void easyfind(T& object, int a)
{
    for (size_t i = 0; i < object.size(); i++ )
    {
        if (object[i] == a)
        {
            std::cout << "The first occurance of the: " << a << " is found at the position: " << i << std::endl;
            return ;
        }
    }
    throw std::invalid_argument("received nonexsisting value");
}