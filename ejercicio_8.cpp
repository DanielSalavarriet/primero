#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double P, r, t;
    int n;

    cout << "=== Calculo de Interes Compuesto ===\n";
    cout << "Ingrese el capital inicial (P): ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual (%): ";
    cin >> r;

    cout << "Ingrese el numero de capitalizaciones por año (0 para continuo): ";
    cin >> n;

    cout << "Ingrese el tiempo en años (t): ";
    cin >> t;

    if (P < 0) {
        cout << "Error: El capital inicial no puede ser negativo.\n";
        return 0;
    }
    if (n < 0) {
        cout << "Error: El numero de capitalizaciones no puede ser negativo.\n";
        return 0;
    }

    double rate = r / 100.0;
    double A;

    if (n == 0) {
        // capitalizacion continua
        A = P * exp(rate * t);
    } else {
        // capitalizacion discreta
        A = P * pow(1.0 + rate / n, n * t);
    }

    cout << fixed << setprecision(2);
    cout << "\nMonto final despues de " << t << " años: " << A << endl;

    return 0;
}

