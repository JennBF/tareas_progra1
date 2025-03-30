#include <iostream>
#include "Cuadrado.h"

using namespace std;

void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) { // Filas
        for (int j = 0; j < lado; j++) { // Columnas
            cout << "* ";
        }
        cout << endl;
    }
}
