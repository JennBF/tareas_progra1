#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

const int numEquipos = 6;
const int maxPuntos = 10;

void generarResultados(int tabla[numEquipos][numEquipos]);
void calcularEstadisticas(int tabla[numEquipos][numEquipos], int partidos[numEquipos][5]);
void mostrarTabla(string equipos[numEquipos], int partidos[numEquipos][5]);
void mostrarTablaResultados(string equipos[], int resultados[numEquipos][numEquipos]);
int obtenerAleatorio(int min, int max);

int main() {
    srand(time(0));
    string equipos[numEquipos];
    int tabla[numEquipos][numEquipos] = {0}; // Para guardar los resultados de los partidos
    int partidos[numEquipos][5] = {0}; // [0] Jugados, [1] Ganados, [2] Empatados, [3] Perdidos, [4] Puntos
    char opcion;

    cout << "Ingrese los nombres de los 6 equipos:\n";
    for (int i = 0; i < numEquipos; i++) {
        cout << "Equipo " << i + 1 << ": ";
        cin >> equipos[i];
    }

    do {
        generarResultados(tabla);
        calcularEstadisticas(tabla, partidos);
        mostrarTabla(equipos, partidos);
        mostrarTablaResultados(equipos, tabla);
        cout << "\n¿Desea generar otro campeonato? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}

void generarResultados(int tabla[numEquipos][numEquipos]) {
    for (int i = 0; i < numEquipos; i++) {
        for (int j = 0; j < numEquipos; j++) {
            if (i != j) {
                int golesLocal = obtenerAleatorio(0, maxPuntos);
                int golesVisita = obtenerAleatorio(0, maxPuntos);
                tabla[i][j] = golesLocal; // Partido de ida (i contra j)
                tabla[j][i] = golesVisita; // Partido de vuelta (j contra i)
            }
        }
    }
}

void calcularEstadisticas(int tabla[numEquipos][numEquipos], int partidos[numEquipos][5]) {
    for (int i = 0; i < numEquipos; i++) {
        partidos[i][0] = 0; // Jugados
        partidos[i][1] = 0; // Ganados
        partidos[i][2] = 0; // Empatados
        partidos[i][3] = 0; // Perdidos
        partidos[i][4] = 0; // Puntos

        for (int j = 0; j < numEquipos; j++) {
            if (i != j) {
                partidos[i][0] += 2; // Cada equipo juega 2 partido (ida y vuelta)
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

void mostrarTablaResultados(string equipos[], int resultados[numEquipos][numEquipos]) {
    cout << "Tabla de RESULTADOS de los Partidos:" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "| Equipo" << setw(15) << "| Equipo" << setw(20) << "| Resultado |" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < numEquipos; i++) {
        for (int j = i + 1; j < numEquipos; j++) {
            cout << left << setw(15) << "| " + equipos[i] << setw(15) << "| " + equipos[j] << setw(20);
            if (resultados[i][j] == resultados[j][i]) {
                cout << "| Empate |" << endl;
            } else {
                cout << "| " + to_string(resultados[i][j]) + "-" + to_string(resultados[j][i]) + " |" << endl;
            }
        }
    }
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
}

void mostrarTabla(string equipos[numEquipos], int partidos[numEquipos][5]) {
    cout << "\n=============================== TABLA DE POSICIONES ================================\n";
    cout << "| Equipo | Jugados | Ganados | Empatados | Perdidos | Puntos |\n";
    cout << "------------------------------------------------------------------------\n";
    int mejorEquipo = 0, peorEquipo = 0;

    for (int i = 0; i < numEquipos; i++) {
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

int obtenerAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}
