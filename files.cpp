#include <string>
#include <iostream>
#include <fstream>

#include "structures.h"

graph read_numbers(const std::string& input_file_name)
{
	graph readed;

	std::ifstream base_file(input_file_name);
	std::string left, right;

	while (base_file >> left >> right)
	{
		readed.nodes[left].neighbor.push_back(right);
		readed.nodes[right].neighbor.push_back(left);
	}

	base_file.close();
	return readed;
}

void write_results(const graph& g, const std::string& output_file_name)
{
	std::ofstream result_file(output_file_name);
	if (result_file)
	{
		if (g.color_amount == 2)
		{
			result_file << "The graph is bipartite" << std::endl 
			<< "Group 1: ";
			for (const auto& pair : g.nodes)
			{
				const std::string node_name = pair.first;
				unsigned int node_color = pair.second.color;

				if (node_color == 1)
					result_file << node_name << " ";
			}
			result_file << std::endl << "Group 2: ";
			for (const auto& pair : g.nodes)
			{
				const std::string node_name = pair.first;
				unsigned int node_color = pair.second.color;

				if (node_color == 2)
					result_file << node_name << " ";
			}
				
		}
		else
		{
			result_file << "The graph is not bipartite";
		}
	}
}