#include "PuntosCalidad.h"

int puntosCalidad(int promedio) {
    if (promedio >= 90 && promedio <= 100) return 4;
    if (promedio >= 80 && promedio <= 89) return 3;
    if (promedio >= 70 && promedio <= 79) return 2;
    if (promedio >= 60 && promedio <= 69) return 1;
    return 0;
}
