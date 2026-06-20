#include <iostream>
using namespace std;

int main() {
    int n;
    float v[100], w[100], suma = 0;

    cout << "Tamano de los vectores: ";
    cin >> n;

    cout << "Ingrese datos del Vector V:\n";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Ingrese datos del Vector W:\n";
    for (int i = 0; i < n; i++) cin >> w[i];

    for (int i = 0; i < n; i++) {
        suma += (v[i] * w[i]);
    }

    cout << "El producto escalar es: " << suma << endl;

    return 0;
}
