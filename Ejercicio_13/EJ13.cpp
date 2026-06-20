#include <iostream>
using namespace std;

int main() {
    int m, n;
    int matriz[10][10], v[100];

    cout << "Filas (m): "; cin >> m;
    cout << "Columnas (n): "; cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Valor ["<<i<<"]["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }

    int k = 0; // Indice del vector

    // 1. Superior
    for (int j = 0; j < n; j++) {
        v[k] = matriz[0][j];
        k++;
    }
    // 2. Derecha
    for (int i = 1; i < m; i++) {
        v[k] = matriz[i][n - 1];
        k++;
    }
    // 3. Inferior
    if (m > 1) {
        for (int j = n - 2; j >= 0; j--) {
            v[k] = matriz[m - 1][j];
            k++;
        }
    }
    // 4. Izquierda
    if (n > 1) {
        for (int i = m - 2; i >= 1; i--) {
            v[k] = matriz[i][0];
            k++;
        }
    }

    cout << "\nVector de los bordes:\n";
    for (int i = 0; i < k; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
