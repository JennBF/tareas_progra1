#include <iostream>
#include "Invertir.h"

int main() {
    int numero;

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    std::cout << "Número invertido: " << invertirNumero(numero) << std::endl;

    return 0;
}
