#include <iostream>
using namespace std;

int main() {
    int n;
    float v[100], suma = 0, media;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
        suma += v[i];
    }

    media = suma / n;
    cout << "La media es: " << media << endl;

    return 0;
}
