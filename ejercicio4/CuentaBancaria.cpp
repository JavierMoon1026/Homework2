#include "CuentaBancaria.h"

cuentaBancaria::cuentaBancaria(string nombre, double saldoInicial){
    titularCuenta = nombre;
    balance = saldoInicial;
}

void cuentaBancaria::depositar(double monto) {
    balance += monto;
}
