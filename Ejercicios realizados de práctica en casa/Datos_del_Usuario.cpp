#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int main() {

	string Nombres;
	string Apellidos;
	string Nombre_completo;
	int Edad;
	float Estatura;

	cout << "Saludos Lokero, espero que te encuentres muy bien. Este programa me ayudara a saber tus datos personales." << endl;

	cout << "\n| INTRODUCE LOS SIGUIENTES DATOS |" << endl;

	cout << "Ingresa tus nombres: " ; getline(cin, Nombres);
	cout << "Ingresa tus apellidos: "; getline(cin, Apellidos);
	cout << "Ingresa tu edad: " ; cin >> Edad;
	cout << "Ingrese su estatura: " ; cin >> Estatura;

	Nombre_completo = Nombres + " " + Apellidos;

	cout << "\n!Bienvenido Lokero! Tu nombre es: " << Nombre_completo << ", tienes " << Edad << " anios y mides " << Estatura << " metros." << endl;


	return 0;
}