#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <vector>

#include "structures.h"
#include "files.h"
#include "graph_mod.h"


void print_help()
{
    std::cout << "Usage instruction: " << std::endl
        << "-i <input_file>" << std::endl
        << "-o <output_file>" << std::endl;
}


int main(int argc, char* argv[])
{
    std::string input_file_name, output_file_name;

    //sprawdzanie parametrów wejściowych
    if (argc != 5) {
        print_help();
        return 1;
    }
    for (int i = 1; i < argc; i += 2) {
        if (std::string(argv[i]) == "-i") 
        {
            input_file_name = argv[i + 1];
        }
        else if (std::string(argv[i]) == "-o") 
        {
            output_file_name = argv[i + 1];
        }
        else {
            print_help();
            return 1;
        }
    }


    //test plików
    std::ifstream i_file(input_file_name);
    std::ifstream o_file(output_file_name);
    if (!i_file or !o_file) 
    {
        std::cout << "File error!";
        return 1;
    }
    i_file.close();
    o_file.close();


    //wczytanie z pliku do grafu
    graph graph_string = read_numbers(input_file_name);
    

    //kolorowanie grafu, dzielenie na grupy
    coloring(graph_string);


    //zapisywanie wyników
    write_results(graph_string, output_file_name);


    std::cout << "Done :)";

    return 0;
}