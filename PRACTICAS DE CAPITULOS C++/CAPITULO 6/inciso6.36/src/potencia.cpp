#include "Potencia.h"

int potencia(int base, int exponente) {
    if (exponente == 1)  // Caso base
        return base;
    return base * potencia(base, exponente - 1);  // Llamada recursiva
}
