#include <iostream>
#include <string>

using namespace std; 

int main() {

	int edad;
	string nombres, apellidos, nombre_completo, comida_fav;

	cout << "Hola Lokero, aqui estamos de nuenvo: Quiero que me digites tus datos personales." << endl;

	cout << "\n| DATOS PERSONALES |"<< endl;

	cout << "\nIngresame tus nombres pls: "; getline(cin, nombres);
	cout << "Ahora debes de ingresar tus apellidos (no te desesperes): "; getline(cin, apellidos);
	cout << "Ingresame tu tiempo de estadia en el server: "; cin >> edad; 
	
	nombre_completo = nombres + " " + apellidos;
	
	cin.ignore();
	
	cout << "\nAqui tienes tu nombre completo bro: " << nombre_completo<< endl;

	cout << "\nBien ahora que sabemos tu nombre completo... Me gustaria saber: que te agrada de comer?" << endl; getline(cin, comida_fav);
	
	cout << "\n Aqui tienes tu comida favorita: "<<comida_fav<< endl; 
	cout << "\n Y esta es tu edad: " << edad; 

	return 0;

}