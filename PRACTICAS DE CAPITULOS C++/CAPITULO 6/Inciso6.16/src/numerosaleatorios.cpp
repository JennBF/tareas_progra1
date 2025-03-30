#include "NumerosAleatorios.h"

//El usuario ingresa el entero minimo y el entero maximo a generar
//como la computadora comienza a contar desde 0 se incrementa en 1 para llegar al numero, que el usuario ingrese.
int generarNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}
