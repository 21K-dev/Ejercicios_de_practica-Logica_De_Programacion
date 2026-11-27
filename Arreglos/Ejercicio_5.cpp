#include <iostream>
using namespace std;

int main() {

	int Enteros[10]{ 0 };

	cout << "| Bienvenido a tu reverso de numeros |\n Te lo tiramos de alante para atras"<<endl;

	cout << "Ingresa los valores de tus enteros:"<<endl;

	for (int k = 0; k < 10; k++) {

		cout << "Valor #" << (k + 1) << ": ";
		cin >> Enteros[k];
	}

	for (int k = 9; k >= 0; k--) {

		cout << Enteros[k] << " ";

	}

	return 0;
}