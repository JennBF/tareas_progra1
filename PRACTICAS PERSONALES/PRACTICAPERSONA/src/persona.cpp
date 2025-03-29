#include "persona.h"

persona::persona(string nombre, int edad, string genero)
{
    nombre = "Marice";
    edad = 21;
    genero = "Femenino";
}

virtual void saludo () override;
{
     cout << "Buenos dias ^^ " << endl;

}
