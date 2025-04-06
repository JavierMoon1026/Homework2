#include "curso.h"

int main(){
    estudiante* e1 = new estudiante("Ana Torres", 1001);
    e1->agregarNota("Matematica", 9.5);
    e1->agregarNota("Fisica", 8.0);

    estudiante* e2 = new estudiante("Carlos Pérez", 1002);
    e2->agregarNota("Matematica", 6.0);
    e2->agregarNota("Fisica", 7.0);

    estudiante* e3 = new estudiante("Beatriz Gómez", 1003);
    e3->agregarNota("Matematica", 10.0);
    e3->agregarNota("Fisica", 9.0);

    // Crear Curso e inscribir estudiantes
    Curso curso;
    curso.inscribir(e1);
    curso.inscribir(e2);
    curso.inscribir(e3);

    // Probar estaInscripto
    std::cout << "¿Carlos Pérez está inscripto? "
              << (curso.estaInscripto(1002) ? "Sí" : "No") << std::endl;

    // Probar estaCompleto (con menos de 20)
    std::cout << "¿Curso completo? " << (curso.cursoCompleto() ? "Sí" : "No") << std::endl;

    // Imprimir estudiantes ordenados alfabéticamente
    std::cout << "\nestudiantes ordenados por nombre:\n";
    curso.imprimirLista();

    // Desinscribir un estudiante
    curso.desinscribir(1002); // Carlos Pérez

    std::cout << "\nDespués de desinscribir a Carlos:\n";
    curso.imprimirLista();

    // Mostrar Curso con operador <<
    std::cout << "\nContenido del Curso con <<:\n" << curso << std::endl;

    // Deep Copy del Curso
    Curso copiarcurso(Curso);
    std::cout << "\nContenido de la copia (deep copy):\n" << copiarcurso << std::endl;

    return 0;
}