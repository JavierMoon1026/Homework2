#include <iostream>
#include "CuentaBancaria.h"
#pragma once
using namespace std;

class CuentaCorriente;

class CajaDeAhorro : public CuentaBancaria{
    private:
        int contador;

    public:
        CajaDeAhorro(string nombre, double saldo);
        void retirar(double monto) override;
        void mostrarInfo() override;
        friend class CuentaCorriente;
};