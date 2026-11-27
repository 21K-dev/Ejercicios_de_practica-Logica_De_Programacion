#include <iostream>
using namespace std;

int main() {

	float Temperaturas[5]; 
	
	int tempPositivas = 0;
	int tempNegativas = 0;

	cout << "| Bienvenido a nuestra farmacia |\n Valoremos tus temperatuas.";
	
	for (int k = 0; k < 5; k++) {
	
		cout << "Ingrese la temperatura #" << (k + 1) << ": ";
		cin >> Temperaturas[k];

		if (Temperaturas[k] < 0) {

			tempNegativas++;

		}

		else {
			tempPositivas++;
		}

	}

	cout << "\nPositivas: " << tempPositivas<<endl;
	cout << "Negativas: " << tempNegativas;

	return 0;
}