#include <iostream>
using namespace std;

int main() {
    // Matriz de 3x6 (3x3 original + 3x3 identidad)
    float M[3][6] = {0}; 

    cout << "Ingrese la matriz 3x3:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> M[i][j];
        }
        M[i][i+3] = 1; // Creando la matriz identidad en el lado derecho
    }

    // Proceso de Gauss-Jordan
    for(int i = 0; i < 3; i++) {
        float pivote = M[i][i]; // Diagonal principal
        
        // Dividimos toda la fila entre el pivote para que la diagonal sea 1
        for(int j = 0; j < 6; j++) {
            M[i][j] /= pivote;
        }

        // Hacemos ceros en el resto de la columna
        for(int k = 0; k < 3; k++) {
            if(k != i) {
                float factor = M[k][i];
                for(int j = 0; j < 6; j++) {
                    M[k][j] -= factor * M[i][j];
                }
            }
        }
    }

    cout << "\nMatriz Inversa:\n";
    for(int i=0; i<3; i++) {
        for(int j=3; j<6; j++) { // Imprimimos solo la mitad derecha
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
