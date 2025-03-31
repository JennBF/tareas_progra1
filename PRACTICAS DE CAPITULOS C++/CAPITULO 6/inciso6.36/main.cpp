#include <iostream>
#include "Potencia.h"

using namespace std;

int main() {
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if (exponente < 1) {
        cout << "El exponente debe ser mayor o igual a 1." << endl;
    } else {
        cout << base << "^" << exponente << " = " << potencia(base, exponente) << endl;
    }

    return 0;
}
