#include <iostream>
#include <iomanip>
#include "Temperatura.h"

using namespace std;

double centigrados(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

double fahrenheit(double centigrados) {
    return (9.0 / 5.0) * centigrados + 32;
}

void imprimirTabla() {
    cout << fixed << setprecision(1);
    cout << "Centigrados  Fahrenheit | Fahrenheit  Centigrados\n";
    cout << "---------------------------------------------\n";

    for (int c = 0, f = 32; c <= 100 && f <= 212; c++, f += 10) {
        cout << setw(6) << c << "°C -> " << setw(6) << fahrenheit(c)
                  << "°F  |  " << setw(6) << f << "°F -> " << setw(6) << centigrados(f) << "°C\n";
    }
}
