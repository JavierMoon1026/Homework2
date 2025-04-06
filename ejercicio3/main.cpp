#include "numero.h"

int main(){
    entero e1(2), e2(4);
    numero* eSuma = e1.suma(e2);
    cout << "Suma de enteros: " << eSuma->toString() << endl;
    delete eSuma;
    numero* eResta = e1.resta(e2);
    cout << "Resta de enteros: " << eResta->toString() << endl;
    delete eResta;
    numero* eMultiplicacion = e1.multiplicacion(e2);
    cout << "Multiplicacion de enteros: " << eMultiplicacion->toString() << endl;
    delete eMultiplicacion;

    real r1(1.3), r2(3.2);
    numero* rSuma = r1.suma(r2);
    cout << "Suma de reales: " << rSuma->toString() << endl;
    delete rSuma;
    numero* rResta = r1.resta(r2);
    cout << "Resta de reales: " << rResta->toString() << endl;
    delete rResta;
    numero* rMultiplicacion = r1.multiplicacion(r2);
    cout << "Multiplicacion de reales: " << rMultiplicacion->toString() << endl;
    delete rMultiplicacion;

    complejo c1(1, 4), c2(7, 2);
    numero* cSuma = c1.suma(c2);
    cout << "Suma de complejos: " << cSuma->toString() << endl;
    delete cSuma;
    numero* cResta = c1.resta(c2);
    cout << "Resta de complejos: " << cResta->toString() << endl;
    delete cResta;
    numero* cMultiplicacion = c1.multiplicacion(c2);
    cout << "Multiplicacion de complejos: " << cMultiplicacion->toString() << endl;
    delete cMultiplicacion;

    return 0;
}