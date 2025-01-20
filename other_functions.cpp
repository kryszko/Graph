#include <string>
#include <iostream>

#include "other_functions.h"
#include "structures.h"

std::pair<std::string, std::string> check_params(int ile, char* params[])
{
	if (ile == 3)
	{
		std::string input{params[1]};
		std::string output{params[1]};
		
		return {input, output};
	}

	return {};
}

void help(char* params[])
{
	std::cout << "pomocnik bo nie dzia³a" << std::endl;
	std::cout << params[0];
}



void write(const graph& g)
{
	for (const auto& nodes : g.node)
	{
		std::cout << nodes.first << " (" << nodes.second.color << ") ";
		for (const auto& n : nodes.second.neighbor)
		{
			std::cout << n << " ";
		}
		std::cout << std::endl;
	}
}