#include "estudiante.h"

estudiante::estudiante(string nom, int leg){
    nombreCompleto = nom;
    legajo = leg;
}

string estudiante::getNombreCompleto() const{return nombreCompleto;}
int estudiante::getLegajo() const{return legajo;}

float estudiante::getPromedioGeneral() const{
    if(notasFinal.empty()) return 0.0;
    float suma = 0.0;
    for(auto i : notasFinal){
        suma += i.second;
    }
    return suma / notasFinal.size();
}

void estudiante::agregarNota(string curso, float nota){notasFinal[curso] = nota;}

bool estudiante::operator<(const estudiante& otro) const{
    return nombreCompleto < otro.nombreCompleto;
}

ostream& operator<<(ostream& os, const estudiante& e){
    os << "Nombre: " << e.getNombreCompleto() << ", Legajo: " << e.getLegajo() << ", Promedio: " << e.getPromedioGeneral();
    return os;
}