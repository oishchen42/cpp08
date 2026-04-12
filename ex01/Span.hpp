#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include "include.h"

class Span
{
public:
    Span() = delete;
    Span(unsigned int N);
    Span(const Span& other);
    ~Span();

    Span& operator=(const Span& other);

    int longestSpan() const;
    int shortestSpan() const;

    void addNumber(int value);

    std::vector<int> const& getVector() const;
private:
    unsigned int _N = 0;
    std::vector<int> _storage;
};

std::ostream& operator<<(std::ostream& out, const Span &object);