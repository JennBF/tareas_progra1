#include "equipo.h"
#include <iostream>
#include <iomanip>

using namespace std;

Equipo::Equipo(string nombre) : nombre(nombre),jugados(0), ganados(0), empatados(0), perdidos(0), puntos(0) {}

void Equipo::actualizarEstadisticas(int golesAFavor, int golesEnContra) {

    jugados += 1;

    if (golesAFavor>golesEnContra){
        ganados += 1;
        puntos += 3;
    }
    else if (golesAFavor == golesEnContra){
        empatados += 1;
        puntos+= 1;
    }
    else{
        perdidos+=1;
    }
}

string Equipo::getNombre() const{
    return nombre;
}

int Equipo::getPuntos() const{
    return puntos;
}

void Equipo::mostrarEstadisticas() const{

    cout << "| " << setw(10) << nombre
              << " | " << setw(7) << jugados
              << " | " << setw(7) << ganados
              << " | " << setw(9) << empatados
              << " | " << setw(8) << perdidos
              << " | " << setw(7) << puntos
              << " |\n";
}
