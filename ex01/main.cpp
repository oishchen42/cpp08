#include "Span.hpp"


void print_vec(std::vector<int> const &v)
{
    std::vector<int> v_cpy = v;
    std::vector<int>::iterator it = v_cpy.begin();
    for (; it < v_cpy.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

}

int main()
{
    int size = 1;
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    Span s(size);
    try
    {
        // s.longestSpan();
        for (int i = 0; i < size; i++)
            s.addNumber(std::rand() % 1000);
        
        // std::cout << s;
        std::cout << "the shortest span is: " << s.shortestSpan() << std::endl;

        std::cout << "the longest span is: " << s.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
