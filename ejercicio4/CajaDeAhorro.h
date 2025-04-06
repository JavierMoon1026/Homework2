#include <iostream>
#include "CuentaBancaria.h"
#pragma once
using namespace std;

class cuentaCorriente;

class cajaDeAhorro : public cuentaBancaria{
    private:
        int contador;

    public:
        cajaDeAhorro(string nombre, double saldo);
        void retirar(double monto) override;
        void mostrarInfo() override;
        friend class cuentaCorriente;
};