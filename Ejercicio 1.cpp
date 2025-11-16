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
    int TAM = 5, num;
    int numeros[TAM];
    do {//Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Ingresar 5 numeros"<<endl<<"2.- Mostar numeros ingresados"<<endl<<"3.- Salir"<<endl;
        cout<<"Selecione una opcion: ";
        cin>>num;
        switch (num)
        {
        case 1:{
            // Ingreso de datos desde el usuario
            cout << "\nIngrese 5 numeros enteros:\n";
            for (int i = 0; i < TAM; i++) {
            cout << "Numero " << i + 1 << ": ";
            cin >> numeros[i];
            }
            break;
        }
        case 2: {
            // Llamada a la función para mostrar los números
            mostrarNumeros(numeros, TAM);
            break;
        }
        case 3: {
            cout<<"\n----------------------------------------------------\n"<<endl;
            cout<<"Saliendo del programa..." << endl;
            break; // Finalización del programa
        }
        default:
            cout<<"\nOpcion invalida!\n"<<endl;
            break;
        }
    } while (num!=3) ;
    return 0;
}
