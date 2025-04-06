#include <iostream>
#pragma once
using namespace std;

class cuentaBancaria{
    protected:
        double balance;
        string titularCuenta;
    public:
        cuentaBancaria(string nombre, double saldoInicial);

        void depositar(double monto);
        virtual void retirar(double monto) = 0;
        virtual void mostrarInfo() = 0;

        virtual ~cuentaBancaria() = default;
};