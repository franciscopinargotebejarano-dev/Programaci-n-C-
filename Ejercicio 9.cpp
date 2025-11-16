#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void cargarDatos(string &nombre, double &precio, int &cantidad) {
    cout << "Ingrese nombre del producto: ";
    cin >> nombre;
    cout << "Ingrese precio unitario: ";
    cin >> precio;
    cout << "Ingrese cantidad: ";
    cin >> cantidad;
}
double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}
double calcularDescuento(double subtotal, int cantidad) {
    double descuento = 0;
    if (cantidad == 2) {
        descuento = subtotal * 0.10; // 10%
    } else if (cantidad >= 3) {
        descuento = subtotal * 0.15; // 15%
    }
    if (subtotal > 200) {
        descuento += subtotal * 0.05; // +5% adicional
    }
    return descuento;
}
void aplicarDescuentoPorReferencia(double subtotal, double descuento, double &total) {
    total = subtotal - descuento;
}
void mostrarFactura(string nombre, double subtotal, double descuento, double total) {
    cout << fixed << setprecision(2);
    cout << "\n========= FACTURA =========\n";
    cout << "Producto: " << nombre << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;
    cout << "===========================\n";
    cout << endl;
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio permite ingresar los datos para una factura (nombre producto, precio, cantidad) y mostrarlos en pantalla con su respectivo descuento\n";
    string producto;
    double precio, subtotal, descuento, total;
    int cantidad;
    string opcion;
    cout << "\n===========Facturazion============"<<endl;
    do {
    cargarDatos(producto, precio, cantidad);
    subtotal = calcularSubtotal(precio, cantidad);
    descuento = calcularDescuento(subtotal, cantidad);
    aplicarDescuentoPorReferencia(subtotal, descuento, total);
    mostrarFactura(producto, subtotal, descuento, total);
    cout<<endl;
    cout<<"Calcular otro promedio [si/no]: ";
    cin>>opcion;
    cout << endl;
    } while (opcion!="no" and opcion!="n") ;
    cout<<"\n----------------------------------------------------\n"<<endl;
    cout<<"Saliendo del programa...\n" << endl;
    return 0;
}
