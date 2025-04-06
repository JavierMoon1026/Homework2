#include "CuentaCorriente.h"

cuentaCorriente::cuentaCorriente(string nombre, double saldo) : cuentaBancaria(nombre, saldo){}

void cuentaCorriente::retirar(double monto, cajaDeAhorro& ahorro) {
    if (monto <= balance) {
        balance -= monto;
    } else if (monto <= (balance + ahorro.balance)) {
        double restante = monto - balance;
        balance = 0;
        ahorro.balance -= restante;
        cout << "Fondos combinados usados. Caja de Ahorro: -" << restante << "\n";
    } else {
        cout << "No hay fondos suficientes ni en Cuenta Corriente ni en Caja de Ahorro.\n";
    }
}

void cuentaCorriente::mostrarInfo() {
    cout << "[CUENTA CORRIENTE] Titular: " << titularCuenta << ", Balance: $" << balance << std::endl;
}
