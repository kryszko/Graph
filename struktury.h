#pragma once

#include <unordered_map>
#include <string>
#include <vector>

struct graf
{
    struct wierzcholki
    {
        unsigned int kolor = 0;
        std::vector<std::string> sasiedzi;
    };

    std::unordered_map<std::string, wierzcholki> wierzcholki;

    unsigned int liczba_kolorow = 0;
};