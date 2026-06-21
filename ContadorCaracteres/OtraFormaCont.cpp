#include <iostream>
using namespace std;

int main() {
    char palabra[100]; 
    int contador = 0;

    cout << "Ingrese una frase: ";
    
    // cin.getline lee todo (incluyendo espacios) hasta que presionas Enter
    // Le pasamos dos datos: el nombre del arreglo y su tamaño máximo.
    cin.getline(palabra, 100);

    // El bucle se mantiene exactamente igual, buscando el tope nulo '\0'
    while (palabra[contador] != '\0') {
        contador++;
    }

    cout << "La frase tiene " << contador << " caracteres." << endl;

    return 0;
}
