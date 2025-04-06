#include "CuentaBancaria.h"
#include "CajaDeAhorro.h"
#include "CuentaCorriente.h"

int main() {
    cajaDeAhorro caja("Javier Moon", 100.0);
    cuentaCorriente corriente("Javier Moon", 50.0);

    caja.depositar(50);
    corriente.depositar(100);

    caja.mostrarInfo();
    caja.mostrarInfo();
    caja.mostrarInfo();

    corriente.mostrarInfo();

    cout << "Retirando $120 desde cuenta corriente (usa ahorro si es necesario)..." << endl;
    corriente.retirar(120, caja);

    corriente.mostrarInfo();
    caja.mostrarInfo();

    cout << "Intentando retirar $200 (no hay fondos)..." << endl;
    corriente.retirar(200, caja);

    return 0;
}
