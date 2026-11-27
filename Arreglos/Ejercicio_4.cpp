#include <iostream>
using namespace std;

int main() {

	int Numeros[5], Buscado;
	bool estoyAqui = false;

	cout << "| Bienvenido a Finnnnd My Number |\n Ingresa tus 5 valores:";
	
	for (int k = 0; k < 5; k++) {

		cout << "Ingresa el valor #" << (k + 1) << ": ";
		cin >> Numeros[k];
	}

	cout << "Cual numero de los numeros buscas: "; cin >> Buscado;

	for (int k = 0; k < 5; k++) {

		if (Buscado == Numeros[k]) {

			estoyAqui = true;

		}
	}
	
	if (estoyAqui == true) { cout << "Este arreglo posee el numero buscado." << endl; }
	else { cout << "Este arreglo no posee el numero buscado." << endl; }

	return 0;
}