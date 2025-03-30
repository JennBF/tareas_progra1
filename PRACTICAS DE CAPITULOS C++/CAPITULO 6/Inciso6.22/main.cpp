#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main() {
    int lado;

    cout << "Ingrese el tamaño del lado del cuadrado: ";
    cin >> lado;

    dibujarCuadrado(lado);

    return 0;
}
