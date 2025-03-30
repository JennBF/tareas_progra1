#include <iostream>
#include "redondeo.h"

using namespace std;

int main() {
    float numero;
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    cout << "N�mero original: " << numero << std::endl;
    cout << "Redondeado a entero: " << ::redondearAEntero(numero) << std::endl;
    cout << "Redondeado a d�cimas: " << ::redondearADecimas(numero) << std::endl;
    cout << "Redondeado a cent�simas: " << ::redondearACentesimas(numero) << std::endl;
    cout << "Redondeado a mil�simas: " << ::redondearAMilesimas(numero) << std::endl;

    return 0;
}
