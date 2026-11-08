// Calculo del ISR de un empleado
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldoMensual, sueldoAnual, isrAnual, isrMensual;

    cout << "Ingrese el sueldo mensual: RD$ ";
    cin >> sueldoMensual;

    // La escala de la DGII es anual
    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00) {
        isrAnual = 0;
    } else if (sueldoAnual <= 624329.00) {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;
    } else if (sueldoAnual <= 867123.00) {
        isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;
    } else {
        isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);
    cout << "Sueldo mensual: RD$ " << sueldoMensual << endl;
    if (isrAnual == 0) {
        cout << "ISR a descontar: 0 (N/A, no aplica)" << endl;
    } else {
        cout << "ISR a descontar: RD$ " << isrMensual << endl;
    }

    return 0;
}
