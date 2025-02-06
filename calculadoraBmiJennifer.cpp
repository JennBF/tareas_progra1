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
        // Men� de opciones
        cout << "Calculadora de �ndice de Masa Corporal (BMI)" << endl;
        cout << "1. Calcular con libras y pulgadas." << endl;
        cout << "2. Calcular con kilogramos y metros." << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcionSeleccionada;

        // Validar opci�n ingresada
        if (opcionSeleccionada == 1)
        {
            cout << "Ingrese su peso en libras: ";
            cin >> pesoEnLibras;
            cout << "Ingrese su altura en pulgadas: ";
            cin >> alturaEnPulgadas;

            // F�rmula BMI con libras y pulgadas
            bmi = (pesoEnLibras * 703) / (alturaEnPulgadas * alturaEnPulgadas);
        }
        else if (opcionSeleccionada == 2)
        {
            cout << "Ingrese su peso en kilogramos: ";
            cin >> pesoEnKilogramos;
            cout << "Ingrese su altura en metros: ";
            cin >> alturaEnMetros;

            // F�rmula BMI con kilogramos y metros
            bmi = pesoEnKilogramos / (alturaEnMetros * alturaEnMetros);
        }
        else
        {
            cout << "Opci�n inv�lida. Intente nuevamente." << endl;
            continue;
        }

        // Mostrar resultado
        cout << "Su �ndice de masa corporal (BMI) es: " << bmi << endl;

        // Evaluar la categor�a del BMI
        if (bmi < 18.5)
            cout << "Categor�a: Bajo peso" << endl;
        else if (bmi >= 18.5 && bmi <= 24.9)
            cout << "Categor�a: Normal" << endl;
        else if (bmi >= 25 && bmi <= 29.9)
            cout << "Categor�a: Sobrepeso" << endl;
        else
            cout << "Categor�a: Obeso" << endl;

        cout << "�Desea realizar otro c�lculo? (S/N): ";
        cin >> salidaMenu;

    } while (salidaMenu == 'S' || salidaMenu == 's');

    return 0;
}
