//FIG. 6.5

#include "LibroCalificaciones.h"

int main()
{
    //crea un objeto LibroCalificaciones
    LibroCalificaciones miLibroCalificaciones("CS101 PROGRAMACION EN C++");

    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.recibirCalificaciones();

    miLibroCalificaciones.mostrarReporteCalificaciones();
}
