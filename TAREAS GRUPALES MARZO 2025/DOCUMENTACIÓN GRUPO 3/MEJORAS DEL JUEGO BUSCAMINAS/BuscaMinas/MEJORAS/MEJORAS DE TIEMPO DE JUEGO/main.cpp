#include <iostream>   // Biblioteca est�ndar para entrada y salida
#include <unistd.h>   // Biblioteca para getpid() (Unix/Linux)
#include "Juego.h"    // Archivo de encabezado que contiene la clase Juego
#include "Config.h"   // Archivo de encabezado que contiene la clase Config

using namespace std;

int main()
{
    // Definici�n de constantes para la configuraci�n inicial del juego
    const int FILASTABLERO = 5;       // N�mero de filas del tablero
    const int COLUMNASTABLERO = 5;    // N�mero de columnas del tablero
    const int MINASENTABLERO = 3;     // N�mero de minas en el tablero
    const bool MODODESARROLLADOR = true; // Activa el modo desarrollador (muestra las minas)
    const int VIDASTABLERO = 3;       // N�mero de vidas del jugador

    // Se crea un objeto de la clase Config para almacenar la configuraci�n del juego
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

    // Se inicializa el juego con un tablero basado en la configuraci�n establecida
    Juego juego(Tablero(configuracionJuego.getfilasTablero(),
                        configuracionJuego.getcolumnasTablero(),
                        configuracionJuego.getmodoDesarrolladorTablero()),
                configuracionJuego.getminasTablero());

    // Inicializa la semilla de n�meros aleatorios usando el ID del proceso
    srand(getpid());

    int opciones;        // Variable para almacenar la opci�n elegida en el men�
    bool repetir = true; // Variable de control para mantener el men� activo

    // Bucle que mantiene activo el men� del juego hasta que el usuario decida salir
    do
    {
        system("cls"); // Limpia la pantalla (en Windows)

        // Muestra el men� principal del juego
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------" << endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones; // Captura la opci�n ingresada por el usuario

        // Estructura switch para manejar las opciones del men�
        switch (opciones)
        {
            case 1:
                // Llama al men� de configuraci�n para modificar los par�metros del juego
                configuracionJuego.menuConfiguracion();
                break;

            case 2:
            {
                // Se crea un objeto Juego temporal con la configuraci�n actualizada
                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(),
                                            configuracionJuego.getcolumnasTablero(),
                                            configuracionJuego.getmodoDesarrolladorTablero()),
                                    configuracionJuego.getminasTablero());
                // Se inicia el juego
                juegoTemporal.iniciar();

                // Pausa la ejecuci�n para que el usuario pueda ver el resultado antes de continuar
                system("pause");
                break;
            }

            case 3:
                // Cambia la variable de control para salir del bucle y terminar el programa
                repetir = false;
                break;
        }
    } while (repetir); // El bucle se repite mientras 'repetir' sea verdadero

    system("cls"); // Limpia la pantalla antes de salir del programa
    return 0;      // Finaliza la ejecuci�n correctamente
}
