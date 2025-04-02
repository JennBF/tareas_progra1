//DOCUMENTACIÓN DEL ARCHIVO ENCABEZADO, TEMA: MODULARIDAD, EN LA PROGRAMACION ORIENTADA A OBJETOS.
//PARTE DEL COORDINADOR: JENNIFER BARRIOS.
//CÓDIGO PROPORCIONADO POR EL INGENIERO: ESDUARDO DEL AGUILA

#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
/// Clase que representa el juego de minas.
/// Se encarga de gestionar la lógica principal del juego, incluyendo la colocación de minas,
/// la interacción con el usuario y la verificación de condiciones de victoria o derrota.
class Juego
{
private:
	Tablero tablero; /// Objeto que representa el tablero del juego.
	int cantidadMinas; /// Número total de minas que se colocarán en el tablero.

	/// Genera un número aleatorio dentro de un rango específico.
	/// int minimo: Valor mínimo del rango.
	/// int maximo: Valor máximo del rango.
	/// Un número aleatorio entre `minimo` y `maximo`.
	int aleatorio_en_rango(int minimo, int maximo);

	/// Obtiene una fila aleatoria dentro del rango del tablero.
	/// Retorna un índice de fila aleatorio dentro de los límites del tablero.
	int filaAleatoria();

	/// Obtiene una columna aleatoria dentro del rango del tablero.
	/// Retorna un índice de columna aleatorio dentro de los límites del tablero.
	int columnaAleatoria();

	int marcador();

public:
	/// Constructor de la clase `Juego`.
	/// tablero: El objeto `Tablero` sobre el que se jugará.
	/// int cantidadMinas: La cantidad de minas que se deben colocar en el tablero.
	Juego(Tablero tablero, int cantidadMinas);

	/// Coloca minas aleatoriamente en el tablero hasta alcanzar la cantidad especificada.
	void colocarMinasAleatoriamente();

	/// Solicita al usuario que ingrese un número de fila donde desea jugar.
	/// Retornará el número de fila ingresado por el usuario (ajustado a índice 0).
	int solicitarFilaUsuario();

	/// Solicita al usuario que ingrese un número de columna donde desea jugar.
	/// Retorna el número de columna ingresado por el usuario (ajustado a índice 0).
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
