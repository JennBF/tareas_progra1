#include <iostream>
#include <cmath>  // Biblioteca de funciones matemáticas
#include <iomanip> // Para formatear la salida

using namespace std;

int main() {
    cout << fixed << setprecision(4); // Formato de salida con 4 decimales

    cout << "------------------------------------\n";
    cout << "Funcion          Entrada   Resultado\n";
    cout << "------------------------------------\n";

    // sqrt - Raíz cuadrada
    for (double x = 0.0; x <= 10.0; x += 2.0)
        cout << "sqrt(x)        " << setw(5) << x << "   " << setw(8) << sqrt(x) << endl;

    // pow - Potencia
    for (int x = 1; x <= 5; x++)
        cout << "pow(2, " << x << ")    " << setw(5) << x << "   " << setw(8) << pow(2, x) << endl;

    // log - Logaritmo natural (base e)
    for (double x = 1.0; x <= 10.0; x += 2.0)
        cout << "log(x)        " << setw(5) << x << "   " << setw(8) << log(x) << endl;

    // log10 - Logaritmo en base 10
    for (double x = 1.0; x <= 100.0; x *= 10)
        cout << "log10(x)      " << setw(5) << x << "   " << setw(8) << log10(x) << endl;

    // sin - Seno
    for (double x = 0.0; x <= M_PI; x += M_PI / 4)
        cout << "sin(x)        " << setw(5) << x << "   " << setw(8) << sin(x) << endl;

    // cos - Coseno
    for (double x = 0.0; x <= M_PI; x += M_PI / 4)
        cout << "cos(x)        " << setw(5) << x << "   " << setw(8) << cos(x) << endl;

    // tan - Tangente
    for (double x = 0.0; x <= M_PI / 2; x += M_PI / 6)
        cout << "tan(x)        " << setw(5) << x << "   " << setw(8) << tan(x) << endl;

    cout << "-------------------------------\n";

    return 0;
}
