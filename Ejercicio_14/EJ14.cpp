#include <iostream>
using namespace std;

int main() {
    int n;
    float matriz[10][10], suma = 0;

    cout << "Tamano de la matriz (n): "; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\n--- Dibujando la Letra N ---\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Condición lógica de la N: Primera columna OR Diagonal OR Ultima columna
            if (j == 0 || i == j || j == n - 1) {
                cout << matriz[i][j] << "\t";
                suma += matriz[i][j];
            } else {
                cout << " \t"; // Deja un hueco visual
            }
        }
        cout << endl;
    }

    cout << "\nLa suma de los elementos que forman la 'N' es: " << suma << endl;

    return 0;
}
