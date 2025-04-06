#include "CuentaBancaria.h"

CuentaBancaria::CuentaBancaria(string nombre, double saldoInicial){
    titularCuenta = nombre;
    balance = saldoInicial;
}

void CuentaBancaria::depositar(double monto) {
    balance += monto;
}
