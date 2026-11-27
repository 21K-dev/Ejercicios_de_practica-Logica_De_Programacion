#include <iostream>

using namespace std;

int main() {

	int num1, num2, suma, resta, multiplicacion; 
	double division;

	cout << "!Saludos Lokero! Este programa te permite saber las posibles operaciones entre dos numeros enteros de tu preferencia." <<endl;

	cout << "\n| INTRODUCE DOS NUMEROS A CONTINUACION|" << endl;
	cout << "\nNumero No.1: "; cin >> num1;
	cout << "Numero No.2: "; cin >> num2;
	
	
	cout << "\nTu numero " << num1 << " es " << ((num1 % 2 == 0) ? "par." : "impar.") << endl;
	cout << "\nTu numero " << num2 << " es " << ((num2 % 2 == 0) ? "par." : "impar.") << endl;

		suma = num1 + num2;
		resta = num1 - num2;
		multiplicacion = num1 * num2;
		division = num1 / num2;

		cout << "\n| VALORES OBTENIDOS |" << endl; 
	
		cout << "\nEl total de la suma estos numeros es: " << suma<<endl;
		cout << "El la diferencia de estos dos numeros es: " << resta << endl;
		cout << "La multipliacion de estos dos numeros es: " << multiplicacion << endl;
		cout << "La division entre estos numeros es: " << division << endl;

	
	return 0;

}