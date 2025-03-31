#include <iostream>
using namespace std;

int factorial(int n, int nivel = 0) {
    // Imprimir sangría según el nivel de recursión
    for (int i = 0; i < nivel; ++i)
        cout << "  ";

    cout << "Entrando a factorial(" << n << ")" << endl;

    // Caso base
    if (n <= 1) {
        for (int i = 0; i < nivel; ++i)
            cout << "  ";
        cout << "Retornando 1 desde factorial(" << n << ")" << endl;
        return 1;
    }

    // Llamada recursiva
    int resultado = n * factorial(n - 1, nivel + 1);

    for (int i = 0; i < nivel; ++i)
        cout << "  ";
    cout << "Retornando " << resultado << " desde factorial(" << n << ")" << endl;

    return resultado;
}

int main() {
    int numero;
    cout << "Ingrese un número para calcular su factorial: ";
    cin >> numero;

    int resultado = factorial(numero);
    cout << "Factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
