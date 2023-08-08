#include "header.h"
#include <iomanip>

int main() {

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

    int numWidth = std::to_string(number).length();
    int sizeWidth = std::to_string(size).length();
    int resultWidth = std::to_string(array[size - 1]).length();

    std::cout << std::endl;
    std::cout << "                                    ╭";
    for (int j = 0; j < numWidth + sizeWidth + resultWidth + 8; j++) {
        std::cout << "─";
    }

    std::cout << "╮" << std::endl;
    std::cout << "                                maked by @ferrnnaando " << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << "                                    │ ";
        std::cout << std::setw(numWidth) << number << " * " << std::setw(sizeWidth) << (i + 1) << " = ";
        std::cout << std::setw(resultWidth) << array[i] << " │" << std::endl;
    }

    std::cout << "                                    ╰";
    for (int j = 0; j < numWidth + sizeWidth + resultWidth + 8; j++) {
        std::cout << "─";
    }
    std::cout << "╯" << std::endl << std::endl;

    delete[] array;

    return 0;
}