#ifndef CONFIG_H
#define CONFIG_H

#include <vector>
#include "Jugador.h"  // Aseg�rate de incluir Jugador.h

class Config
{
public:
    // Constructor
    Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

    // M�todos para obtener y establecer las configuraciones
    int getfilasTablero();
    void setfilasTablero(int filasTablero);
    int getcolumnasTablero();
    void setcolumnasTablero(int columnasTablero);
    int getminasTablero();
    void setminasTablero(int minasTablero);
    bool getmodoDesarrolladorTablero();
    void setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
    int getvidasTablero();
    void setvidasTablero(int vidasTablero);

    // M�todos para gestionar la configuraci�n de jugadores
    void menuConfiguracion(std::vector<Jugador>& jugadores);
    void mostrarJugadores(const std::vector<Jugador>& jugadores);

private:
    // Atributos de configuraci�n del tablero
    int filasTablero;
    int columnasTablero;
    int minasTablero;
    bool modoDesarrolladorTablero;
    int vidasTablero;
};

#endif // CONFIG_
