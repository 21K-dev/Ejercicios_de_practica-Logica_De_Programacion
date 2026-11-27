// Libreria_Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
Eso fue culpa de eso mmgv.

#include <vector> 
std;; vector 

contenedor de la biblioteca standar.

indice en 0


declarar que tipo almacenara 

se puede reservar un tamaño aunque se pueden agregar mas despues.


funcion llamada v.at(#);
v.front();
v.back();


cuidado con una out of range;


Un vector no es mas que un arreglo pero se conforma de otra forma.
Puntero = apunta a posicion en memoria.


*/

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()

{

    vector<int> Soy_tu_vector = { 10, 20, 30 };

    Soy_tu_vector.push_back(40);
    Soy_tu_vector[0] = 15;
    Soy_tu_vector.insert(v.begin() + 1, 99);
    Soy_tu_vector.pop_back();
    

    cout << "Hello World!\n";

}
