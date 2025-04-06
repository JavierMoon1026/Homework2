#include <iostream>
#include <string>
#include "time.h"

using namespace std;

int main() {
    time;  // Objeto tiempo
    bool estado1 = true;

    while (estado1) {
        cout << "\n--- MENÚ DE INICIALIZACIÓN ---\n";
        cout << "1. Inicializar sin parámetros\n";
        cout << "2. Inicializar solo con hora\n";
        cout << "3. Inicializar con hora y minutos\n";
        cout << "4. Inicializar con hora, minutos y segundos\n";
        cout << "5. Inicializar con hora, minutos, segundos y periodo\n";
        cout << "6. Salir a menú de lectura/modificación\n";
        int opcion1;
        cin >> opcion1;

        int h, m, s;
        string p;

        switch (opcion1) {
            case 1:
                t = time();
                cout << "Inicializado sin parámetros:\n";
                t.mostrar12h();
                break;

            case 2:
                cout << "Ingrese hora: ";
                cin >> h;
                t = time(h);
                t.mostrar12h();
                break;

            case 3:
                cout << "Ingrese hora: ";
                cin >> h;
                cout << "Ingrese minutos: ";
                cin >> m;
                t = time(h, m);
                t.mostrar12h();
                break;

            case 4:
                cout << "Ingrese hora: ";
                cin >> h;
                cout << "Ingrese minutos: ";
                cin >> m;
                cout << "Ingrese segundos: ";
                cin >> s;
                t = time(h, m, s);
                t.mostrar12h();
                break;

            case 5:
                cout << "Ingrese hora: ";
                cin >> h;
                cout << "Ingrese minutos: ";
                cin >> m;
                cout << "Ingrese segundos: ";
                cin >> s;
                cout << "Ingrese periodo (a.m. / p.m.): ";
                cin >> p;
                t = time(h, m, s, p);
                t.mostrar12h();
                break;

            case 6:
                estado1 = false;
                break;

            default:
                cout << "Opción inválida.\n";
        }
    }

    bool estado2 = true;
    while (estado2) {
        cout << "\n--- MENÚ DE CONSULTA Y MODIFICACIÓN ---\n";
        cout << "1. Leer hora\n";
        cout << "2. Leer minutos\n";
        cout << "3. Leer segundos\n";
        cout << "4. Leer periodo\n";
        cout << "5. Mostrar todo (12h)\n";
        cout << "6. Mostrar en formato 24h\n";
        cout << "7. Cambiar hora\n";
        cout << "8. Cambiar minutos\n";
        cout << "9. Cambiar segundos\n";
        cout << "10. Cambiar periodo\n";
        cout << "11. Salir\n";

        int opcion2;
        cin >> opcion2;
        int val;
        string per;

        switch (opcion2) {
            case 1:
                cout << "Hora actual: " << t.getHour() << "\n";
                break;

            case 2:
                cout << "Minutos actuales: " << t.getMinute() << "\n";
                break;

            case 3:
                cout << "Segundos actuales: " << t.getSecond() << "\n";
                break;

            case 4:
                cout << "Periodo actual: " << t.getPeriod() << "\n";
                break;

            case 5:
                t.mostrar12h();
                break;

            case 6:
                t.mostrar24h();
                break;

            case 7:
                cout << "Ingrese nueva hora: ";
                cin >> val;
                t.setHour(val);
                break;

            case 8:
                cout << "Ingrese nuevos minutos: ";
                cin >> val;
                t.setMinute(val);
                break;

            case 9:
                cout << "Ingrese nuevos segundos: ";
                cin >> val;
                t.setSecond(val);
                break;

            case 10:
                cout << "Ingrese nuevo periodo (a.m. / p.m.): ";
                cin >> per;
                t.setPeriod(per);
                break;

            case 11:
                estado2 = false;
                break;

            default:
                cout << "Opción inválida.\n";
        }
    }

    return 0;
}
