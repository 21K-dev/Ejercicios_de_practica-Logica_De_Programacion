#include <iostream>
using namespace std;

int main()
{
	cout << "GESTION DE EMPLEADOS" << endl;
	int sueldo, promedio, suma = 0;
	for (int i = 1; i <= 4; i++) {
		cout << "Ingresa el monto de tu sueldo" << i << ": " << endl;
		cin >> sueldo;
		suma += sueldo;
	}
	promedio = suma / 4;
	cout << "\nTu sueldo promedio es: " << promedio << endl;
}