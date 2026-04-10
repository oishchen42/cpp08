#include "easyfind.hpp"


int main()
{
    std::vector<int> v = {8, 4, 5, 9};
    try{
        easyfind(v, 9);
        easyfind(v, 40);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}