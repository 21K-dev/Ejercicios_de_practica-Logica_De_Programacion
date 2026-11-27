#include <iostream>
using namespace std;

int main() {
    
    int Ventas[6], sumaTotal = 0;

    cout << "| La tienda Pablina |\nCalcule su monto total de venta." << endl;

    for (int k = 0; k < 6; k++) {
        cout << "Ingrese el monto de la venta #" << (k + 1) << ": ";
        cin >> Ventas[k];

        sumaTotal += Ventas[k];
    }

    cout << "\nEl total de ventas es: " << sumaTotal << endl;

    return 0;
}