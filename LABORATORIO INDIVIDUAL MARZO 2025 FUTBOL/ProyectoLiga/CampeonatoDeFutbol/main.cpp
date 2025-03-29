#include "Campeonato.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> nombresEquipos(6);
    char opcion;

    do {
        // Pedir los nombres de los equipos al inicio de cada nuevo campeonato
        cout << "Ingrese los nombres de los 6 equipos:\n";
        for (int i = 0; i < 6; i++) {
           cout << "Equipo " << i + 1 << ": ";
           cin >> nombresEquipos[i];
        }

        // Crear un objeto Campeonato con los nombres de los equipos
        Campeonato campeonato(nombresEquipos);
        campeonato.generarResultados();
        campeonato.mostrarTablaResultados();
        campeonato.mostrarTablaPosiciones();

        cout << "\n¿Desea generar otro campeonato? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
