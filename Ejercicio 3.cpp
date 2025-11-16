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
    int TAM = 5, num;
    int arreglo[TAM];
    int tamañoActual = TAM;
    int suma = 0;
    int posicion;
    do {//Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Ingresar 5 numeros"<<endl<<"2.- Borrar un numero"<<endl<<"3.- Salir"<<endl;
        cout<<"Selecione una opcion: ";
        cin>>num;
        switch (num) {
            case 1: {
                // Ingreso de datos
                cout << "\nIngrese 5 numeros enteros:\n";
                for (int i = 0; i < TAM; i++) {
                cout << "Numero " << i + 1 << ": ";
                cin >> arreglo[i];
                }
                // Mostrar arreglo original
                mostrarArreglo(arreglo, tamañoActual);
                // Calcular suma
                calcularSuma(arreglo, tamañoActual, suma);
                cout << "\nLa suma total de los elementos es: " << suma << endl;
                break;
            }
            case 2: {
                // Eliminar dato según posición
                cout << "\nIngrese la posicion del dato a eliminar (1 a 5): ";
                cin >> posicion;
                eliminarDato(arreglo, tamañoActual, posicion);
                // Mostrar arreglo modificado
                mostrarArreglo(arreglo, tamañoActual);
                calcularSuma(arreglo, tamañoActual, suma);
                cout << "\nLa suma total de los elementos es: " << suma << endl;
                break;
            }
            case 3: {
                cout<<"\n----------------------------------------------------\n"<<endl;
                cout<<"Saliendo del programa...\n" << endl;
                break; // Finalización del programa
            }
            default:
            cout<<"\nOpcion invalida!\n"<<endl;
            break;
        }
    } while (num!=3) ;
    return 0;
}
