#include <iostream>
#include <iomanip>
#include <random>    // Librería para números aleatorios modernos
#include <ctime>     // Para obtener la semilla basada en el tiempo

using namespace std;

unsigned int tirarDados(default_random_engine& motor, uniform_int_distribution<unsigned int>& dado);

int main()
{
    enum Estado { CONTINUAR, GANO, PERDIO };

    // Crear motor de números aleatorios con semilla basada en el tiempo actual
    default_random_engine motor(static_cast<unsigned int>(time(0)));

    // Distribución uniforme del 1 al 6 para simular un dado
    uniform_int_distribution<unsigned int> dado(1, 6);

    unsigned int miPunto = 0;
    Estado estadoJuego = CONTINUAR;

    unsigned int sumaDeDados = tirarDados(motor, dado);

    switch (sumaDeDados)
    {
        case 7:
        case 11:
            estadoJuego = GANO;
            break;

        case 2:
        case 3:
        case 12:
            estadoJuego = PERDIO;
            break;

        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDeDados;
            cout << "El punto es: " << miPunto << endl;
            break;
    }

    while (estadoJuego == CONTINUAR)
    {
        sumaDeDados = tirarDados(motor, dado);

        if (sumaDeDados == miPunto)
            estadoJuego = GANO;
        else if (sumaDeDados == 7)
            estadoJuego = PERDIO;
    }

    if (estadoJuego == GANO)
        cout << "El jugador gana" << endl;
    else
        cout << "El jugador pierde" << endl;

    return 0;
}

unsigned int tirarDados(default_random_engine& motor, uniform_int_distribution<unsigned int>& dado)
{
    unsigned int dado1 = dado(motor);
    unsigned int dado2 = dado(motor);

    unsigned int suma = dado1 + dado2;

    cout << "El jugador tiró " << dado1 << " + " << dado2 << " = " << suma << endl;
    return suma;
}
