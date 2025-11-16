#include <iostream>
using namespace std;
// Función que multiplica cada elemento del arreglo por un número (parámetro por valor)
void multiplicarArreglo(int numeros[], int cantidad, int multiplicador) {
    cout << "\nResultados de la multiplicación:\n";
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " x " << multiplicador << " = " << numeros[i] * multiplicador << endl;
    }
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar n numeros, multiplicarlos por otro valor ingresado y mostrar en pantalla\n";
    int cantidad, num, numeros[cantidad], multiplicador;
    do {//Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Ingresar numeros"<<endl<<"2.- MUltiplicacion"<<endl<<"3.- Salir"<<endl;
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
                cout << "\nIngrese el numero por el que desea multiplicar cada elemento: ";
                cin >> multiplicador;
               // Llamada a la función
                multiplicarArreglo(numeros, cantidad, multiplicador);
                // Mostrar arreglo original para verificar que no fue modificado
                cout << "\nArreglo original:\n";
                for (int i = 0; i < cantidad; i++) {
                cout << numeros[i] << " ";
                }
                cout << endl;
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
