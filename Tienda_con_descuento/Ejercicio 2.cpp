/*
Ejercicio 2.cpp; Tienda con descuento:
Compra ≥ 5000: 10 % de descuento. Compra ≥ 3000: 8 %. Menos de 3000: no aplica. Muestra el monto y el descuento aplicado, o que no aplica.

Valores de entrada: monto (numero).
Proceso: El proceso es operar las variables en curso, demarcando las operaciones que reflejaran el monto final luego del descuento.
Valores de salida: Monto rebajado a un % condicionalmente.
*/

//Formateamos la estructura principal de un programa en C++ (a partir de este ejercicio explicare dicha estructura)...
#include <iostream>
using namespace std;

int main() {
    //Declaramos las variables a utilizar, ninguna sera asignada aun.
    double compra, descuento, montoFinal;

    //Leemos la variable `compra`.
    cout << "Ingrese el monto de la compra: ";
    cin >> compra;

    //Empezamos un condicional multiple, declarando la primera condición establecida por la tienda.
    if (compra >= 5000) {
        //Se cálcula el descuento.
        descuento = compra * 0.10;
        //Se realiza la operación para obtener nuestro monto final, una diferencia.
        montoFinal = compra - descuento;
        //Imprimimos en pantalla el monto original.
        cout << "Monto original: " << compra << endl;
        //Valor del descuento.
        cout << "Descuento aplicado: " << descuento << endl;
        //Monto final en pantalla.
        cout << "Monto final a pagar: " << montoFinal << endl;
    }

    //Continua la estructura condicional. Segunda condicion.
    else if (compra >= 3000) {
        //Descuento aplicado.
        descuento = compra * 0.08;
        //Obtención del monto final.
        montoFinal = compra - descuento;

        //Imprimimos en pantalla las informaciones.
        cout << "Monto original: " << compra << endl;
        cout << "Descuento aplicado: " << descuento << endl;
        cout << "Monto final a pagar: " << montoFinal << endl;
    }

    //Esta es la ultima condición que se ha realizado por descarte de las dos anteriores.
    else {
        //Informamos al cliente sobre su caso.
        cout << "Monto: " << compra << endl;
        cout << "No aplica descuento" << endl;
    }

    return 0; //Finalizamos.
}