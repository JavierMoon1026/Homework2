#pragma once
#include <iostream>
#include "CuentaBancaria.h"
#include "CajaDeAhorro.h"
using namespace std;

class CuentaCorriente : public CuentaBancaria{
    public:
        CuentaCorriente(string nombre, double saldo);

        void retirar(double monto) override;
        void retirar(double monto, CajaDeAhorro& ahorro);
        void mostrarInfo() override;
};