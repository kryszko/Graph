#pragma once

#include <unordered_map>
#include <string>
#include <vector>

struct graph
{
    struct nodes
    {
        unsigned int color = 0;
        std::vector<std::string> neighbor;
    };

    std::unordered_map<std::string, nodes> nodes;

    unsigned int color_amount = 0;
};