#include <iostream>
#include <sstream>
#pragma once
using namespace std;

class numero{
    public:
        virtual numero* suma(const numero& otro) const = 0;
        virtual numero* resta(const numero& otro) const = 0;
        virtual numero* multiplicacion(const numero& otro) const = 0;
        virtual string toString() const = 0;
        virtual ~numero() {}
};

class entero : public numero{
    private:
        int valor;
    public:
        entero(int v);

        numero* suma(const numero& otro) const override;
        numero* resta(const numero& otro) const override;
        numero* multiplicacion(const numero& otro) const override;

        string toString() const override;
        int getValor() const;
};

class real : public numero{
    private:
        double valor;
    public:
        real(double v);

        numero* suma(const numero& otro) const override;
        numero* resta(const numero& otro) const override;
        numero* multiplicacion(const numero& otro) const override;

        string toString() const override;

        double getValor() const;
};

class complejo : public numero{
    private:
        double real, imaginario;
    public:
        complejo(double r, double i);

        numero* suma(const numero& otro) const override;
        numero* resta(const numero& otro) const override;
        numero* multiplicacion(const numero& otro) const override;

        string toString() const override;
        double getReal() const;
        double getImaginario() const;
};