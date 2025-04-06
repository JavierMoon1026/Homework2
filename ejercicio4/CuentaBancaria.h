#include <iostream>
#pragma once
using namespace std;

class CuentaBancaria{
    protected:
        double balance;
        string titularCuenta;
    public:
        CuentaBancaria(string nombre, double saldoInicial);

        void depositar(double monto);
        virtual void retirar(double monto) = 0;
        virtual void mostrarInfo() = 0;

        virtual ~CuentaBancaria() = default;
};