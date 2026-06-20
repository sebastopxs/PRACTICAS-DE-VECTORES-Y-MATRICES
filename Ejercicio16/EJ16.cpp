#include <iostream>
using namespace std;

int main() {
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes, dia, totalDias = 0;

    cout << "Ingrese el mes (1-12): "; cin >> mes;
    cout << "Ingrese el dia: "; cin >> dia;

    // Sumamos los dias de los meses completos anteriores
    for (int i = 0; i < mes - 1; i++) {
        totalDias += dias[i];
    }
    
    // Sumamos los dias transcurridos del mes actual
    totalDias += dia;

    cout << "Es el dia numero " << totalDias << " del ano.\n";

    return 0;
}
