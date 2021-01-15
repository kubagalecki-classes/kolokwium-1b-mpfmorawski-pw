#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<typename T>
class ArtystaPlusInstrument
{
public:
    ArtystaPlusInstrument(const Artysta& a_, const T& i_) : a{a}, i{i} {}
    unsigned koncert() {return i.liczbaUczestnikow(static_cast<unsigned int>(a.getSluchacze()));}
private:
    Artysta a;
    T i;
};
