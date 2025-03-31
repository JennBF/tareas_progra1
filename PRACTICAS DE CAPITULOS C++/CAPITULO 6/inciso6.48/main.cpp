#include <iostream>
#include <cmath>  // Para usar M_PI
using namespace std;

// Función que calcula el área del círculo
double inclineCirculo(double radio) {
    return M_PI * pow(radio, 2);
}

int main() {
    double radio;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio < 0) {
        cout << "El radio no puede ser negativo." << endl;
    } else {
        double area = inclineCirculo(radio);
        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    }

    return 0;
}
