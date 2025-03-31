#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include "Adivina.h"

using namespace std;

void jugarAdivina() {
    srand(time(0));  // Inicializa la semilla aleatoria
    int numeroSecreto = 1 + rand() % 1000;
    int intento = 0;

    cout << "Adivina el número (entre 1 y 1000): ";

    while (true) {
        cin >> intento;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intentalo de nuevo: ";
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intentalo de nuevo: ";
        } else {
            cout << "¡Felicidades! Has adivinado el numero.\n";
            break;
        }
    }
}
