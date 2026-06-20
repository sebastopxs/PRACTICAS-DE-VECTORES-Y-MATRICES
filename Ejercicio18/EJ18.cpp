#include <iostream>
using namespace std;

int main() {
    float A[2][2], B[2][2], C[2][2] = {0}; // C se inicializa en 0

    cout << "--- Datos Matriz A ---\n";
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) cin >> A[i][j];

    cout << "--- Datos Matriz B ---\n";
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) cin >> B[i][j];

    // Multiplicación (Algoritmo de 3 bucles)
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriz Producto:\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) cout << C[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
