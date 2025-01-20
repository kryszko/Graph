#include <iostream>
#include <string>

#include "other_functions.h"
#include "structures.h"
#include "files.h"
#include "graph_mod.h"

int main()
{
    // poprawność parametrów


    //auto [input_file_name, output_file_name] = check_params(ile, params);

   //std::pair<std::string, std::string> check_params(int ile, char* params[]);

    std::string input_file_name = "/datas/dane.txt";
    std::string output_file_name = "/datas/wynik.txt";

    if (not input_file_name.empty() and not output_file_name.empty())
    {
        //// działa
        graph numbers = read_numbers(input_file_name);
        //graph read_numbers(const std::string & input_file_name)
        
        
        //void write(const graph & g);

        coloring(numbers);
        //void coloring(graph & g);
        //write_colors(output_file_name);

        write(numbers);

    }
    else
    {
        //help(params);
    }

    return 0;
}