//DOCUMENTACION DEL JUEGO BUSCA MINAS, PROPORCIONADO POR EL INGENIERO ESDUARDO DEL ÁGUILA EN MARZO 2025
//PARTE DEL COORDINADOR, JENNIFER BARRIOS EQUIPO 3, PORTALES PROGRAMACION 1 INGENIERIA EN SISTEMAS.
//UNIVERSIDAD MARIANO GÁLVEZ DE GUATEMALA.
//ARCHIVO DE IMPLEMENTACIÓN DE LA CLASE JUEGO.

#include "Juego.h"
#include <fstream>
#include <unistd.h>

/// Genera un número aleatorio dentro de un rango definido.
/// int minimo: El valor mínimo del rango.
/// int maximo: El valor máximo del rango.
/// retorna un número aleatorio entre minimo y maximo.
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

/// Genera una fila aleatoria dentro de las dimensiones del tablero.
/// return un número aleatorio que representa una fila dentro del rango de filas del tablero.
int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1); //Se resta 1 al valor obtenido.
                                                                            //Esto se hace porque los índices de las filas en arreglos (o en estructuras similares) comienzan en 0,
                                                                            //por lo que si getAlturaTablero() devuelve, por ejemplo, 10, los índices válidos van de 0 a 9
}

/// Genera una columna aleatoria dentro de las dimensiones del tablero.
/// retorna un número aleatorio que representa una columna dentro del rango de columnas del tablero.
int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

/// Constructor de la clase `Juego`. Inicializa el juego con un tablero y una cantidad de minas.
/// tablero: El objeto `Tablero` sobre el que se jugará.
/// int cantidadMinas: La cantidad de minas que se deben colocar en el tablero.
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->colocarMinasAleatoriamente();
}

/// Coloca las minas aleatoriamente en el tablero.
/// Este método coloca minas en el tablero hasta que se alcanza la cantidad especificada en `cantidadMinas`.
void Juego::colocarMinasAleatoriamente()
{
    int x, y, minasColocadas = 0;

    // Coloca minas hasta que el número de minas colocadas sea igual a la cantidad especificada.
    while (minasColocadas < this->cantidadMinas)
    {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

/// Solicita al jugador que ingrese un número de fila para jugar.
/// retorna el número de fila ingresado por el jugador (ajustado para que sea 0-indexado).
int Juego::solicitarFilaUsuario()
{
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1; // Se ajusta para ser 0-indexado .
}

/// Solicita al jugador que ingrese un número de columna para jugar.
/// @return el número de columna ingresado por el jugador (ajustado para que sea 0-indexado).
