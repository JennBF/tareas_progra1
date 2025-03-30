#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int tirarDados();

int main()
{
    enum Estado {CONTINUAR, GANO, PERDIO};

    srand(static_cast<unsigned int>(time(0)));

    unsigned int miPunto = 0;
    Estado estadoJuego = CONTINUAR;

    unsigned int SumaDeDados = tirarDados();

    switch (SumaDeDados)
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
            miPunto = SumaDeDados;
            cout << "El punto es: " << miPunto << endl; // Corregido mi punto -> miPunto
            break;
    }

    while (estadoJuego == CONTINUAR)
    {
        SumaDeDados = tirarDados();

        if (SumaDeDados == miPunto)
            estadoJuego = GANO;
        else if (SumaDeDados == 7)
            estadoJuego = PERDIO;
    }

    if (estadoJuego == GANO)
        cout << "El jugador gana" << endl;
    else
        cout << "El jugador pierde" << endl;

    return 0;
}

unsigned int tirarDados()
{
    unsigned int dado1 = 1 + rand() % 6;
    unsigned int dado2 = 1 + rand() % 6;

    unsigned int suma = dado1 + dado2;

    cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;
    return suma;
}
