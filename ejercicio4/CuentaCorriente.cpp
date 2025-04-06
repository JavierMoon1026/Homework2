#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(string nombre, double saldo) : CuentaBancaria(nombre, saldo){}

void CuentaCorriente::retirar(double monto) {
    if (monto <= balance) {
        balance -= monto;
    } else {
        cout << "Fondos insuficientes en Cuenta Corriente. Intentando con Caja de Ahorro..." << endl;
    }
}

void CuentaCorriente::retirar(double monto, CajaDeAhorro& ahorro) {
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

void CuentaCorriente::mostrarInfo() {
    cout << "[CUENTA CORRIENTE] Titular: " << titularCuenta << ", Balance: $" << balance << std::endl;
}
