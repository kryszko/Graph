#include <iostream>
#include <string>

#include "other_functions.h"
#include "structures.h"
#include "files.h"

int main(int ile, char * params[])
{
    // poprawność parametrów
    auto [input_file_name, output_file_name] = check_params(ile, params);

    std::pair<std::string, std::string> check_params(int ile, char* params[]);

    if (not input_file_name.empty() and not output_file_name.empty())
    {
        //// działa
        graph numbers = read_numbers(input_file_name);
        //graph read_numbers(const std::string & input_file_name)
        
        write(numbers);
        void write(const graph & g);

        //coloring(numbers);
        //write_colors(output_file_name);
    }
    else
    {
        help(params);
    }

    return 0;
}