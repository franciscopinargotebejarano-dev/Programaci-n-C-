#include <iostream>
#include <iomanip>
using namespace std;
void recargar(double &saldo, double monto) {
    saldo += monto;
    cout << "Recarga exitosa. Saldo actual: $" << fixed << setprecision(2) << saldo << endl;
}
bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo -= tarifa;
        return true;
    }
    return false;
}
void mostrarEstado(double saldo, int pasadas) {
    cout << "===== TARJETA METRO/BUS QUITO =====\n";
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << fixed << setprecision(2) << saldo << endl;
    cout << "===================================\n";
}
int main() {
    system("cls");
    cout<<"Pinargote Javier\nEl ejercicio simula las una interfaz de metro, en el cual se puede ingresar una recarga y pagar tickets de viaje\n";
    double saldo = 0.0;
    int pasadas = 0;
    double monto, tarifa = 0.45;
    char opcion;
    cout << "\n----- TARJETA METRO/BUS QUITO -----\n";
    cout << "\nSaldo actual: $" << fixed << setprecision(2) << saldo << endl;
        cout << "Ingrese monto a recargar: ";
        cin >> monto;
        recargar(saldo, monto);
    do {
        
        cout << "\nPagando pasaje de $" << tarifa << " ...\n";
        if (pagar(saldo, tarifa)) {
            cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
            pasadas++;
        } else {
            cout << "Saldo insuficiente, recargue.\n";
            cout << "\nSaldo actual: $" << fixed << setprecision(2) << saldo << endl;
            cout << "Ingrese monto a recargar: ";
            cin >> monto;
            recargar(saldo, monto);
        }
        cout << "\nDesea pagar otro pasaje? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    mostrarEstado(saldo, pasadas);
    return 0;
}
