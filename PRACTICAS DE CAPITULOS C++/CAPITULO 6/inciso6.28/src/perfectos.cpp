#include <iostream>
#include "Perfectos.h"

bool esPerfecto(int numero) {
    int suma = 0;

    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    return suma == numero;
}

void encontrarPerfectos(int limite) {
    for (int num = 1; num <= limite; ++num) {
        if (esPerfecto(num)) {
            std::cout << num << " = ";
            int suma = 0;
            for (int i = 1; i <= num / 2; ++i) {
                if (num % i == 0) {
                    std::cout << i;
                    suma += i;
                    if (suma != num) std::cout << " + ";
                }
            }
            std::cout << std::endl;
        }
    }
}
