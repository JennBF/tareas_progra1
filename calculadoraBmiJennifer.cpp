#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float pesoEnLibras, alturaEnPulgadas;
    float pesoEnKilogramos, alturaEnMetros;
    float bmi;
    int opcionSeleccionada;
    char salidaMenu;

    do
    {
        system("cls");
        // Menú de opciones
        cout << "Calculadora de Índice de Masa Corporal (BMI)" << endl;
        cout << "1. Calcular con libras y pulgadas." << endl;
        cout << "2. Calcular con kilogramos y metros." << endl;
        cout << "Seleccione una opción: ";
        cin >> opcionSeleccionada;

        // Validar opción ingresada
        if (opcionSeleccionada == 1)
        {
            cout << "Ingrese su peso en libras: ";
            cin >> pesoEnLibras;
            cout << "Ingrese su altura en pulgadas: ";
            cin >> alturaEnPulgadas;

            // Fórmula BMI con libras y pulgadas
            bmi = (pesoEnLibras * 703) / (alturaEnPulgadas * alturaEnPulgadas);
        }
        else if (opcionSeleccionada == 2)
        {
            cout << "Ingrese su peso en kilogramos: ";
            cin >> pesoEnKilogramos;
            cout << "Ingrese su altura en metros: ";
            cin >> alturaEnMetros;

            // Fórmula BMI con kilogramos y metros
            bmi = pesoEnKilogramos / (alturaEnMetros * alturaEnMetros);
        }
        else
        {
            cout << "Opción inválida. Intente nuevamente." << endl;
            continue;
        }

        // Mostrar resultado
        cout << "Su índice de masa corporal (BMI) es: " << bmi << endl;

        // Evaluar la categoría del BMI
        if (bmi < 18.5)
            cout << "Categoría: Bajo peso" << endl;
        else if (bmi >= 18.5 && bmi <= 24.9)
            cout << "Categoría: Normal" << endl;
        else if (bmi >= 25 && bmi <= 29.9)
            cout << "Categoría: Sobrepeso" << endl;
        else
            cout << "Categoría: Obeso" << endl;

        cout << "¿Desea realizar otro cálculo? (S/N): ";
        cin >> salidaMenu;

    } while (salidaMenu == 'S' || salidaMenu == 's');

    return 0;
}
