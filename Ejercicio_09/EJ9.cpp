#include <iostream>
using namespace std;

int main() {
    int m, n;
    float matriz[20][20];

    cout << "Filas (m): "; cin >> m;
    cout << "Columnas (n): "; cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nResultados:\n";
    for (int i = 0; i < m; i++) {
        float suma = 0; // Se declara y reinicia aquí
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
        cout << "La suma de la fila " << i << " es: " << suma << endl;
    }

    return 0;
}
