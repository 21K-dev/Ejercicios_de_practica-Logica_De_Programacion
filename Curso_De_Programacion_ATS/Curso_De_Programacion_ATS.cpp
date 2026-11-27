// Curso_De_Programacion_ATS.cpp

#include <iostream>
using namespace std;

int main() {

	cout << "Hola mundo! :D" << endl;

	int Entero = 100200;
	float Decimales = 5.66234563797976435435435;
	double DECIMALES_MAS_LARGOS = 3.141627291232132132135323543354547654;

	char una_sola_letra= 'P';
	string Caracteres =  "Tu querida madre :D";

	bool TrueFalse = true;

	
	cout << "\nEste es tu amado entero: " << Entero<<endl;
	cout << "\nEstos son tus putos decimales: " << Decimales<<endl;
	cout << "\nEste es tu double completo con piiiiiiiiii: " << DECIMALES_MAS_LARGOS<<endl;
	cout << "\nEste es tu char: " << una_sola_letra<<endl; 
	cout << "\nEste es tu maravilloso string: " << Caracteres<<endl;
	cout << "\nEste es tu bool: " << TrueFalse<<endl;

	int ValorQueLeDeSuGana;

	cout << "\nDame el valor que te de tu gana: "; cin >> ValorQueLeDeSuGana;
	cout << "\nEste fue el valor que te dio tu gana: " << ValorQueLeDeSuGana;
 
	return 0;
}