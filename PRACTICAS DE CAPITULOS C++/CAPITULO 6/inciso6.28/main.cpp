#include <iostream>
#include "Perfectos.h"

int main() {
    std::cout << "N�meros perfectos entre 1 y 1000:\n";
    encontrarPerfectos(1000);

    // Prueba con valores grandes
    std::cout << "\nProbando con n�meros m�s grandes...\n";
    encontrarPerfectos(10000);

    return 0;
}
