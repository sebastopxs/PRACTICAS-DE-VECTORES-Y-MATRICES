#include <iostream>
using namespace std;

int main() {
    int n;
    float k, v[100];

    cout << "Tamano del vector: ";
    cin >> n;
    cout << "Numero real a sumar (k): ";
    cin >> k;

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] += k; 
    }

    cout << "Vector resultante: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
