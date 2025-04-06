#include "CajaDeAhorro.h"

cajaDeAhorro::cajaDeAhorro(std::string nombre, double saldo) : cuentaBancaria(nombre, saldo), contador(0){}

void cajaDeAhorro::retirar(double monto) {
    if (monto > balance) {
        cout << "Fondos insuficientes en Caja de Ahorro." << endl;
    } else {
        balance -= monto;
    }
}

void cajaDeAhorro::mostrarInfo() {
    cout << "[CAJA DE AHORRO] Titular: " << titularCuenta << ", Balance: $" << balance << endl;
    cout << "Balance: $" << balance << ", Caja de Ahorro, Titular: " << titularCuenta << endl;
    contador++;
    if (contador > 2) {
        balance -= 20;
        cout << "Se ha descontado $20 por mostrar informacion mas de 2 veces." << endl;
    }
}
