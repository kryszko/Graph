#pragma once

#include <string>

#include "structures.h"

std::pair<std::string, std::string> check_params(int ile, char* params[]);

void help(char* params[]);

graph read_numbers(const std::string& input_file_name);