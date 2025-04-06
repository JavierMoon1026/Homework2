#include "ejercicio1.h"

int main(){
    Time t;
    bool estado1 = true;
    bool estado2 = true;

    while(estado1){
        cout << "1. Inicializar sin parametros" << endl;
        cout << "2. Inicializar solo con hora" << endl;
        cout << "3. Inicializar solo con hora y minutos" << endl;
        cout << "4. Inicializar solo con hora, minutos y segundos" << endl;
        cout << "5. Inicializar con todo" << endl;
        cout << "6. Salir" << endl;
        int opcion1;
        cin >> opcion1;

        int h, m, s;
        string p;

        switch (opcion1) {
            case 1:
                t = Time();
                cout << "Inicializado sin parámetros:\n";
                t.show12h();
                estado1 = false;
                break;

            case 2:
                cout << "Ingrese hora: ";
                cin >> h;
                t = Time(h);
                t.show12h();
                estado1 = false;
                break;

            case 3:
                cout << "Ingrese hora: ";
                cin >> h;
                cout << "Ingrese minutos: ";
                cin >> m;
                t = Time(h, m);
                t.show12h();
                estado1 = false;
                break;

            case 4:
                cout << "Ingrese hora: ";
                cin >> h;
                cout << "Ingrese minutos: ";
                cin >> m;
                cout << "Ingrese segundos: ";
                cin >> s;
                t = Time(h, m, s);
                t.show12h();
                estado1 = false;
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
                t = Time(h, m, s, p);
                t.show12h();
                estado1 = false;
                break;

            case 6:
                estado2 = false;
                break;

            default:
                cout << "Opción inválida.\n";
        }
        
    }
    
    while(estado2){
        cout << "1. Leer solo hora" << endl;
        cout << "2. Leer solo minutos" << endl;
        cout << "3. Leer solo segundos" << endl;
        cout << "4. Leer solo periodo" << endl;
        cout << "5. Leer todo" << endl;
        cout << "6. Leer en formato 24 horas" << endl;
        cout << "7. Cambiar hora" << endl;
        cout << "8. Cambiar minutos" << endl;
        cout << "9. Cambiar segundos" << endl;
        cout << "10. Cambiar periodo" << endl;
        cout << "11. Salir" << endl;
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
                t.show12h();
                break;

            case 6:
                t.show24h();
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