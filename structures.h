/** @file **/

#pragma once

#include <unordered_map>
#include <string>
#include <vector>


/** Struktura grafu na kt�rym operuje program
*   @param graph g��wna struktura grafu
*   @param nodes mapa w�z��w
*   @param color_amount liczba kolor�w/grup
**/
struct graph
{

    /** Struktura grafu na kt�rym operuje program
    *   @param color kolor/grupa przypisany w�z�owi
    *   @param neighbor mapa z si�siadami danego w�z�a
    **/
    struct nodes
    {
        unsigned int color = 0;
        std::vector<std::string> neighbor;
    };

    std::unordered_map<std::string, nodes> nodes;

    unsigned int color_amount = 0;
};