#include <iostream>
using namespace std;

int main() {
    int m, n;
    float matriz[20][20];

    cout << "Filas (m): "; cin >> m;
    cout << "Columnas (n): "; cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    // Aquí invertimos el recorrido
    for (int j = 0; j < n; j++) {
        float suma = 0;
        for (int i = 0; i < m; i++) {
            suma += matriz[i][j];
        }
        cout << "La suma de la columna " << j << " es: " << suma << endl;
    }

    return 0;
}
