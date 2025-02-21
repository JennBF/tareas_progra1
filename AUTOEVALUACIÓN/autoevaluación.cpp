#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

const int numEquipos = 6;
const int maxPuntos = 10;

void generarResultados(int tabla[numEquipos][numEquipos]);
void calcularEstadisticas(int tabla[numEquipos][numEquipos], int partidos[numEquipos][5], double porcentajes[numEquipos][3]);
void mostrarTabla(string equipos[numEquipos], int partidos[numEquipos][5], double porcentajes[numEquipos][3]);
int obtenerAleatorio(int min, int max);

int main() {
    srand(time(0));
    string equipos[numEquipos];
    int tabla[numEquipos][numEquipos] = {0};  // Para guardar los resultados de los partidos
    int partidos[numEquipos][5] = {0};  // [0] Jugados, [1] Ganados, [2] Empatados, [3] Perdidos, [4] Puntos
    double porcentajes[numEquipos][3] = {0.0};  // [0] % Victorias, [1] % Empates, [2] % Derrotas

    char opcion;

    cout << "Ingrese los nombres de los 6 equipos:\n";
    for (int i = 0; i < numEquipos; i++) {
        cout << "Equipo " << i + 1 << ": ";
        cin >> equipos[i];
    }

    do {
        generarResultados(tabla);
        calcularEstadisticas(tabla, partidos, porcentajes);
        mostrarTabla(equipos, partidos, porcentajes);

        cout << "\nDesea generar otro campeonato? (s/n): ";
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
                tabla[i][j] = golesLocal;   // Partido de ida (i contra j)
                tabla[j][i] = golesVisita;  // Partido de vuelta (j contra i)
            }
        }
    }
}

void calcularEstadisticas(int tabla[numEquipos][numEquipos], int partidos[numEquipos][5], double porcentajes[numEquipos][3]) {
    for (int i = 0; i < numEquipos; i++) {
        partidos[i][0] = 0; // Jugados
        partidos[i][1] = 0; // Ganados
        partidos[i][2] = 0; // Empatados
        partidos[i][3] = 0; // Perdidos
        partidos[i][4] = 0; // Puntos

        for (int j = 0; j < numEquipos; j++) {
            if (i != j) {
                partidos[i][0] += 2;  // Cada equipo juega 2 partidos (ida y vuelta)

                if (tabla[i][j] > tabla[j][i]) {  // Si el equipo i gana en casa
                    partidos[i][1] += 1;  // Gana 1 partido
                    partidos[i][4] += 3;  // Gana 3 puntos
                } else if (tabla[i][j] < tabla[j][i]) {  // Si el equipo i pierde en casa
                    partidos[i][3] += 1;  // Pierde 1 partido
                } else {  // Si empatan
                    partidos[i][2] += 1;  // Empata 1 partido
                    partidos[i][4] += 1;  // Gana 1 punto
                }

                if (tabla[j][i] > tabla[i][j]) {  // Si el equipo j gana en casa
                    partidos[j][1] += 1;
                    partidos[j][4] += 3;
                } else if (tabla[j][i] < tabla[i][j]) {  // Si el equipo j pierde en casa
                    partidos[j][3] += 1;
                } else {  // Si empatan
                    partidos[j][2] += 1;
                    partidos[j][4] += 1;
                }
            }
        }
        // Calcular porcentajes
        porcentajes[i][0] = (partidos[i][1] / static_cast<double>(partidos[i][0])) * 100; // % Victorias
        porcentajes[i][1] = (partidos[i][2] / static_cast<double>(partidos[i][0])) * 100; // % Empates
        porcentajes[i][2] = (partidos[i][3] / static_cast<double>(partidos[i][0])) * 100; // % Derrotas
    }
}

void mostrarTabla(string equipos[numEquipos], int partidos[numEquipos][5], double porcentajes[numEquipos][3]) {
    cout << "\n======================================== TABLA DE POSICIONES =========================================\n";
    cout << "|   Equipo   | Jugados | Ganados | Empatados | Perdidos | Puntos | % Victorias | % Empates | % Derrotas |\n";
    cout << "-------------------------------------------------------------------------------------------------------\n";

    int mejorEquipo = 0, peorEquipo = 0;
    for (int i = 0; i < numEquipos; i++) {
        cout << "| " << setw(10) << left << equipos[i]
             << "| " << setw(7) << partidos[i][0]
             << "| " << setw(7) << partidos[i][1]
             << "| " << setw(9) << partidos[i][2]
             << "| " << setw(8) << partidos[i][3]
             << "| " << setw(7) << partidos[i][4]
             << "| " << setw(11) << fixed << setprecision(2) << porcentajes[i][0]
             << "| " << setw(10) << fixed << setprecision(2) << porcentajes[i][1]
             << "| " << setw(10) << fixed << setprecision(2) << porcentajes[i][2]
             << "|\n";

        cout << "---------------------------------------------------------------------------------------------------------\n";
        if (partidos[i][4] > partidos[mejorEquipo][4]) mejorEquipo = i;
        if (partidos[i][4] < partidos[peorEquipo][4]) peorEquipo = i;
    }

    cout << "\nEl equipo campeón es: " << equipos[mejorEquipo] << "\n";
    cout << "El equipo que desciende es: " << equipos[peorEquipo] << "\n";
}

int obtenerAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}
