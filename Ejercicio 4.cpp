#include <iostream>
using namespace std;
void encontrarMayor(int numeros[], int cantidad, int &mayor) {
    mayor = numeros[0];
    for (int i = 1; i < cantidad; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
}
int main() {
    system("cls");
    int cantidad;
    cout << "Cuantos numeros desea ingresar? ";
    cin >> cantidad;
    int numeros[cantidad];
    cout << "Ingrese " << cantidad << " numeros:\n";
    for (int i = 0; i < cantidad; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    int mayor;
    encontrarMayor(numeros, cantidad, mayor);
    cout << "\nEl numero mayor del arreglo es: " << mayor << endl;
    return 0;
}