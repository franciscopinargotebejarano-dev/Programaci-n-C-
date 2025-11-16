#include <iostream>
using namespace std;
// Función que calcula el descuento que se aplica al precio de una compra
double calcularDescuento(double precio, double porcentaje) {
    double descuento = (precio*(porcentaje/100));
    return descuento;
}
// Función que calcula el precio final con los descuentos aplicados
double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente) {
    double descliente = calcularDescuento(precioBase,porcCliente);
    double desprmo = calcularDescuento(precioBase, porcPromo);
    cout<<"\nDescuento por clinte frecuente de: "<<descliente<<"$"<<endl;
    cout<<"Descuento por promocion de: "<<desprmo<<"$"<<endl;
    double preciofinal = precioBase - (descliente+desprmo);
    cout<<"Precio final a pagar de: "<<preciofinal<<"$"<<endl;
}
int main () {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio despliega un menu para calcular el descuento de un precio.\n";
    double precioinicio, desctpromo, desctliente;
    int num;
    cout<<"Calculo del precio final de un producto"<<endl;
    do{ //Menu interactivo
        cout<<"\n============MENU============"<<endl;
        cout<<"1.- Calcular precio final"<<endl<<"2.- Salir"<<endl;
        cout<<"Selecione una opcion: ";
        cin>>num;
        switch (num) 
        {
        case 1:
            cout<<"\n---------------------------------------------------\n"<<endl;
            cout<<"Ingrese el precio del producto: ";
            cin>>precioinicio;
            cout<<"Ingrese el porcentaje de descuento por cliente fiel: ";
            cin>>desctliente;
            cout<<"Ingrese el porcentaje de descuento por promocion: ";
            cin>>desctpromo;
            calcularPrecioFinal (precioinicio, desctpromo, desctliente); // Lamada a la función para calcular el precio y mostrar en pantalla
            break;
        case 2: {
            cout<<"\n----------------------------------------------------\n"<<endl;
            cout<<"Saliendo del programa..." << endl;
            break; // Finalización del programa
        }
        default:
            cout<<"\nOpcion invalida!\n"<<endl;
            break;
        }
    } while (num!=2) ;
    return 0;
}