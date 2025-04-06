#include "curso.h"

int main(){
    estudiante* e1 = new estudiante("Javier Moon", 1001);
    e1->agregarNota("Matematica", 9.5);
    e1->agregarNota("Fisica", 8.0);

    estudiante* e2 = new estudiante("Carlos Ramirez", 1002);
    e2->agregarNota("Matematica", 6.0);
    e2->agregarNota("Fisica", 7.0);

    estudiante* e3 = new estudiante("Julio Vega", 1003);
    e3->agregarNota("Matematica", 10.0);
    e3->agregarNota("Fisica", 9.0);

    // Crear Curso e inscribir estudiantes
    Curso curso;
    curso.inscribir(e1);
    curso.inscribir(e2);
    curso.inscribir(e3);

    // Probar estaInscripto
    cout << "¿Carlos Pérez está inscripto? " << (curso.estaInscripto(1002) ? "Sí" : "No") << endl;

    // Probar estaCompleto (con menos de 20)
    cout << "¿Curso completo? " << (curso.cursoCompleto() ? "Sí" : "No") << endl;

    // Imprimir estudiantes ordenados alfabéticamente
    cout << "\nestudiantes ordenados por nombre:" << endl;
    curso.imprimirLista();

    // Desinscribir un estudiante
    curso.desinscribir(1002); // Carlos Pérez

    cout << "\nDespués de desinscribir a Carlos:" << endl;
    curso.imprimirLista();

    // Mostrar Curso con operador <<
    cout << "Contenido del Curso con <<: " << curso << endl;

    // Deep Copy del Curso
    Curso copiarcurso(Curso);
    cout << "Contenido de la copia (deep copy): " << copiarcurso << endl;

    return 0;
}