#include <iostream>
#include "Multiples.h"

using namespace std;

int main() {
    int num1, num2;
    char opcion;

    do {
        cout << "Ingrese dos numeros enteros: ";
        cin >> num1 >> num2;

        if (multiples(num1, num2)) {
            cout << num2 << " es multiplo de " << num1 << endl;
        } else {
            cout << num2 << " NO es multiplo de " << num1 << endl;
        }

        cout << "¿Desea ingresar otro par de numeros? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
