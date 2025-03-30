#include <iostream>
#include "SepararDigitos.h"

using namespace std;

int obtenerCociente(int a, int b) {
    return a / b;
}

int obtenerResiduo(int a, int b) {
    return a % b;
}

void imprimirDigitos(int numero) {
    if (numero < 1 || numero > 32767) {
        cout << "Número fuera de rango (1-32767)" << endl;
        return;
    }

    int divisor = 1;
    while (numero / divisor >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int digito = obtenerCociente(numero, divisor);
        cout << digito << "  ";
        numero = obtenerResiduo(numero, divisor);
        divisor /= 10;
    }
    cout << endl;
}
