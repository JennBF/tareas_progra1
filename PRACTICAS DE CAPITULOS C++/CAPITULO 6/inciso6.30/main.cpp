#include <iostream>
#include "Invertir.h"

int main() {
    int numero;

    std::cout << "Ingrese un n�mero: ";
    std::cin >> numero;

    std::cout << "N�mero invertido: " << invertirNumero(numero) << std::endl;

    return 0;
}
