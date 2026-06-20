#include <iostream>
using namespace std;

int main() {
    int n;
    float v[100], maximo;

    cout << "Tamano del vector: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    maximo = v[0]; 

    for (int i = 1; i < n; i++) {
        if (v[i] > maximo) {
            maximo = v[i];
        }
    }

    cout << "El valor maximo es: " << maximo << endl;

    return 0;
}
