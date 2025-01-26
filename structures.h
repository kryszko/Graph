/** @file **/

#pragma once

#include <unordered_map>
#include <string>
#include <vector>


/** Struktura grafu na którym operuje program
*   @param graph g³ówna struktura grafu
*   @param nodes mapa wêz³ów
*   @param color_amount liczba kolorów/grup
**/
struct graph
{

    /** Struktura grafu na którym operuje program
    *   @param color kolor/grupa przypisany wêz³owi
    *   @param neighbor mapa z si¹siadami danego wêz³a
    **/
    struct nodes
    {
        unsigned int color = 0;
        std::vector<std::string> neighbor;
    };

    std::unordered_map<std::string, nodes> nodes;

    unsigned int color_amount = 0;
};