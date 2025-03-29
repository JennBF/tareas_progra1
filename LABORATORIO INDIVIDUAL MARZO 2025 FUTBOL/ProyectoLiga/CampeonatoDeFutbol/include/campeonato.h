#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <string>
#include <vector>

using namespace std;

class Campeonato {
public:
    Campeonato(const vector<string> & equipos);
    void generarResultados();
    void mostrarTablaResultados() const;
    void mostrarTablaPosiciones() const;

private:
    int obtenerAleatorio(int min, int max) const;
    void calcularEstadisticas();

    vector<string> equipos;
    int tabla[6][6];  // Resultados de los partidos (6x6 para 6 equipos)
    int partidos[6][5];  // Estadísticas de los equipos: [0] Jugados, [1] Ganados, [2] Empatados, [3] Perdidos, [4] Puntos
};

#endif
