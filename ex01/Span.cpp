#include "Span.hpp"
// void print_vec(std::vector<int> const &v);

Span::Span(unsigned int N) : _N(N) 
{
    _storage.reserve(_N);
}

Span::~Span() {};

Span::Span(const Span& other) : _N(other._N)
{
    _storage.reserve(_N);
    _storage = other._storage;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_storage.reserve(_N);
        this->_storage = other._storage;
    }
    return (*this);
}

int Span::longestSpan() const
{
    if (_storage.size() <= 1)
        throw std::logic_error(std::string(TerminalMsgs::RED) + "The size of the class is too low" + TerminalMsgs::RESET);
    std::vector<int> sorted = _storage;
    std::sort(sorted.begin(), sorted.end());
    return (*(sorted.end() - 1) - *sorted.begin());
}

int Span::shortestSpan() const
{
    size_t size = _storage.size();
    if (size <= 1)
        throw std::logic_error(std::string(TerminalMsgs::RED) + "The size of the class is too low" + TerminalMsgs::RESET);
    std::vector<int> sorted = _storage;
    std::sort(sorted.begin(), sorted.end());
    int diff = sorted[1] - sorted[0];
    int best_a = sorted[0];
    int best_b = sorted[1];
    for (size_t i = 1; i < size - 1; i++)
    {
        int new_diff = sorted[i + 1] - sorted[i];
        if (new_diff < diff)
        {
            #if DEBUG_MODE
                std::cout << TerminalMsgs::BLUE << "[DEBUG] Span is updated! "
                << "Previous best: " << best_b << " - " << best_a << " = " << diff << ") | "
                << "New best: (" << sorted[i+1] << " - " << sorted[i] << " = " << new_diff << TerminalMsgs::RESET << ")\n";
            #endif
            diff = new_diff;
            best_a = sorted[i];
            best_b = sorted[i + 1];
        }
    }
    return diff;
}

void Span::addNumber(int value)
{
    if (_storage.size() >= _N)
        throw std::logic_error(std::string(TerminalMsgs::RED) + "The capacity is full" + TerminalMsgs::RESET);
    _storage.push_back(value);
}

std::vector<int> const& Span::getVector() const
{
    return _storage;
}

std::ostream& operator<<(std::ostream& out, const Span &object)
{
    std::vector<int> const v = object.getVector();
    unsigned int size = v.size();
    out << "the size is: " << size << std::endl;
    out << "{ ";
    for (unsigned int i = 0; i < size; i++)
    {
        out << v[i] << " ";
    }
    out << "}\n";
    return out;
}