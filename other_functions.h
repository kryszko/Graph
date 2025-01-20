#pragma once

#include <string>

#include "structures.h"

std::pair<std::string, std::string> check_params(int ile, char* params[]);

void help(char* params[]);







void write(const graph& g);