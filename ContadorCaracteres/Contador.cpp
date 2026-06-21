#include <iostream>
using namespace std;

int main() {
    char palabra[100]; 
    int contador = 0;

    cout << "Ingrese una palabra (sin espacios): ";
    cin >> palabra;

    // Usamos un bucle while para contar hasta encontrar ese limite.
    while (palabra[contador] != '\0') {
        contador++;
    }

    cout << "La palabra tiene " << contador << " caracteres." << endl;

    return 0;
}
