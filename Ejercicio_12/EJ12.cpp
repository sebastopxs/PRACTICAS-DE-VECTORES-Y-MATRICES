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

    for (int i = 0; i < n; i++) {
        // En C++ los indices inician en 0, la formula es: n - 1 - i
        suma += matriz[i][n - 1 - i]; 
    }

    cout << "La suma de la diagonal secundaria es: " << suma << endl;
    return 0;
}
