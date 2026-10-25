/*
Ejercicio 1.cpp; Par e impar.
Un programa debe determinar si un número es par o impar. (Pista: %)

Valores de entrada: numero.
Proceso: Plantear la condicion que al realizar la operación pista que esta en la asignación, demuestra que es un numero par o impar.
Valores de salida: afirmación en string.
*/

//Formateamos la estructura principal de un programa en C++
#include <iostream>
using namespace std;

int main() {
    cout << "Este programa le permite saber si un numero es par o impar.\n";

    //Declaramos la variable
    int numero;

    //Pedimos el valor de entrada.
    cout << "\nIngrese un numero: ";

    //Leemos el valor que digita el usuario.
    cin >> numero;

    /*
    Planteamos la condición doble,
    teniendo en cuenta de que el operador `%` es el MOD ó
    resto de una división entera. Esto nos permite dividir por 2 y
    matematicamente los números pares son divisibles entre 2 y no dejan residuo.
    */
    if (numero % 2 == 0) {
        cout << "El numero es par" << endl;
    }
    //Recordando que si la afirmación es falsa, se saltara if y ejecutara la sentencia de else.
    else {
        cout << "El numero es impar" << endl;
    }

    //Cierre del algorítmo.
    return 0;
}