#include <iostream>
using namespace std;

int main() {
    // Declaración e inicialización directa del vector
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    cout << "Ingrese un mes (1=Enero, 12=Diciembre): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        // Restamos 1 porque los vectores en C++ inician en el indice 0
        cout << "El mes " << mes << " tiene " << dias[mes - 1] << " dias.\n";
    } else {
        cout << "Error: Mes invalido.\n";
    }

    return 0;
}
