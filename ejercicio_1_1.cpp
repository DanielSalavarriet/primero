#include <iostream>
using namespace std;

int main() {
    int n;
    double precio, subtotal, total = 0;
    int cantidad;

    cout << "=== Calculadora de Costo Total en una Tienda de Abastos ===" << endl;
    cout << "Ingrese el numero de productos diferentes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nProducto " << i << ":" << endl;
        cout << "Ingrese el precio unitario: ";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        subtotal = precio * cantidad;
        cout << "Subtotal del producto " << i << ": " << subtotal << endl;

        total += subtotal;
    }

    cout << "\nEl costo total de la compra es: " << total << endl;

    return 0;
}

