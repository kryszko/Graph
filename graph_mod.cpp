#include <string>

#include "graph_mod.h"
#include "structures.h"

void coloring(graph& g)
{
	std::size_t nodes_amount = g.nodes.size();

	unsigned int color = 0;
	while (nodes_amount > 0)
	{
		++color;
		++g.color_amount;
		for (auto& [x, y] : g.nodes)
		{
			bool can_color = true;
			if (y.color == 0)
			{
				for (const auto& n : y.neighbor)
				{
					if (g.nodes[n].color == color)
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