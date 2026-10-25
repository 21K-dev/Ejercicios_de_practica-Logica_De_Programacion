// Tablas_de_Multiplicacion.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main(){
	
	int numero;
	cout << "Imprimir la tabla de multiplicacion de tu numero preferido en pantalla\n" << endl;
	cout << "Digita el numero que deseas observar: ";
	cin >> numero;

	for (int k = 1; k <= 12; k++) {
		cout << numero << "x" << k << " = " << (numero * k) << endl;

	}

	return 0;
}