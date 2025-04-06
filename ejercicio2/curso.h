#include <iostream>
#include <vector>
#include <algorithm>
#include "estudiante.h"
#pragma once

using namespace std;

class Curso{
    private:
        vector<estudiante*> estudiantes;
        const int capacidad = 20;
    public:
        Curso();
        ~Curso();
        
        bool inscribir(estudiante* e);
        bool desinscribir(int legajo);
        bool estaInscripto(int legajo) const;
        bool cursoCompleto() const;
        
        void imprimirLista() const;

        friend ostream& operator<<(ostream& os, const Curso& Curso);
        Curso(const Curso& otro);
    };