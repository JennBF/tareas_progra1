#include <iostream>
#include "SepararDigitos.h"

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entre 1 y 32767: ";
    cin >> numero;

    cout << "Número separado en dígitos: ";
    imprimirDigitos(numero);

    return 0;
}
