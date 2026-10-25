#include <iostream>
using namespace std;

int main()
{
	cout << "GESTION DE EMPLEADOS_EMPRESA PEPÍN" << endl;
	int sueldo, suma = 0, promedio;
	for (int i = 1; i <= 10; i++) {
		cout << "\nIngresa el monto de tu sueldo, empleado No." << i << ": ";
		cin >> sueldo;
		suma += sueldo;
	}
	promedio = suma / 10;
	cout << "\nTu sueldo promedio es: " << promedio << endl;
}