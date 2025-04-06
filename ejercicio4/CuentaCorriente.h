#include <iostream>
#include "CuentaBancaria.h"
#include "CajaDeAhorro.h"
#pragma once
using namespace std;

class cuentaCorriente : public cuentaBancaria{
    public:
        cuentaCorriente(string nombre, double saldo);
        void retirar(double monto) override;
        void retirar(double monto, cajaDeAhorro& ahorro);
        void mostrarInfo() override;
};