#include <iostream>
using namespace std;
// Función que muestra las calificaciones registradas
void mostrarCalificaciones(float calificaciones[], int tamaño) {
    cout << "\nLas calificaciones registradas son:\n";
    for (int i = 0; i < tamaño; i++) {
        cout << "Estudiante " << i + 1 << ": " << calificaciones[i] << endl;
    }
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar 4 calificaciones, almacenarlas y mostrarlos en pantalla\n";
    int TAM = 4, num;
    float calificaciones[TAM];
    do {//Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Ingresar calificaciones (4)"<<endl<<"2.- Mostar calificaciones ingresados"<<endl<<"3.- Salir"<<endl;
        cout<<"Selecione una opcion: ";
        cin>>num;
        switch (num) {
            case 1: {
                // Ingreso de las calificaciones
                cout << "\nIngrese las calificaciones de 4 estudiantes (0-20):\n";
                for (int i = 0; i < TAM; i++) {
                    do {
                        cout << "Calificacion del estudiante " << i + 1 << ": ";
                        cin >> calificaciones[i];
                        if (calificaciones[i]>20 or calificaciones[i]<0) {
                            cout<<"Ingrese una calificaion entre 0 a 20!"<<endl;
                        }
                    } while (calificaciones[i]>20 or calificaciones[i]<0); 
                }
                break;
            }
            case 2:{
                // Llamar a la función para mostrar los valores
                mostrarCalificaciones(calificaciones, TAM);
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
