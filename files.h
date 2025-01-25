#pragma once

#include "structures.h"



graph read_numbers(const std::string& input_file_name);

void write_results(const graph& g, const std::string& output_file_name);