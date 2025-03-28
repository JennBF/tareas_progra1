#include "librocalificaciones.h"
#include <iostream>
using namespace std;
//FIG. 6.4  LIBROCALIFICACIONES.CPP
//DEFINICIONES DE LAS FUNCIONES MIEMBRO PARA LA CLASE LIBROCALIFICACIONES


// Constructor de la clase LibroCalificaciones.
// Inicializa el atributo "nombre" con el valor proporcionado por el parámetro
// y establece "calificacionMaxima" en 0 por defecto.
LibroCalificaciones::LibroCalificaciones(string nombre):calificacionMaxima(0)//ESTE VALOR SE REEMPLAZARÁ POR LA CALIFICACIÓN MÁXIMA
{
    establecerNombreCurso(nombre); //VALIDA Y ALMACENA nombreCurso

    //ctor
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.size()<=25)//si nombre tiene 25 o menos caracteres
        nombreCurso= nombre; //almacena el nombre del curso en el objeto
    else //si nombre es mayor que 25 caracteres
    {
        nombreCurso=nombre.substr(0,25); //selecciona los primeros 25 caracteres
        cerr << "El nombre\""<< nombre << "\" excede la longitud maxima (25).\n" << "Se limito nombreCurso a los primero 25 caracteres.\n"<<endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()const
{
    cout << "BIENVENIDO AL LIBRO DE CALIFICACIONES PARA\n" << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion1;
    int calificacion2;
    int calificacion3;

    cout <<"introduzca tres calificaciones enteras: ";
    cin >> calificacion1 >> calificacion2 >> calificacion3;

    calificacionMaxima= maximo(calificacion1, calificacion2, calificacion3);
}

int LibroCalificaciones::maximo (int x, int y, int z) const
{
    int valorMaximo=x; //supone que x es el mayor para empezar

    //determina si Y es mayor que valorMaximo
    if (y>valorMaximo)
        valorMaximo=y; //hace a Y el nuevo valorMaximo


    //determina si Z es mayor que valorMaximo
    if (z> valorMaximo)
        valorMaximo=z; //hace a Z el nuevo valorMaximo

    return valorMaximo;

}

void LibroCalificaciones::mostrarReporteCalificaciones()const
{
    cout<<"Calificacion Maxima Introducida: " << calificacionMaxima << endl;
}
