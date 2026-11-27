#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "Este programa leera tus numeros hasta que ingreses el 0";
	cout << "\nIngrese un numero: ";
	cin >> numero; 

	while (numero != 0) {
		cout << "Ingresaste: " << numero << endl;
		cout << "\nIngrese otro numero: ";
		cin >> numero;
	}
		
	cout << "\nFin del programa" << endl;
	
	return 0;
}
