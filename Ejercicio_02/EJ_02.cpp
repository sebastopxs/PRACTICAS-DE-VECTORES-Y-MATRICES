#include <iostream>
using namespace std;

int main() {
    int n;
    float v[100], suma = 0;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
        suma += (v[i] * v[i]);
    }

    cout << "La suma al cuadrado es: " << suma << endl;

    return 0;
}
