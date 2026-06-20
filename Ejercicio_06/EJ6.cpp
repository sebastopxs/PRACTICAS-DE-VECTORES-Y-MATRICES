#include <iostream>
using namespace std;

int main() {
    int n;
    float v[100], minimo;

    cout << "Tamano del vector: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    minimo = v[0]; // Asumimos que el primero es el menor

    for (int i = 1; i < n; i++) {
        if (v[i] < minimo) {
            minimo = v[i];
        }
    }

    cout << "El valor minimo es: " << minimo << endl;

    return 0;
}
