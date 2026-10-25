/*
Ejercicio 5.cpp; Semaforo:
Segun la letra ingresada (R, A o V), mostrar el estado correspondiente: R = Detente, A = Precaucion, V = Avanza. Si se ingresa otra letra, indicar que no es valida.
Valores de entrada: letra (caracter).
Proceso: Evaluar el caracter ingresado mediante una estructura condicional multiple, contemplando su forma en mayuscula y minuscula con el operador logico OR (||) para determinar que mensaje mostrar.
Valores de salida: Estado o accion del semaforo en pantalla segun la condicion cumplida.
*/

//Formateamos la estructura principal del programa en C++.
#include <iostream>
using namespace std;

int main() {
    //Declaramos la variable de tipo caracter que utilizaremos, sin asignarle valor aun.
    char letra;

    //Leemos la variable `letra`.
    cout << "Ingrese la letra del semaforo (R, A o V): ";
    cin >> letra;

    //Empezamos un condicional multiple, declarando la primera condicion para el color rojo (en mayuscula o minuscula).
    if (letra == 'R' || letra == 'r') {
        //Imprimimos en pantalla la indicacion de detenerse.
        cout << "Detente" << endl;
    }

    //Continua la estructura condicional. Segunda condicion para el color amarillo.
    else if (letra == 'A' || letra == 'a') {
        //Imprimimos en pantalla la indicacion de precaucion.
        cout << "Precaucion" << endl;
    }

    //Tercera condicion de la estructura para el color verde.
    else if (letra == 'V' || letra == 'v') {
        //Imprimimos en pantalla la indicacion de avanzar.
        cout << "Avanza" << endl;
    }

    //Esta es la ultima condicion que se realiza por descarte de todas las anteriores.
    else {
        //Informamos al usuario que el caracter ingresado no corresponde a ninguna opcion.
        cout << "Letra no valida" << endl;
    }

    return 0; //Finalizamos.
}