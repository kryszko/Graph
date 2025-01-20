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



//przerobiæ na plik niedoskona³y
graph read_numbers(const std::string& input_file_name)
{
	graph readed;

	return readed;
}



void help(char* params[])
{
	std::cout << "pomocnik bo nie dzia³a" << std::endl;
	std::cout << params[0];
}