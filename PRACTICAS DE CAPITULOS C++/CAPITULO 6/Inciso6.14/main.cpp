#include <iostream>
#include "redondeo.h"

using namespace std;

int main() {
    float numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Número original: " << numero << std::endl;
    cout << "Redondeado a entero: " << ::redondearAEntero(numero) << std::endl;
    cout << "Redondeado a décimas: " << ::redondearADecimas(numero) << std::endl;
    cout << "Redondeado a centésimas: " << ::redondearACentesimas(numero) << std::endl;
    cout << "Redondeado a milésimas: " << ::redondearAMilesimas(numero) << std::endl;

    return 0;
}
