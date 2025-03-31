#include <iostream>
#include "DistanciaPuntos.h"

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Ingrese las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;

    cout << "La distancia entre (" << x1 << ", " << y1 << ") y ("
              << x2 << ", " << y2 << ") es " << distancia(x1, y1, x2, y2) << endl;

    return 0;
}
