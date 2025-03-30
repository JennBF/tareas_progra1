#include <iostream>
#include "Potencia.h"

using namespace std;

int main() {
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Llamada a la función
    int resultado = enteroPotencia(base, exponente);

    // Muestra el resultado
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;
    cout << base << "^" << exponente << " = " << resultado << endl;
    return 0;
}
