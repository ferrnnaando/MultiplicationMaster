#include <iostream>
#include <stdlib.h>

struct node {
    int value;
    node* next;
};



int main() {
    int size;
    int number;
    const std::string italic = "\033[3m";
    const std::string reset = "\033[0m";
    const std::string bold = "\033[1m";
    const std::string underline = "\033[4m";
    const std::string color_cyan = "\033[36m";
    const std::string yellow = "\033[33m";

    // Mensaje de bienvenida

    std::cout << R"(
                        ╭───────────────────────────────────────╮
                        │  )" << bold << yellow << underline << R"(@ferrnnaando)" << reset << color_cyan << R"( Tablas de multiplicar)" << reset << italic << R"(   │
                        ╰───────────────────────────────────────╯

            Esta tabla de multiplicar, como lo indica el nombre, te permitirá obtener)" << R"(
            las mismas sobre el numero introducido por la cantidad de veces que desees.
                        
                        )" << reset << R"(Introduce el numero a multiplicar en bucle: )";
    std::cin >> number;
    std::cout << reset << R"(                        Introduce el numero de veces a multiplicar: )";
    std::cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = number * (i + 1);
    }

    std::cout << " ╭";
    size_t board_length = sizeof("│") + std::to_string(number).length() +
                        sizeof("*") + std::to_string(size).length() +
                        sizeof("=") + std::to_string(array[number - 1]).length();

    for(int j = 0; j < board_length; j++) {
             std::cout << "─";
        }
    std::cout << "╮" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << " │ " << number << " * " << (i + 1) << " = " << array[i] << " │ " << std::endl;
    }

    std::cout << " ╰";
    for(int j = 0; j < board_length; j++) {
        std::cout << "─";
    }
    std::cout << "╯" << std::endl << std::endl;

    delete[] array;
  
    return 0;
}