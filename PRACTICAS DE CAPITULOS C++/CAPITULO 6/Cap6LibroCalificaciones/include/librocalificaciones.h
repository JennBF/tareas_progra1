#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H
//FIG 6.3 CAPITULO 6
//JENNIFER BARRIOS UNIVERSIDAD MARIANO GÁLVEZ.
//MARZO 2025
//LAS FUNCIONES MIEMBRO ESTÁN DEFINIDAS EN LIBROCALIFICACIONES.CPP

#include <string>

class LibroCalificaciones
{
    public:
    // Constructor explícito: Evita que el compilador realice conversiones automáticas
    // de tipos (por ejemplo, de std::string a un objeto de la clase LibroCalificaciones).
       explicit LibroCalificaciones(std::string); //Se inicializa el nombre del curso
// La palabra clave EXPLICIT se utiliza para evitar que el compilador
// cree objetos automáticamente mediante asignaciones implícitas,
// como LibroCalificaciones obj2 = 82. Esto obliga al programador a ser claro
// y explícito al construir objetos de esta clase.


        void establecerNombreCurso(std::string); //establece el nombre del curso
        std::string obtenerNombreCurso() const;
        void mostrarMensaje() const;
        void recibirCalificaciones();
        void mostrarReporteCalificaciones() const;

        int maximo(int,int,int) const; //Determina el máximo de 3 valores


    protected:

    private:

        std::string nombreCurso;
        int calificacionMaxima;
};

#endif // LIBROCALIFICACIONES_H
