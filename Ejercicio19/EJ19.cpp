#include <iostream>
using namespace std;

int main() {
    float M[3][4]; // Matriz de coeficientes y términos independientes
    float x1, x2, x3; // Incógnitas

    cout << "Ingrese la matriz 3x4 (coeficientes y resultados):\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cin >> M[i][j];
        }
    }

    // PASO 1: Triangularización (Hacer ceros por debajo de la diagonal)
    
    // Ceros debajo de M[0][0]
    float factor1 = M[1][0] / M[0][0];
    for(int j=0; j<4; j++) M[1][j] -= factor1 * M[0][j];
    
    float factor2 = M[2][0] / M[0][0];
    for(int j=0; j<4; j++) M[2][j] -= factor2 * M[0][j];

    // Cero debajo de M[1][1]
    float factor3 = M[2][1] / M[1][1];
    for(int j=0; j<4; j++) M[2][j] -= factor3 * M[1][j];


    // PASO 2: Sustitución Regresiva (Despejar desde abajo hacia arriba)
    x3 = M[2][3] / M[2][2];
    x2 = (M[1][3] - M[1][2]*x3) / M[1][1];
    x1 = (M[0][3] - M[0][1]*x2 - M[0][2]*x3) / M[0][0];

    cout << "\nSolucion del sistema:\n";
    cout << "x = " << x1 << endl;
    cout << "y = " << x2 << endl;
    cout << "z = " << x3 << endl;

    return 0;
}
