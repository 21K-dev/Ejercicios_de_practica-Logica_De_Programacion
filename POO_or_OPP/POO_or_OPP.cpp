/*
#include <iostream>
#include <string>
using namespace std;

class Book {

public:
	string title;
	string author;
	int year;
};

int main() {

	Book Anos100;
	Anos100.title = "La Familia Buen Dia";
	Anos100.author = "Gabriel Garcia Márquez";
	Anos100.year = 1967;

	Book AlasDeFuego;
	AlasDeFuego.title = "Alas_De_Fuego";
	AlasDeFuego.author = "Rebbeca Yarros";
	AlasDeFuego.year = 2019;

	cout << Anos100.title << ", " << Anos100.author << ", " << Anos100.year << "\n" << endl;
	cout << AlasDeFuego.title << ", " << AlasDeFuego.author << ", " << AlasDeFuego.year << "\n" << endl;


	return 0;

}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Dog {
	
public:
	
	void Bark() {
		cout << "Wolf!";
	}

};


int main() {
	Dog miPerro;

	miPerro.Bark();

	return 0;

}
*/

/*

#include <iostream>
#include <string>
using namespace std;

class NPC {        // The class
public:          // Access specifier
	string Color;  // Attribute
	string Genero;  // Attribute
	int Edad;      // Attribute

	NPC(string x, string y, int z) { // Constructor with parameters
		Color = x;
		Genero = y;
		Edad = z;
	}
};

int main() {
	// Create Car objects and call the constructor with different values
	NPC CJ("Negro", "Hombre", 21);
	NPC Homero("Amarillo", "Hombre", 57);
	NPC Eren("Carton", "Hombre", 19);


	cout << CJ.Color << ", " << CJ.Genero << ", " << CJ.Edad << ", " << "\n" << endl;
	cout << Homero.Color << ", " << Homero.Genero << ", " << Homero.Edad << ", " << "\n" << endl;
	cout << Eren.Color << ", " << Eren.Genero << ", " << Eren.Edad << ", " << "\n" << endl;



	// Print values


	return 0;
}

*/

/*

#include <iostream>
#include <string>
using namespace std;

class Reloj {
public:

	string Color, Marca, Modelo;
	int Tamano;

	int Tamano(int x) {

		Tamano = x;
}

	void Saludos() {

		cout << "\n\tTe saludo desde el llamado de la clase 'Reloj'\n" << endl;
	}

	Reloj(){
		Color = "Desconocido";
		Marca = "Desconocido";
		Modelo = "Desconocido";
		Tamano = 0;
	}

	Reloj(string x, string y, string z, int w) {
		Color = x;
		Marca = y;
		Modelo = z;
		Tamano = w;
	}
};


int main() {

	Reloj item1;
	Reloj item2("Gris", "Casio", "f91w", 17);

	item1.Saludos();

	cout << "Item 1: " << item1.Color << ", " << item1.Marca << ", " << item1.Modelo << ", " << item1.Tamano<< endl;
	cout << "Item 2: " << item2.Color << ", " << item2.Marca << ", " << item2.Modelo << ", " << item2.Tamano << endl;
	return 0;

}

*/



#include <iostream>
#include <string>
using namespace std;

class Entidades {
public:

	string tipo, nombre, color;
	int vida, numArmas;

	Entidades() {
		cout << "\n\tTe saludo desde la clase que he creado" << endl;
	}

	~Entidades() {
		cout << "\n\tMe despido desde la clase que he destruido" << endl;
	}

};

int main() {

	Entidades E1;
	E1.tipo = "Zombie";
	E1.nombre = "Ahogado";

	cout << "La entidad No.1 es uns:" << E1.tipo << ", " << E1.nombre << ", " << endl;
	return 0;
}
