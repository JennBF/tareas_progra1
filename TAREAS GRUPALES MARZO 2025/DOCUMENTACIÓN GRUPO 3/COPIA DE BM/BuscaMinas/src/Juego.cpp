//DOCUMENTACION DEL JUEGO BUSCA MINAS, PROPORCIONADO POR EL INGENIERO ESDUARDO DEL ÁGUILA EN MARZO 2025
//PARTE DEL COORDINADOR, JENNIFER BARRIOS EQUIPO 3, PORTALES PROGRAMACION 1 INGENIERIA EN SISTEMAS.
#include "Juego.h"
#include <iostream>
#include <fstream>
#include <ctime> // Para medir el tiempo
#include <iomanip> // Para formatear la salida

int Juego::aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int Juego::filaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

int Juego::columnaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

Juego::Juego(Tablero tablero, int cantidadMinas, int vidas, std::string nombreJugador)
    : tablero(tablero), cantidadMinas(cantidadMinas), vidasTablero(vidas), jugador(nombreJugador) { // Inicializamos el jugador
    this->colocarMinasAleatoriamente();
}

void Juego::colocarMinasAleatoriamente() {
    int x, y, minasColocadas = 0;
    while (minasColocadas < this->cantidadMinas) {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();
        if (this->tablero.colocarMina(x, y)) {
            minasColocadas++;
        }
    }
}

int Juego::solicitarFilaUsuario() {
    int fila = 0;
    std::cout << "Ingresa la FILA en la que desea jugar: ";
    std::cin >> fila;
    return fila - 1;
}

int Juego::solicitarColumnaUsuario() {
    int columna = 0;
    std::cout << "Ingresa la COLUMNA en la que desea jugar: ";
    std::cin >> columna;
    return columna - 1;
}

bool Juego::jugadorGana() {
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
    return (conteo == 0);
}

void Juego::iniciar() {
    int fila, columna;

    this->tiempoInicio = time(nullptr); // Iniciar el tiempo al comenzar el juego

    int vidasRestantes = this->vidasTablero;

    while (vidasRestantes > 0) {
        this->tablero.imprimir();
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();

        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        if (!respuestaAUsuario) {
            vidasRestantes--;
            std::cout << "\n\033[31m¡Has pisado una mina!\033[0m Vidas restantes: " << vidasRestantes << "\n";

            if (vidasRestantes == 0) {
                time_t tiempoFinal = time(nullptr);
                double tiempoTotal = difftime(tiempoFinal, this->tiempoInicio);

                std::cout << "\033[31mPerdiste el Juego\033[0m\n";
                std::cout << "Tiempo jugado: " << std::fixed << std::setprecision(2) << tiempoTotal << " segundos.\n";

                this->tablero.setModoDesarrollador(true);
                this->tablero.imprimir();
                break;
            }
        }



        // Si el jugador gana, mostrar el resultado
        if (this->jugadorGana()) {
            time_t tiempoFinal = time(nullptr);
            double tiempoTotal = difftime(tiempoFinal, this->tiempoInicio);

            std::cout << "\033[32m¡Ganaste el Juego en "
                      << std::fixed << std::setprecision(2)
                      << tiempoTotal << " segundos!\033[0m\n";
            std::cout << "Jugador: " << jugador.getNombre() << "\n";
            std::cout << "Puntaje final: " << jugador.getPuntaje() << "\n";
            std::cout << "Minas encontradas: " << this->minasEncontradas << "\n";

            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}
