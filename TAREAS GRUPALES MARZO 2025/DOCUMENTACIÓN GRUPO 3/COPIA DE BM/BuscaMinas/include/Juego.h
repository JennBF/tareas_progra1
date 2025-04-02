#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"  // Para incluir la clase Jugador
#include <ctime> // Para medir el tiempo
#include <iomanip> // Para formatear la salida
#include <string> // Para manejar el nombre del jugador


class Juego {
private:
    Tablero tablero;
    int cantidadMinas;
    int vidasTablero;
    std::string nombreJugador;  // Para identificar al jugador
    time_t tiempoInicio; // Para medir el tiempo
    int puntos; // Para el marcador
    int minasEncontradas; // Para contar las minas encontradas
    Jugador jugador; // Para asociar al jugador con su puntaje

    int aleatorio_en_rango(int minimo, int maximo);
    int filaAleatoria();
    int columnaAleatoria();

public:
    // Constructor con nombreJugador
    Juego(Tablero tablero, int cantidadMinas, int vidas, std::string nombreJugador);

    // M�todos de la versi�n original
    void colocarMinasAleatoriamente();
    int solicitarFilaUsuario();
    int solicitarColumnaUsuario();
    bool jugadorGana();
    void iniciar();

    // M�todos para manejar el marcador
    void incrementarMinasEncontradas();
    int getMinasEncontradas() const;

    // M�todos para actualizar el puntaje
    void incrementarPuntaje();
    int getPuntaje() const;
};

#endif // JUEGO_H
