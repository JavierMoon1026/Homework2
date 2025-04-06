#include "curso.h"

Curso::Curso(){};
Curso::~Curso(){
    for(auto e : estudiantes){
        delete e;
    }
    estudiantes.clear();
}

bool Curso::inscribir(estudiante* e){
    if(cursoCompleto()) return false;
    if(estaInscripto(e->getLegajo())) return false;
    estudiantes.push_back(e);
    return true;
}
bool Curso::desinscribir(int legajo){
    for(int i = 0; i < estudiantes.size(); ++i){
        if(estudiantes[i]->getLegajo() == legajo){
            estudiantes.erase(estudiantes.begin() + i);
            return true;
        }
    }
    return false;
}
bool Curso::estaInscripto(int legajo) const{
    for(int i = 0; i < estudiantes.size(); ++i){
        if(estudiantes[i]->getLegajo() == legajo) return true;
    }
    return false;
}
bool Curso::cursoCompleto() const{
    return estudiantes.size() >= capacidad;
}

void Curso::imprimirLista() const{
    vector<estudiante*> copia = estudiantes;
    sort(copia.begin(), copia.end(), [](estudiante* a, estudiante* b){
        return *a < *b;
    });
    for(auto e : copia){
        cout << *e << endl;
    }

}

Curso::Curso(const Curso& otro){
    for(int i = 0; i < otro.estudiantes.size(); i++){
        estudiante* copia = new estudiante(*otro.estudiantes[i]);
        estudiantes.push_back(copia);
    }
}
/*
Esta copia es de tipo Deep Copy. La razon por la cual se utilizo este tipo de copia es porque si hicieramos una Shallow Copy,
ambos cursos compartirian los mismos objetos estudiante en memoria. Eso es peligroso si uno se elimina o modifica. Por eso copiamos
cada estudiante individualmente, asegurandonos que cada Curso tenga su propio conjunto de estudiantes.
*/

ostream& operator<<(ostream& os, const Curso& Curso){
    os << "Curso con " << Curso.estudiantes.size() << "estudiantes: " << endl;
    for(auto e : Curso.estudiantes){
        os << *e << endl;
    }
    return os;
}