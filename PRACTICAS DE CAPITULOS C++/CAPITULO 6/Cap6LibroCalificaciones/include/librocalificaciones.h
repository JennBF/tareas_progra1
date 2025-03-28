#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H
//FIG 6.3 CAPITULO 6
//JENNIFER BARRIOS UNIVERSIDAD MARIANO G�LVEZ.
//MARZO 2025
//LAS FUNCIONES MIEMBRO EST�N DEFINIDAS EN LIBROCALIFICACIONES.CPP

#include <string>

class LibroCalificaciones
{
    public:
    // Constructor expl�cito: Evita que el compilador realice conversiones autom�ticas
    // de tipos (por ejemplo, de std::string a un objeto de la clase LibroCalificaciones).
       explicit LibroCalificaciones(std::string); //Se inicializa el nombre del curso
// La palabra clave EXPLICIT se utiliza para evitar que el compilador
// cree objetos autom�ticamente mediante asignaciones impl�citas,
// como LibroCalificaciones obj2 = 82. Esto obliga al programador a ser claro
// y expl�cito al construir objetos de esta clase.


        void establecerNombreCurso(std::string); //establece el nombre del curso
        std::string obtenerNombreCurso() const;
        void mostrarMensaje() const;
        void recibirCalificaciones();
        void mostrarReporteCalificaciones() const;

        int maximo(int,int,int) const; //Determina el m�ximo de 3 valores


    protected:

    private:

        std::string nombreCurso;
        int calificacionMaxima;
};

#endif // LIBROCALIFICACIONES_H
