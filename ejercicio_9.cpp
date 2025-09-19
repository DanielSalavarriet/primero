#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "=== Calculo de factorial ===" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}
