#include "Estacionamiento.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //CREACION DE OBJETOS DE LA CLASE ESTACIONAMIENTO
    Estacionamiento auto1(1, 1.5, 2.0); //MANDA DATOS DE HORA Y TARIFA.
    Estacionamiento auto2(2, 4, 2.50);
    Estacionamiento auto3(3, 24.00, 15.00);

    double totalHoras = auto1.obtenerHoras() + auto2.obtenerHoras() + auto3.obtenerHoras();
    double totalTarifa = auto1.obtenerTarifa() + auto2.obtenerTarifa() + auto3.obtenerTarifa();

    cout << setw(15) << "Automóvil" << setw(10) << "Horas" << setw(10) << "Tarifa" << endl;
    auto1.mostrarDatos(); //El PUNTO (.) REPRESENTA LA LLAMADA DE LA FUNCIÓN PARA EL OBJETO.
    auto2.mostrarDatos();
    auto3.mostrarDatos();

    cout << setw(15) << "TOTAL" << setw(10) << fixed << setprecision(1) << totalHoras
         << setw(10) << fixed << setprecision(2) << totalTarifa << endl;

    return 0;
}
