#include <iostream>
using namespace std;
// Función que cuenta el numero de pares ingresados
int contarPares(int arr[], int tamaño) {
    int contador = 0;
    for (int i = 0; i < tamaño; i++) {
        if (arr[i] % 2 == 0) {
            contador++;
        }
    }
    return contador; // Retorno del total de numeros pares encontrados
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar n numeros, contar la cantidad de pares ingresados y mostrarlos en pantalla\n";
    int cantidad, numeros[cantidad], num;
    do {//Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Ingresar numeros"<<endl<<"2.- Mostrar cantidad de pares"<<endl<<"3.- Salir"<<endl;
        cout<<"Selecione una opcion: ";
        cin>>num;
        switch (num) {
            case 1: {
                // Ingreso del tamaño del arreglo
                cout << "\nCuantos numeros desea ingresar? ";
                cin >> cantidad;
                // Ingreso de los números
                cout << "Ingrese " << cantidad << " numeros:\n";
                for (int i = 0; i < cantidad; i++) {
                cout << "Numero " << i + 1 << ": ";
                cin >> numeros[i];
                }
                break;
            }
            case 2: {
                cout << "\nCantidad de numeros pares: " << contarPares(numeros, cantidad) << endl;
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
