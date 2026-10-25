/*
Ejercicio 3.cpp; Cajero automatico:
Menú: 1. Ver saldo, 2. Retirar, 3. Depositar. Muestra un mensaje según la opción elegida.

Valores de entrada: opcion (numero entero).
Proceso: Evaluar la opcion digitada por el usuario mediante una estructura condicional switch para determinar qué caso ejecutar.
Valores de salida: Mensaje en pantalla correspondiente a la acción seleccionada en el menu.
*/

//Formateamos la estructura principal de un programa en C++
#include <iostream>
using namespace std;

int main() {
    //Declaramos la variable que almacenara la eleccion del usuario.
    int opcion;

    //Imprimimos en pantalla las opciones disponibles del menu.
    cout << "Menu de Cajero Automatico" << endl;
    cout << "1. Ver saldo" << endl;
    cout << "2. Retirar" << endl;
    cout << "3. Depositar" << endl;
    cout << "Seleccione una opcion: ";

    //Leemos la variable `opcion`.
    cin >> opcion;

    //Iniciamos la estructura switch para evaluar el valor de `opcion`.
    switch (opcion) {
        //Primer caso: ver el saldo.
    case 1:
        cout << "Ha elegido ver su saldo actual" << endl;
        break;
        //Segundo caso: retirar dinero.
    case 2:
        cout << "Ha elegido retirar dinero" << endl;
        break;
        //Tercer caso: depositar dinero.
    case 3:
        cout << "Ha elegido depositar dinero" << endl;
        break;
        //Caso por descarte si el usuario digita una opcion fuera del rango (1-3).
    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    return 0; //Finalizamos.
}