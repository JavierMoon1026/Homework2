#include "ejercicio1.h"

using namespace std;

Time::Time(int h, int min, int sec, string period){
    while(h < 0 || h >= 12){
        cout << "Hora invalida. Ingrese nuevamente la hora: ";
        cin >> h;
    }
    hour = h;

    while(min < 0 || min >= 60){
        cout << "Minuto invalido. Ingrese nuevamente el minuto: ";
        cin >> min;
    }
    minute = min;

    while(sec < 0 || sec >= 60){
        cout << "Segundo invalido. Ingrese nuevamente el segundo: ";
        cin >> sec;
    }
    second = sec;

    while(period != "a.m." && period != "p.m."){
        cout << "Periodo invalido. Ingrese a.m. o p.m.: ";
        cin >> period;
    }
    isAm = period == "a.m.";
}

void Time::setHour(int h){
    while(h < 0 || h >= 12){
        cout << "Hora invalida. Ingrese nuevamente la hora: ";
        cin >> h;
    }
    hour = h;
}
void Time::setMinute(int min){
    while(min < 0 || min >= 60){
        cout << "Minuto invalido. Ingrese nuevamente el minuto: ";
        cin >> min;
    }
    minute = min;
}
void Time::setSecond(int sec){
    while(sec < 0 || sec >= 60){
        cout << "Segundo invalido. Ingrese nuevamente el segundo: ";
        cin >> sec;
    }
    second = sec;
}
void Time::setPeriod(string period){
    while(period != "a.m." && period != "p.m."){
        cout << "Periodo invalido. Ingrese a.m. o p.m.: ";
        cin >> period;
    }
    isAm = period == "a.m.";
}

int Time::getHour() const {return hour;}
int Time::getMinute() const {return minute;}
int Time::getSecond() const {return minute;}
string Time::getPeriod() const {
    if(isAm) return "a.m.";
    return "p.m.";
}

void Time::show12h() const {
    cout << setfill('0') << setw(2) << hour << "h, "
    << setw(2) << minute << "m, "
    << setw(2) << second << "s "
    << getPeriod() << endl;
}
void Time::show24h() const {
    int hour24 = hour;
    if(!isAm) hour24 = hour + 12;
    cout << setfill('0') << setw(2) << hour24 << "h, "
    << setw(2) << minute << "m, "
    << setw(2) << second << "s " << endl;
}
