/** @file **/

#pragma once

#include "structures.h"


/** Funkcja tworząca graf z podanych w pliku informacji
*   @param input_file_name nazwa pliku do wczytania danych
**/
graph read_numbers(const std::string& input_file_name);


/** Funkcja zapisująca wynik do pliku wyjściowego
*	@param graph graf z danymi
*   @param output_file_name nazwa pliku do zapisu danych
**/
void write_results(const graph& g, const std::string& output_file_name);