#include <iostream>
using namespace std;
// Función que calcula la suma de los elementos del arreglo usando paso por referencia
void calcularSuma(int arreglo[], int tamaño, int &suma) {
    suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arreglo[i];
    }
}
// Función para mostrar el arreglo
void mostrarArreglo(int arreglo[], int tamaño) {
    cout << "Arreglo actual: ";
    for (int i = 0; i < tamaño; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
// Función para eliminar un dato según la posición ingresada
void eliminarDato(int arreglo[], int &tamaño, int posicion) {
    if (posicion < 1 || posicion > tamaño) {
        cout << "Posición inválida.\n";
        return;
    }
    for (int i = posicion - 1; i < tamaño - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }
    tamaño--; // Reduce el tamaño real del arreglo
    cout << "Dato eliminado correctamente.\n";
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar 5 numeros en un arregelo, pedir seleccionar uno para borrarlo, y mostrar 4 en pantalla\n";
    int TAM = 5;
    int arreglo[TAM];
    int tamañoActual = TAM;
    int suma = 0;
    int posicion;
    // Ingreso de datos
    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    // Mostrar arreglo original
    mostrarArreglo(arreglo, tamañoActual);
    // Eliminar dato según posición
    cout << "\nIngrese la posicion del dato a eliminar (1 a 5): ";
    cin >> posicion;
    eliminarDato(arreglo, tamañoActual, posicion);
    // Mostrar arreglo modificado
    mostrarArreglo(arreglo, tamañoActual);
    // Calcular suma
    calcularSuma(arreglo, tamañoActual, suma);
    cout << "\nLa suma total de los elementos es: " << suma << endl;
    return 0;
}
