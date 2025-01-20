#pragma once

#include <unordered_map>
#include <string>
#include <vector>

struct graph
{
    struct node
    {
        unsigned int color = 0;
        std::vector<std::string> neighbor;
    };

    std::unordered_map<std::string, node> node;

    unsigned int liczba_kolorow = 0;
};