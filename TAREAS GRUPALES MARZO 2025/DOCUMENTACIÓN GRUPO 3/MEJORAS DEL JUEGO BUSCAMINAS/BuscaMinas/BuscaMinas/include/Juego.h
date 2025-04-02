//DOCUMENTACI�N DEL ARCHIVO ENCABEZADO, TEMA: MODULARIDAD, EN LA PROGRAMACION ORIENTADA A OBJETOS.
//PARTE DEL COORDINADOR: JENNIFER BARRIOS.
//C�DIGO PROPORCIONADO POR EL INGENIERO: ESDUARDO DEL AGUILA

#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
/// Clase que representa el juego de minas.
/// Se encarga de gestionar la l�gica principal del juego, incluyendo la colocaci�n de minas,
/// la interacci�n con el usuario y la verificaci�n de condiciones de victoria o derrota.
class Juego
{
private:
	Tablero tablero; /// Objeto que representa el tablero del juego.
	int cantidadMinas; /// N�mero total de minas que se colocar�n en el tablero.

	/// Genera un n�mero aleatorio dentro de un rango espec�fico.
	/// int minimo: Valor m�nimo del rango.
	/// int maximo: Valor m�ximo del rango.
	/// Un n�mero aleatorio entre `minimo` y `maximo`.
	int aleatorio_en_rango(int minimo, int maximo);

	/// Obtiene una fila aleatoria dentro del rango del tablero.
	/// Retorna un �ndice de fila aleatorio dentro de los l�mites del tablero.
	int filaAleatoria();

	/// Obtiene una columna aleatoria dentro del rango del tablero.
	/// Retorna un �ndice de columna aleatorio dentro de los l�mites del tablero.
	int columnaAleatoria();

	int marcador();

public:
	/// Constructor de la clase `Juego`.
	/// tablero: El objeto `Tablero` sobre el que se jugar�.
	/// int cantidadMinas: La cantidad de minas que se deben colocar en el tablero.
	Juego(Tablero tablero, int cantidadMinas);

	/// Coloca minas aleatoriamente en el tablero hasta alcanzar la cantidad especificada.
	void colocarMinasAleatoriamente();

	/// Solicita al usuario que ingrese un n�mero de fila donde desea jugar.
	/// Retornar� el n�mero de fila ingresado por el usuario (ajustado a �ndice 0).
	int solicitarFilaUsuario();

	/// Solicita al usuario que ingrese un n�mero de columna donde desea jugar.
	/// Retorna el n�mero de columna ingresado por el usuario (ajustado a �ndice 0).
	int solicitarColumnaUsuario();

	/// Verifica si el jugador ha ganado la partida.
	/// `true` si el jugador ha descubierto todas las celdas sin minas, `false` en caso contrario.
	bool jugadorGana();

	/// Inicia el ciclo principal del juego.
	/// Permite que el jugador realice jugadas hasta ganar o perder.
	void iniciar();

	/// Muestra una portada al inicio del juego a partir de un archivo de texto.
	/// nombreArchivo: Nombre del archivo que contiene la portada.
	void dibujarPortada(string nombreArchivo);

	void actualizarMarcador(int puntos);
};

#endif // JUEGO_H
