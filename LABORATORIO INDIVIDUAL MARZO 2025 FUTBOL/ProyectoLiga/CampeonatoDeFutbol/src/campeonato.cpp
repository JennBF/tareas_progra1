#include "Campeonato.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

Campeonato::Campeonato(const vector<string> & equipos) : equipos(equipos) {
    // Inicializar la tabla de resultados a 0
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            tabla[i][j] = 0;
        }
    }

    // Inicializar la matriz de estadísticas
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 5; ++j) {
            partidos[i][j] = 0;
        }
    }
}

void Campeonato::generarResultados() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i != j) {
                int golesLocal = obtenerAleatorio(0, 10);  // Genera goles aleatorios entre 0 y 10
                int golesVisita = obtenerAleatorio(0, 10); // Genera goles aleatorios entre 0 y 10
                tabla[i][j] = golesLocal;
                tabla[j][i] = golesVisita;
            }
        }
    }

    // Calcular estadísticas después de generar los resultados
    calcularEstadisticas();
}

void Campeonato::calcularEstadisticas() {
    for (int i = 0; i < 6; i++) {
        partidos[i][0] = 0; // Jugados
        partidos[i][1] = 0; // Ganados
        partidos[i][2] = 0; // Empatados
        partidos[i][3] = 0; // Perdidos
        partidos[i][4] = 0; // Puntos

        for (int j = 0; j < 6; j++) {
            if (i != j) {
                partidos[i][0] += 2; // Cada equipo juega 2 partidos (ida y vuelta)

                if (tabla[i][j] > tabla[j][i]) { // Si el equipo i gana en casa
                    partidos[i][1] += 1; // Gana 1 partido
                    partidos[i][4] += 3; // Gana 3 puntos
                } else if (tabla[i][j] < tabla[j][i]) { // Si el equipo i pierde en casa
                    partidos[i][3] += 1; // Pierde 1 partido
                } else { // Si empatan
                    partidos[i][2] += 1; // Empata 1 partido
                    partidos[i][4] += 1; // Gana 1 punto
                }
            }
        }
    }
}

void Campeonato::mostrarTablaResultados() const {
    cout << "Tabla de RESULTADOS de los Partidos:" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "| Equipo" << setw(15) << "| Equipo" << setw(20) << "| Resultado |" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            cout << left << setw(15) << "| " + equipos[i] << setw(15) << "| " + equipos[j] << setw(20);
            if (tabla[i][j] == tabla[j][i]) {
                cout << "| Empate |" << endl;
            } else {
                cout << "| " + to_string(tabla[i][j]) + "-" + to_string(tabla[j][i]) + " |" << endl;
            }
        }
    }
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
}

void Campeonato::mostrarTablaPosiciones() const {
    cout << "\n=============================== TABLA DE POSICIONES ================================\n";
    cout << "| Equipo | Jugados | Ganados | Empatados | Perdidos | Puntos |\n";
    cout << "------------------------------------------------------------------------\n";
    int mejorEquipo = 0, peorEquipo = 0;

    for (int i = 0; i < 6; i++) {
        cout << "| " << setw(10) << left << equipos[i] << "| " << setw(7) << partidos[i][0] << "| "
             << setw(7) << partidos[i][1] << "| " << setw(9) << partidos[i][2] << "| "
             << setw(8) << partidos[i][3] << "| " << setw(7) << partidos[i][4] << "|\n";
        cout << "------------------------------------------------------------------------\n";
        if (partidos[i][4] > partidos[mejorEquipo][4]) mejorEquipo = i;
        if (partidos[i][4] < partidos[peorEquipo][4]) peorEquipo = i;
    }

    cout << "\nEl equipo campeon es: " << equipos[mejorEquipo] << "\n";
    cout << "El equipo que desciende es: " << equipos[peorEquipo] << "\n";
}

int Campeonato::obtenerAleatorio(int min, int max) const {
    return min + rand() % (max - min + 1);
}
