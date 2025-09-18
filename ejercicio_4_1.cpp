#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    long long suma = 0; // usamos long long por si los números son grandes
    cout << "Ingrese los " << n << " numeros: ";
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        suma += x;
    }

    cout << "La suma de los elementos es: " << suma << endl;
    return 0;
}
