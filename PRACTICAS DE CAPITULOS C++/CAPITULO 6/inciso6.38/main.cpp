#include <iostream>
#include "Hanoi.h"

using namespace std;

int main() {
    int discos;

    cout << "Ingrese el número de discos: ";
    cin >> discos;

    cout << "Secuencia de movimientos para resolver Torres de Hanoi con " << discos << " discos:\n";
    torresDeHanoi(discos, 1, 3, 2);

    return 0;
}
