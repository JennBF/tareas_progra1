#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
using namespace std;

class Equipo
{
    public:
        Equipo(string nombre);

        void actualizarEstadisticas (int golesAFavor, int golesEnContra);

        string getNombre() const;
        int getPuntos() const;
        void mostrarEstadisticas() const;

    private:

        string nombre;
        int jugados;
        int ganados;
        int empatados;
        int perdidos;
        int puntos;

};

#endif // EQUIPO_H
