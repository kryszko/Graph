#include <string>
#include <iostream>
#include <fstream>

#include "other_functions.h"
#include "structures.h"
#include "graph_mod.h"




void coloring(graph& g)
{
	std::size_t nodes_amount = g.node.size();

	unsigned int color = 0;
	while (nodes_amount > 0)
	{
		++color;
		for (auto& [x, y] : g.node)
		{
			bool can_color = true;
			if (y.color == 0)
			{
				for (const auto& n : y.neighbor)
				{
					if (g.node[n].color == color)
					{
						can_color = false;
					}
				}
				if (can_color)
				{
					y.color = color;
					--nodes_amount;
				}
			}
		}

	}
}
