#include <iostream>
#include "SepararDigitos.h"

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un n�mero entre 1 y 32767: ";
    cin >> numero;

    cout << "N�mero separado en d�gitos: ";
    imprimirDigitos(numero);

    return 0;
}
