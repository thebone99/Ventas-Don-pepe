#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Constante para definir el tamaño de los arreglos
    const int DIAS = 7;

    // Arreglos unidimensionales para las ventas y los nombres de los días
    double ventas[DIAS];
    string dias[DIAS] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    // 1. Ingreso de datos con validación para evitar ventas negativas
    cout << "=== REGISTRO DE VENTAS SEMANALES ===" << endl;
    for (int i = 0; i < DIAS; i++) {
        do {
            cout << "Ventas del " << dias[i] << ": RD$ ";
            cin >> ventas[i];

            if (ventas[i] < 0) {
                cout << "Error: La venta no puede ser negativa. Intente de nuevo." << endl;
            }
        } while (ventas[i] < 0);
    }

    // 2. Mostrar listado de ventas y calcular total, mayor y menor
    double total = 0;
    int indiceMayor = 0;
    int indiceMenor = 0;

    cout << "\n=== VENTAS DEL COLMADO DON PEPE ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 0; i < DIAS; i++) {
        cout << left << setw(12) << (dias[i] + ":") << "RD$ " << ventas[i] << endl;

        // Acumular el total vendido en la semana
        total += ventas[i];

        // Identificar el día con mayor venta
        if (ventas[i] > ventas[indiceMayor]) {
            indiceMayor = i;
        }

        // Identificar el día con menor venta
        if (ventas[i] < ventas[indiceMenor]) {
            indiceMenor = i;
        }
    }

    // 3. Calcular promedio y mostrar el resumen semanal
    double promedio = total / DIAS;

    cout << "\n=== RESUMEN SEMANAL ===" << endl
