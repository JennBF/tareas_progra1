#include "distanciapuntos.h"
#include <iostream>
#include <cmath>

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
