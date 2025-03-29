#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"


//DATO QUEMADO. SE DEBE EVITAR.
//COSAS A MEJORAR EN EL JUEGO, MARCADOR (SCORE), VIDAS, IDENTIFICACION,
//HACER UNA CLASE PERSONA QUE HEREDE A UN JUGADOR. SCORE, TIEMPO, NOMBRE Y PARTIDAS.
//VIDAS (CONTEO)*, MARCADOR (SCORE) IDENTIFICACION, TIEMPO JUEGO.
//LIMITES, LIMITE DEL TAMAÑO DEL TABLERO.
//una validacion es una funcion o metodo que me permite evitar ciertos escenarios o controlarlos. Por ejemplo dividir dentro de 0.

using namespace std;

int main()
{
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3; //se debe mejorar esto porque no funciona.
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    srand(getpid());
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }
        case 3: repetir = false;
                break;
        }
    } while (repetir);
    system("cls");
    return 0;
}
