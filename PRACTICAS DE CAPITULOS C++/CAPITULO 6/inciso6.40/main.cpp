#include <iostream>
using namespace std;

int factorial(int n, int nivel = 0) {
    // Imprimir sangr�a seg�n el nivel de recursi�n
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
    cout << "Ingrese un n�mero para calcular su factorial: ";
    cin >> numero;

    int resultado = factorial(numero);
    cout << "Factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
