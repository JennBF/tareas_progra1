#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

//DOCUMENTADO POR: KARINA ALEJANDRA ARRIAZA ORTIZ

// Constructor
//Inicializan las variables
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero; //Asignan el n�mero de filas para el tablero.
    this->columnasTablero = columnasTablero; //Asignan el n�mero de columnas para el tablero.
    this->minasTablero = minasTablero; //Asignan el n�mero de minas que habran en la partida.
    this->modoDesarrolladorTablero = modoDesarrolladorTablero; //Seleccionar las funciones del modo desarrollador.
    this->vidasTablero = vidasTablero; //Asignar las vidas que se tendran para la partida.
}

//M�todo para el men� de Configuraci�n
void Config::menuConfiguracion()
{
    //Opciones que permitir�n modificar cada variable
    int opciones; // Variable para almacenar la opci�n seleccionada.
    int valorIngresado; //Variable para almacenar el n�mero ingresado.
    bool repetir = true; //Encargado de controlar el bucle del menu.
    do
    {
        system("cls"); //Limpia la consola.
        //Muestre la configuraci�n original.
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        //Ingresan los get de las funciones
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones; //Se lee la opci�n que el usuario selecciona.

        //Se utiliza el If para cuando la opci�n no sea 6, ingresando cualquier otro n�mero del rango.
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado; //Encargado de leer el nuevo valor
        }

        //Encargado de los cambios en la configutaci�n dependiendo de la opci�n seleccionada.
        switch (opciones)
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado); //Actualiza las filas
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado); //Actualiza las columnas
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado); //Actualiza las minas en el tablero.
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado); //Actuaiza el modo del Desarrollador.
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado); //Actualiza las vidas para el juego.
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false; //Sale del bucle.
                break;
        }
        system("pause"); //Pausa del
    } while (repetir); //Repetici�n deo proceso, cada que sea verdadero.
}

//M�todos de getters y modificaci�n de Setters de las variables.
int Config::getfilasTablero()
{
    return this->filasTablero; //Devuelve el n�mero de las filas.
}
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero; //Establece el n�mero para las filas del tablero.
}
int Config::getcolumnasTablero()
{
    return this->columnasTablero; //Devuelve el n�mero de las columnas.
}
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero; //Establece el n�mero de columnas en el tablero.
}
int Config::getminasTablero()
{
    return this->minasTablero; //Devuelve el n�mero de minas.
}
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero; //Establece la cantidad de minas en el tablero.
}
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero; //Devuelve al modo desarrollador.
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero; //Establcer el estado actual del desarrollador.
}
int Config::getvidasTablero()
{
    return this->vidasTablero; //Devuelve las vidas del jugador.
}
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero; //Establece el n�mero de vidas del jugador.
}
