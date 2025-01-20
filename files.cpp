#include <string>
#include <iostream>
#include <fstream>

#include "other_functions.h"
#include "structures.h"

//przerobiæ na plik niedoskona³y
graph read_numbers(const std::string& input_file_name)
{
	graph readed;

	std::ifstream base_file(input_file_name);
	std::string left, right;

	while (base_file >> left >> right)
	{
		readed.node[left].neighbor.push_back(right);
		readed.node[right].neighbor.push_back(left);
	}

	return readed;
}