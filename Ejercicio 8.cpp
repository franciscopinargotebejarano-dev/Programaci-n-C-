#include <iostream>
#include <iomanip>
using namespace std;
double calcularPromedio(int arr[], int tamaño) {
    double suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arr[i];
    }
    return suma / tamaño;
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar n numeros, calcular el promedio de ellos y mostrarlos en pantalla\n";
    cout<<"\n============Calculo de promedio de numeros enteros============";
    int cantidad, numeros[cantidad];
    string opcion;
    do {
        cout << "\nCuantos numeros desea ingresar? ";
        cin >> cantidad;
        cout << "Ingrese los numeros enteros para calcular el promedio:\n";
        for (int i = 0; i < cantidad; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        }
        double promedio = calcularPromedio(numeros, 5);
        cout << fixed << setprecision(2);
        cout << "\nEl promedio de los elementos es: " << promedio << endl;
        cout<<endl;
        cout<<"\nDese calcular otro promedio [si/no]: ";
        cin>>opcion;
    } while (opcion!="no" and opcion!="n") ;
    cout<<"\n----------------------------------------------------\n"<<endl;
    cout<<"Saliendo del programa...\n" << endl;
    return 0;
}
