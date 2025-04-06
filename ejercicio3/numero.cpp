#include "numero.h"

//numeros enteros
entero::entero(int v){
    valor = v;
}
numero* entero::suma(const numero& otro) const{
    const entero& e = dynamic_cast<const entero&>(otro);
    return new entero(this->valor + e.getValor());
}
numero* entero::resta(const numero& otro) const{
    const entero& e = dynamic_cast<const entero&>(otro);
    return new entero(this->valor - e.getValor());
}
numero* entero::multiplicacion(const numero& otro) const{
    const entero& e = dynamic_cast<const entero&>(otro);
    return new entero(this->valor * e.getValor());
}
string entero::toString() const{
    return to_string(valor);
}
int entero::getValor() const{return valor;}

//numeros reales
real::real(double v){
    valor = v;
}
numero* real::suma(const numero& otro) const{
    const real& r = dynamic_cast<const real&>(otro);
    return new real(this->valor + r.getValor());
}
numero* real::resta(const numero& otro) const{
    const real& r = dynamic_cast<const real&>(otro);
    return new real(this->valor - r.getValor());
}
numero* real::multiplicacion(const numero& otro) const{
    const real& r = dynamic_cast<const real&>(otro);
    return new real(this->valor * r.getValor());
}
string real::toString() const{
    return to_string(valor);
}
double real::getValor() const {return valor;}

//numeros complejos
complejo::complejo(double r, double i){
    real = r;
    imaginario = i;
}

numero* complejo::suma(const numero& otro) const{
    const complejo& c = dynamic_cast<const complejo&>(otro);
    return new complejo(this->real + c.getReal(), this->imaginario + c.getImaginario());
}
numero* complejo::resta(const numero& otro) const{
    const complejo& c = dynamic_cast<const complejo&>(otro);
    return new complejo(this->real - c.getReal(), this->imaginario - c.getImaginario());
}
numero* complejo::multiplicacion(const numero& otro) const{
    const complejo& c = dynamic_cast<const complejo&>(otro);
    double r = this->real * c.getReal() - this->imaginario * c.getImaginario();
    double i = this->real * c.getReal() + this->imaginario * c.getImaginario();
    return new complejo(r, i);
}

string complejo::toString() const{
    ostringstream oss;
    oss << real;
    if (imaginario >= 0)
        oss << "+" << imaginario << "i";
    else
        oss << imaginario << "i";
    return oss.str();
}

double complejo::getReal() const {return real;}
double complejo::getImaginario() const {return imaginario;}