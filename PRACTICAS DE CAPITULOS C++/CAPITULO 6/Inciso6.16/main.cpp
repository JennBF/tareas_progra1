#include <iostream>
#include "NumerosAleatorios.h"

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla para n�meros aleatorios

    // Generaci�n de n�meros en diferentes rangos
    cout << "N�mero entre 1 y 2 (1<= n<=2): " << generarNumero(1, 2) << endl;
    cout << "N�mero entre 1 y 100(1<=n<=100): " << generarNumero(1, 100) << endl;
    cout << "N�mero entre 0 y 9 (0<=n<=9): " << generarNumero(0, 9) << endl;
    cout << "N�mero entre 1000 y 1112 (1000<=n<=1112): " << generarNumero(1000, 1112) << endl;
    cout << "N�mero entre -1 y 1(-1<=n<= 1): " << generarNumero(-1, 1) << endl;
    cout << "N�mero entre -3 y 11(-3<=n<=11): " << generarNumero(-3, 11) << endl;

    return 0;
}
