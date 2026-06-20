#include <iostream>
using namespace std;

int main() {
    int n;
    float matriz[20][20], suma = 0;

    cout << "Tamano de la matriz cuadrada (n): "; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    // Un solo bucle para la diagonal
    for (int i = 0; i < n; i++) {
        suma += matriz[i][i];
    }

    cout << "La suma de la diagonal principal es: " << suma << endl;
    return 0;
}
