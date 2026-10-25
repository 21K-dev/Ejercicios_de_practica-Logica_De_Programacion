/*
Ejercicio 4.cpp; Mayor de tres números:
Lee tres números distintos y muestra cuál es el mayor.

Valores de entrada: n1, n2, n3 (números).
Proceso: Comparar los tres números mediante una estructura condicional para determinar cuál es el mayor.
Valores de salida: El número mayor impreso en pantalla.
*/

//Formateamos la estructura principal de un programa en C++
#include <iostream>
using namespace std;

int main() {
    //Declaramos las variables a utilizar para los tres numeros.
    double n1, n2, n3;

    //Leemos el primer numero.
    cout << "Ingrese el primer numero: ";
    cin >> n1;

    //Leemos el segundo numero.
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    //Leemos el tercer numero.
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    //Evaluamos si el primer numero es mayor que los otros dos.
    if (n1 > n2 && n1 > n3) {
        cout << "El mayor es: " << n1 << endl;
    }
    //Si el primero no es el mayor, evaluamos si el segundo es mayor que los demas.
    else if (n2 > n1 && n2 > n3) {
        cout << "El mayor es: " << n2 << endl;
    }
    //Por descarte de las condiciones anteriores, el tercero es el mayor.
    else {
        cout << "El mayor es: " << n3 << endl;
    }

    return 0; //Finalizamos.
}