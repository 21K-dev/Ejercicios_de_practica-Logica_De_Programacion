// Arreglos.cpp


#include <iostream>
using namespace std; 

int main()
{

	float notas[4];
		float suma = 0;

for (int i = 0;i < 4;i++) {

	cout << "Nota " << i + 1 << ": ";
	cin >> notas[i];
	suma += notas[i];
}

cout << "Promedio: " << suma / 4;

}
