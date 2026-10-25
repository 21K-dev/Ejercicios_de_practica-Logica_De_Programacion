// Ejercicios_de_práctica-Blucles.cpp : Función principal (main) donde inicia la ejecución del programa.

#include <iostream>
using namespace std;

int main()
{
	
	cout << "GESTION DE EMPLEADOS_EMPRESA PEPÍN" << endl;

	
	int empleados;
	double sueldo, suma = 0, promedio;

	
	cout << "\nIngresa la cantidad de empleados que posee: ";
	cin >> empleados;

	
	for (int i = 1; i <= empleados; i++) {

		
		cout << "\nIngresa el monto de tu sueldo, empleado No." << i << ": ";
		cin >> sueldo;

		
		suma += sueldo;
	}

	
	promedio = suma / empleados;

	
	cout << "\nTu sueldo promedio es: " << promedio << endl;

	return 0;
}