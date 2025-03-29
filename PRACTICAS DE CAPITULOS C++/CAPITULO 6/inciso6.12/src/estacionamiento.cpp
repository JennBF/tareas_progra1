#include "Estacionamiento.h"
#include <iostream>
#include <iomanip>

//JENNIFER BARRIOS UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA
// MARZO 2025
// CAPITULO 6 INCISO 6.12

using namespace std;

Estacionamiento::Estacionamiento(int numeroAuto, double horas, double tarifa)
{
    this->numeroAuto = numeroAuto;
    this->horas = horas;
    this->tarifa = 0.0;
    calcularTarifa();
}

void Estacionamiento::calcularTarifa() {
    if (horas <= 3.0) {
        tarifa = 2.0;
    } else {
        tarifa = 2.0 + (horas - 3.0) * 0.50; //CALCULA LAS HORAS PASADAS DE 3, PARA COBRAR UNA TARIFA DE 0.50 ADICIONALES.
        if (tarifa > 10.0) { //Si la tarifa excede de 10.00 el valor será 10.00
            tarifa = 10.0;
        }
    }
}

void Estacionamiento::mostrarDatos() const {
    cout << setw(15) << numeroAuto // fija el ancho mínimo de caracteres que ocupará un dato al imprimirse.
         << setw(10) << fixed << setprecision(1) << horas //define cuántos dígitos totales se muestran en un número decimal.
         << setw(10) << fixed << setprecision(2) << tarifa << endl; //Con fixed, setprecision(n) fija los decimales exactos después del punto.
}

double Estacionamiento::obtenerTarifa() const {
    return tarifa;
}

double Estacionamiento::obtenerHoras() const {
    return horas;
}
