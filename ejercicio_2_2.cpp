#include <iostream>
using namespace std;

int main() {
    int n;
    double distancia, total = 0;

    cout << "=== Rastreador de Distancias para Conductores de Entregas ===" << endl;
    cout << "Ingrese el numero de entregas realizadas: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Distancia de la entrega " << i << " (en km): ";
        cin >> distancia;
        total += distancia;
    }

    cout << "\nDistancia total recorrida: " << total << " km" << endl;
    cout << "Promedio de distancia por entrega: " << (total / n) << " km" << endl;

    return 0;
}
