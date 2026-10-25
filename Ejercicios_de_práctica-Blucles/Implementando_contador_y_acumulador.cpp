//Conceptos claves: Acumulador(se inizializa en 0) y contador,
#include <iostream>
using namespace std;

int main()
{
	int suma = 0;
	for (int i = 1; i <= 5; i++) {
		suma = suma + i;
		cout << i << " -> " << suma << endl;
	}
	cout << "Total: " << suma << endl;
}