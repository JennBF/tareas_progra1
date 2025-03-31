#include <iostream>
#include "PuntosCalidad.h"

using namespace std;

int main() {
    int promedio;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> promedio;

    int puntos = puntosCalidad(promedio);

    cout << "Puntos de calidad: " << puntos << endl;

    return 0;
}
