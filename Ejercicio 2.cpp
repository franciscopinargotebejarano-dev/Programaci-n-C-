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
    int TAM = 4;
    float calificaciones[TAM];
    // Ingreso de las calificaciones
    cout << "Ingrese las calificaciones de 4 estudiantes:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
    // Llamar a la función para mostrar los valores
    mostrarCalificaciones(calificaciones, TAM);
    return 0;
}
