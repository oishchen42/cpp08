#include "easyfind.hpp"


int main()
{
    std::vector<int> v = {8, 4, 5, 9};
    std::list<int> l = {7, 7, 5, 16, 8};
    std::cout << "===============VECTORS=================:\n";
    try{
        easyfind(v, 9);
        easyfind(v, 40);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===============LISTS=================:\n";
    try{
        easyfind(l, 7);
        easyfind(l, 40);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}