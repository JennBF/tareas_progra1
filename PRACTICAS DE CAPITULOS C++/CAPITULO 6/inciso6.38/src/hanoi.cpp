#include <iostream>
#include "Hanoi.h"

using namespace std;

void torresDeHanoi(int n, int origen, int destino, int auxiliar) {
    if (n == 1) {  // Caso base
        cout << origen << " -> " << destino << endl;
        return;
    }

    // Paso 1: Mover n-1 discos a la aguja auxiliar
    torresDeHanoi(n - 1, origen, auxiliar, destino);

    // Paso 2: Mover el disco restante a la aguja destino
    cout << origen << " -> " << destino << endl;

    // Paso 3: Mover los n-1 discos desde la aguja auxiliar a la aguja destino
    torresDeHanoi(n - 1, auxiliar, destino, origen);
}
