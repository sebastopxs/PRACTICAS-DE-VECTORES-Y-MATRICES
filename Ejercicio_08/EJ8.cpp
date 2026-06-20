#include <iostream>
using namespace std;

int main() {
    int m, n;
    float matriz[20][20], minimo, maximo;

    cout << "Filas (m): ";
    cin >> m;
    cout << "Columnas (n): ";
    cin >> n;

    // Ingreso de datos
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Inicializamos con el primer elemento de la matriz
    minimo = matriz[0][0];
    maximo = matriz[0][0];

    // Búsqueda
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < minimo) minimo = matriz[i][j];
            if (matriz[i][j] > maximo) maximo = matriz[i][j];
        }
    }

    cout << "\nEl elemento menor es: " << minimo << endl;
    cout << "El elemento mayor es: " << maximo << endl;

    return 0;
}
