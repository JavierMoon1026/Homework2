#include <iostream>
#include <vector>
#include <map>
#pragma once

using namespace std;

class estudiante{
    private:
        string nombreCompleto;
        int legajo;
        map<string, float> notasFinal;

    public:
        estudiante(string nom, int leg);

        string getNombreCompleto() const;
        int getLegajo() const;
        float getPromedioGeneral() const;

        void agregarNota(string nombreCurso, float nota);

        bool operator<(const estudiante& otro) const;
        friend ostream& operator<<(ostream& os, const estudiante& e);
};