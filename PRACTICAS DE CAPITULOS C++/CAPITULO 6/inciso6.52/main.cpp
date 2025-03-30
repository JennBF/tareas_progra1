#include <iostream>
using namespace std;

// Plantilla de función para encontrar el máximo de dos valores
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Prueba con enteros
    int int1 = 10, int2 = 25;
    cout << "Maximo entre " << int1 << " y " << int2 << " es: " << maximo(int1, int2) << endl;

    // Prueba con decimales
    double float1 = 5.5, float2 = 2.3;
    cout << "Maximo entre " << float1 << " y " << float2 << " es: " << maximo(float1, float2) << endl;

    // Prueba con caracteres (se comparan según su valor ASCII)
    char char1 = 'A', char2 = 'Z';
    cout << "Maximo entre '" << char1 << "' y '" << char2 << "' es: '" << maximo(char1, char2) << "'" << endl;

    return 0;
}
