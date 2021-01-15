#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template<typename T>
unsigned liczPopularnych(T it1, T it2)
{
    return std::count_if(it1, it2, [](Artysta& a){return a.getSluchacze() > 1000;});
}