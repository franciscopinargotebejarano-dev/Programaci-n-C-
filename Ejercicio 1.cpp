#include <iostream>
using namespace std;
// Función que muestra los valores del arreglo
void mostrarNumeros(int numeros[], int tamaño) {
    cout << "\nLos numeros ingresados son:\n";
    for (int i = 0; i < tamaño; i++) {
        cout << "Numero " << i + 1 << ": " << numeros[i] << endl;
    }
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar 5 numeros y mostrarlos en pantalla\n";
    int TAM = 5;
    int numeros[TAM];
    // Ingreso de datos desde el usuario
    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    // Llamada a la función para mostrar los números
    mostrarNumeros(numeros, TAM);
    return 0;
}
