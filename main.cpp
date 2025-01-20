#include <iostream>

int main(int ile, char * params[])
{
    // poprawność parametrów
    //auto [input_file_name, output_file_name] = check_params(ile, params);

    std::pair<std::string, std::string> check_params(int ile, char* params[]);

    //if (not input_file_name.empty() and not output_file_name.empty())
    //{
    //    // działa
    //    graf numbers = read_numbers(input_file_name);
    //    coloring(numbers);
    //    write_colors(output_file_name);
    //}
    //else
    //{
    //    help();
    //}

    return 0;
}