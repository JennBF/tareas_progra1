#include "redondeo.h"
#include <cmath>

float redondearAEntero(float numero) {
    return floor(numero + 0.5);
}

float redondearADecimas(float numero) {
    return floor(numero * 10 + 0.5) / 10;
}

float redondearACentesimas(float numero) {
    return floor(numero * 100 + 0.5) / 100;
}

float redondearAMilesimas(float numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}
