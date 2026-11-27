/*
Sintaxis_Y_Fundamentos_CPP.cpp
Manual de referencia practica de sintaxis en C++ desde los fundamentos hasta funciones y arreglos.

Valores de entrada: Numeros enteros, decimales, caracteres y cadenas de texto ingresados por teclado.
Proceso: Ejecucion secuencial de ejemplos demostrativos sobre espacios de nombres, tipos de datos,
         entrada/salida formateada, operadores, condicionales, bucles, arreglos y llamadas a funciones.
Valores de salida: Resultados de operaciones, estados condicionales, recorridos de arreglos y formatos en consola.

============================================================================================================
DONDE INVESTIGAR Y LEER DOCUMENTACION DE C++ DE FORMA PROFESIONAL
============================================================================================================
1. DevDocs (Visor rapido e indexado):
   https://devdocs.io/cpp/
   Recopila la documentacion estandar con buscador instantaneo y modo sin conexion.

2. CppReference (El estandar de la industria):
   https://en.cppreference.com/w/cpp
   Es la referencia tecnica definitiva donde estan todas las bibliotecas, funciones y versiones de C++.

3. Microsoft Learn (Documentacion oficial en espanol para Visual Studio / MSVC):
   https://learn.microsoft.com/es-es/cpp/cpp/
   Explica cada aspecto del lenguaje aplicado directamente al compilador de Visual Studio.

Consejo para leer documentacion en ingles:
- Busca primero los bloques: "Header" (que #include necesitas), "Parameters" (que datos recibe),
  "Return value" (que dato devuelve) y "Example" (codigo de prueba).
- "Undefined behavior (UB)" significa comportamiento indefinido (error critico de memoria o logica).
- "Deprecated" significa obsoleto (no usar en codigo nuevo).
*/


// ============================================================================================================
// 1. DIRECTIVAS DE PREPROCESADOR Y BIBLIOTECAS (#include)
// ============================================================================================================
// ¿Que es una directiva de preprocesador?
// Es una orden que empieza con el simbolo '#' y se ejecuta ANTES de que el compilador traduzca tu codigo.
// La directiva #include copia y pega el contenido de un archivo de encabezado dentro de tu archivo .cpp.
//
// ¿Que es una biblioteca (libreria)?
// Es un paquete de codigo preescrito (funciones, objetos y constantes) listo para reutilizar sin tener que
// programar todo desde cero. Existen dos tipos:
//   a) Bibliotecas estandar: Vienen integradas con C++ (ej. <iostream>, <string>, <cmath>).
//   b) Bibliotecas externas o de terceros: Creadas por la comunidad para graficos, redes, etc.
//
// Diferencia en la sintaxis de #include:
//   - Con corchetes angulares <nombre>: Le indica al compilador que busque el archivo en las carpetas del
//     sistema estandar de C++. Ejemplo: #include <iostream>
//   - Con comillas dobles "nombre.h": Le indica al compilador que busque primero dentro de la carpeta de
//     tu propio proyecto (para archivos creados por ti). Ejemplo: #include "MiCalculadora.h"
//
// Enlaces para investigar todas las bibliotecas de C++:
//   - Catalogo completo en CppReference: https://en.cppreference.com/w/cpp/header
//   - Directivas en Microsoft Learn:     https://learn.microsoft.com/es-es/cpp/preprocessor/hash-include-directive-c-cpp
//   - Encabezados estandar en espanol:   https://learn.microsoft.com/es-es/cpp/standard-library/cpp-standard-library-header-files

// Biblioteca de entrada y salida estandar: habilita 'cout' (imprimir), 'cin' (leer) y 'endl' (salto de linea).
// Documentacion: https://en.cppreference.com/w/cpp/header/iostream
#include <iostream>

// Biblioteca de manipuladores de formato: habilita 'fixed', 'setprecision(n)' y 'setw(n)' para dar formato a la salida.
// Documentacion: https://en.cppreference.com/w/cpp/header/iomanip
#include <iomanip>

// Biblioteca de cadenas de texto: habilita el tipo de dato 'string', la funcion 'getline()' y 'to_string()'.
// Documentacion: https://en.cppreference.com/w/cpp/header/string
#include <string>

// Biblioteca de configuracion regional: habilita 'setlocale()' para mostrar tildes y la letra ñ en la consola.
// Documentacion: https://en.cppreference.com/w/cpp/header/clocale
#include <clocale>

// Biblioteca matematica estandar: habilita funciones como 'pow(base, exp)' para potencias y 'sqrt(x)' para raiz cuadrada.
// Documentacion: https://en.cppreference.com/w/cpp/header/cmath
#include <cmath>


// ============================================================================================================
// 2. ESPACIOS DE NOMBRES (NAMESPACE Y USING NAMESPACE)
// ============================================================================================================
// ¿Que es un espacio de nombres (namespace)?
// Es un contenedor o carpeta logica que agrupa variables y funciones bajo un nombre propio para evitar que
// dos herramientas con el mismo identificador choquen entre si (colision de nombres).
//
// ¿Como se accede a algo que esta dentro de un namespace?
// Se utiliza el operador de resolucion de ambito '::' (dos puntos dobles).
// Sintaxis: NombreDelEspacio::elemento
//
// Formas de utilizar un namespace en cualquier situacion y con 'std' (el espacio de la biblioteca estandar):
//   Forma 1 (Explicita con '::'):
//     Escribir std::cout o MiEspacio::calcular() cada vez. Es la mas segura en proyectos grandes.
//   Forma 2 (Declaracion 'using' selectiva):
//     Escribir 'using std::cout;' al inicio para importar UNICAMENTE esa herramienta sin traer todo lo demas.
//   Forma 3 (Directiva 'using namespace' global):
//     Escribir 'using namespace std;' o 'using namespace MiEspacio;'. Abre el contenedor completo en este
//     archivo .cpp para usar todo su contenido sin escribir el prefijo 'std::' antes de cada instruccion.
//
// Enlaces para investigar a fondo los espacios de nombres:
//   - Microsoft Learn (en espanol): https://learn.microsoft.com/es-es/cpp/cpp/namespaces-cpp
//   - CppReference (namespace):     https://en.cppreference.com/w/cpp/language/namespace

// Ejemplo de como crear tu propio espacio de nombres personalizado para organizar constantes o funciones:
namespace ConfiguracionTienda {
    const double IMPUESTO_ITBIS = 0.18;

    double aplicarImpuesto(double monto) {
        return monto + (monto * IMPUESTO_ITBIS);
    }
}

// Habilitamos el espacio de nombres estandar 'std' para escribir cout, cin, string y endl directamente.
using namespace std;


// ============================================================================================================
// 3. FUNCIONES PERSONALIZADAS (PROTOTIPOS Y DECLARACIONES)
// ============================================================================================================
// ¿Que es una funcion?
// Es un bloque de codigo independiente que recibe datos (parametros), ejecuta una tarea especifica y
// opcionalmente devuelve un resultado. Sirve para dividir un problema grande en partes pequenas y reutilizables.
//
// ¿Como conviven las funciones con 'main()'?
// El compilador de C++ lee el archivo estrictamente de arriba hacia abajo. Si 'main()' intenta llamar a una
// funcion que aun no ha sido declarada arriba, ocurrira un error de compilacion.
// Existen dos formas de organizar tus funciones:
//   1. Escribir la funcion completa ANTES de 'main()'.
//   2. Escribir solo el PROTOTIPO (la firma terminada en punto y coma ';') antes de 'main()', y escribir el
//      desarrollo completo (DEFINICION) debajo de 'main()'. Esta segunda forma mantiene el archivo mas ordenado.
//
// Anatomia de la sintaxis de una funcion:
//   tipo_de_retorno nombreFuncion(tipo parametro1, tipo parametro2) {
//       // Instrucciones...
//       return valor_del_mismo_tipo;
//   }
//   - Si la funcion NO devuelve ningun dato (solo imprime en pantalla), su tipo de retorno es 'void'.
//
// Enlaces para investigar funciones en C++:
//   - Microsoft Learn (en espanol): https://learn.microsoft.com/es-es/cpp/cpp/functions-cpp
//   - CppReference (Functions):     https://en.cppreference.com/w/cpp/language/functions

// Prototipo 1: Funcion que recibe un sueldo (double) y retorna el sueldo mas un bono del 10% (double).
double calcularSueldoConBono(double sueldoBase);

// Prototipo 2: Funcion tipo 'void' (no retorna valores) que solo imprime un encabezado decorativo.
void mostrarEncabezadoSeccion(string titulo);

// Prototipo 3: Funcion que recibe un arreglo de enteros y su tamano para devolver el promedio como 'double'.
double calcularPromedioArreglo(int arreglo[], int tamano);


// ============================================================================================================
// 4. FUNCION PRINCIPAL: int main()
// ============================================================================================================
// Todo programa ejecutable (.exe) en C++ necesita obligatoriamente una unica funcion llamada 'main'.
// Es el punto exacto donde el sistema operativo inicia la ejecucion del programa de arriba hacia abajo.
//
// Desglose de su sintaxis:
//   - int:    Indica que al terminar, 'main' le devolvera un numero entero al sistema operativo.
//   - main:   Nombre reservado obligatorio que identifica el inicio del programa.
//   - ():     Parentesis de parametros (vacios cuando no recibe argumentos desde la consola de comandos).
//   - { }:    Llaves de apertura y cierre que delimitan el cuerpo de ejecucion principal.
//   - return 0;: Le informa al sistema operativo que el programa finalizo con exito (0 = sin errores).
//
// Enlaces para investigar la funcion main:
//   - Microsoft Learn (en espanol): https://learn.microsoft.com/es-es/cpp/cpp/main-function-command-line-args
//   - CppReference (main function): https://en.cppreference.com/w/cpp/language/main_function

int main() {
    // Configuramos la consola al inicio del main para que reconozca tildes y la letra ñ en espanol.
    setlocale(LC_ALL, "spanish");


    // ========================================================================================================
    // 5. VARIABLES, CONSTANTES, TIPOS DE DATOS Y NOMENCLATURA
    // ========================================================================================================
    // - Variable: Espacio reservado en la memoria RAM con un nombre y un tipo de dato, cuyo valor puede cambiar.
    // - Constante: Espacio en memoria bloqueado con la palabra 'const'; su valor no se puede modificar.
    //
    // Buena practica fundamental:
    // SIEMPRE inicializa tus variables al declararlas (ej. int x = 0;). Si declaras 'int x;' sin valor,
    // contendra "basura de memoria" (el valor residual que hubiera antes en esa celda de RAM), provocando
    // errores graves si intentas sumar o evaluar esa variable antes de leerla.
    //
    // Reglas para nombrar identificadores:
    //   1. Deben empezar con una letra (a-z, A-Z) o un guion bajo '_'. Nunca con un numero.
    //   2. No pueden llevar espacios en blanco ni simbolos especiales (@, -, $, %) ni tildes/ñ.
    //   3. C++ distingue entre mayusculas y minusculas ('edad' y 'Edad' son dos variables distintas).
    //   4. No se pueden usar palabras reservadas del lenguaje (int, return, if, while, switch).
    //
    // Enlaces para investigar tipos de datos y constantes:
    //   - Tipos fundamentales (Microsoft Learn): https://learn.microsoft.com/es-es/cpp/cpp/fundamental-types-cpp
    //   - Tabla de tipos (CppReference):         https://en.cppreference.com/w/cpp/language/types
    //   - Palabra clave const (Microsoft Learn): https://learn.microsoft.com/es-es/cpp/cpp/const-cpp

    // Tipo 'int' (4 bytes usualmente): Almacena numeros enteros positivos o negativos (sin decimales).
    // Estilo de nomenclatura simple:
    int edad = 20;

    // Tipo 'float' (4 bytes): Almacena decimales de precision simple (aprox. 6-7 digitos de precision).
    // Se coloca una 'f' al final del literal para indicar que es float y no double.
    // Estilo snake_case (palabras en minuscula separadas por guion bajo):
    float precio_producto = 19.99f;

    // Tipo 'double' (8 bytes): Almacena decimales de doble precision (aprox. 15 digitos). Es el estandar
    // recomendado en C++ para calculos financieros, fisicos o matematicos.
    double pi = 3.1415926535;

    // Tipo 'char' (1 byte): Almacena UN UNICO caracter ASCII. Su sintaxis exige comillas simples (' ').
    char inicial = 'A';

    // Tipo 'string' (de la biblioteca <string>): Almacena cadenas de texto. Exige comillas dobles (" ").
    // Estilo lowerCamelCase (primera palabra en minuscula, las siguientes inician con mayuscula):
    string nombreCliente = "Ana";

    // Tipo 'bool' (1 byte): Almacena valores logicos o booleanos. Solo acepta 'true' (1) o 'false' (0).
    bool esActivo = true;

    // Palabra reservada 'const': Convierte la variable en una constante de solo lectura.
    // Estilo UPPER_CASE (todo en mayusculas separadas por guion bajo, por convencion para constantes):
    const int EDAD_MINIMA = 18;


    // ========================================================================================================
    // 6. SALIDA DE DATOS EN PANTALLA Y FORMATO DE IMPRESION
    // ========================================================================================================
    // El objeto 'cout' representa la pantalla (consola) y el operador de insercion '<<' envia los datos
    // hacia ella. Se pueden encadenar multiples '<<' en una misma instruccion.
    //
    // Diferencia entre '\n' y 'endl':
    //   - '\n': Es una secuencia de escape que se escribe dentro de las comillas y solo baja de renglon.
    //           Es mas rapido y eficiente.
    //   - endl: Baja de renglon y ademas fuerza el vaciado del buffer de salida (flush).
    //
    // Otras secuencias de escape utiles dentro de comillas:
    //   - '\t': Inserta una tabulacion horizontal para alinear columnas.
    //   - '\"': Permite imprimir comillas dobles dentro de un texto sin cerrar el string.
    //
    // Enlaces para investigar salida y formato:
    //   - Objeto std::cout:              https://en.cppreference.com/w/cpp/io/cout
    //   - Manipuladores <iomanip>:       https://en.cppreference.com/w/cpp/io/manip
    //   - Secuencias de escape:          https://en.cppreference.com/w/cpp/language/escape

    // Llamamos a nuestra funcion 'void' para imprimir el titulo de esta seccion.
    mostrarEncabezadoSeccion("SALIDA DE DATOS Y FORMATO");

    // Impresion basica usando '\n' dentro del texto.
    cout << "Hola, mundo desde C++\n";

    // Impresion encadenando literales de texto, variables y 'endl' al final.
    cout << "Cliente: " << nombreCliente << " | Inicial: " << inicial << " | Activo: " << esActivo << endl;

    // Uso del espacio de nombres propio 'ConfiguracionTienda' creado arriba mediante el operador '::'.
    cout << "Precio con ITBIS (usando nuestro namespace): "
        << ConfiguracionTienda::aplicarImpuesto(precio_producto) << endl;

    // Alternativa heredada del lenguaje C: printf usa especificadores como %d (int), %.2f (float/double), %c (char).
    printf("Edad impresa con estilo printf: %d anios\n", edad);

    // Formato de decimales con <iomanip>: 'fixed' fija el punto decimal y 'setprecision(2)' muestra 2 decimales.
    // Esta configuracion queda activa para todos los 'cout' siguientes hasta que se cambie.
    cout << fixed << setprecision(2);
    cout << "Valor de Pi redondeado a 2 decimales: " << pi << endl;

    // Formato de ancho de columna: 'setw(10)' reserva 10 espacios y alinea el numero a la derecha.
    // A diferencia de setprecision, 'setw' solo afecta al valor inmediatamente siguiente.
    cout << "Numero alineado con ancho de 10 espacios:" << setw(10) << 25 << endl;


    // ========================================================================================================
    // 7. CONCATENACION Y CONVERSION DE CADENAS (STRING)
    // ========================================================================================================
    // Cuando el operador '+' se usa entre dos variables de tipo 'string', une (concatena) ambos textos.
    // C++ no permite sumar directamente un 'string' con un numero ('int' o 'double'); primero debes convertir
    // el numero a texto usando la funcion 'to_string(numero)' de la biblioteca <string>.
    //
    // Enlaces para investigar manejo de cadenas:
    //   - Clase std::string:             https://en.cppreference.com/w/cpp/string/basic_string
    //   - Funcion std::to_string:        https://en.cppreference.com/w/cpp/string/basic_string/to_string

    // Declaramos un segundo texto y lo unimos con un espacio en blanco en medio.
    string apellido = "Perez";
    string nombreCompleto = nombreCliente + " " + apellido;

    // Convertimos la variable entera 'edad' a texto con to_string() para unirla al mensaje.
    string mensajePresentacion = "Hola " + nombreCompleto + ", tienes " + to_string(edad) + " anios.";
    cout << mensajePresentacion << endl;


    // ========================================================================================================
    // 8. ENTRADA DE DATOS POR TECLADO (cin, cin.ignore y getline)
    // ========================================================================================================
    // El objeto 'cin' representa el teclado y el operador de extraccion '>>' toma lo que el usuario escribe
    // y lo guarda en la variable.
    //
    // Regla critica sobre el buffer del teclado (cin >> vs getline):
    //   1. 'cin >> variable' lee datos hasta encontrar el primer espacio, tabulacion o Enter ('\n').
    //      Por eso NO sirve para leer frases con espacios, y ademas deja el caracter Enter ('\n') flotando
    //      en el buffer de memoria.
    //   2. 'getline(cin, variableTexto)' lee toda la linea completa incluyendo espacios hasta encontrar un Enter.
    //   3. Si usas 'cin >>' y justo despues usas 'getline()', el 'getline' leera el Enter viejo que dejo 'cin >>'
    //      y se saltara la pregunta. Para evitarlo, SIEMPRE se coloca 'cin.ignore();' en medio de los dos.
    //
    // Enlaces para investigar lectura de datos:
    //   - Objeto std::cin:               https://en.cppreference.com/w/cpp/io/cin
    //   - Funcion cin.ignore():          https://en.cppreference.com/w/cpp/io/basic_istream/ignore
    //   - Funcion std::getline():        https://en.cppreference.com/w/cpp/string/basic_string/getline

    mostrarEncabezadoSeccion("ENTRADA DE DATOS POR TECLADO");

    // Inicializamos las variables de lectura en 0.0 y texto vacio para evitar basura en memoria.
    double n1 = 0.0;
    double n2 = 0.0;
    string carrera = "";

    // Pedimos dos numeros y encadenamos la lectura con 'cin >>'. El usuario puede separarlos con espacio o Enter.
    cout << "Ingresa dos numeros separados por espacio (ej. 10 20): ";
    cin >> n1 >> n2;

    // Limpiamos el salto de linea ('\n') que quedo pendiente en el buffer tras usar 'cin >>'.
    cin.ignore();

    // Leemos una cadena de texto completa que puede contener espacios en blanco usando getline().
    cout << "Ingresa el nombre completo de tu carrera: ";
    getline(cin, carrera);
    cout << "Carrera registrada: " << carrera << endl;


    // ========================================================================================================
    // 9. OPERADORES, LINEALIZACION Y LLAMADA A FUNCIONES
    // ========================================================================================================
    // En C++, las expresiones matematicas se escriben en una sola linea (linealizacion). El compilador
    // evalua primero los parentesis '()', luego multiplicacion/division/modulo (*, /, %) y al final suma/resta (+, -).
    //
    // Tipos de operadores principales:
    //   A) Aritmeticos:
    //      + (suma), - (resta), * (multiplicacion), / (division), % (modulo o residuo de division entera).
    //      Nota sobre '/': Si divides dos enteros (ej. 5 / 2), C++ trunca los decimales y da 2. Para obtener
    //      decimales (2.5), al menos uno de los operandos debe ser decimal (ej. 5 / 2.0).
    //   B) Asignacion compuesta e incremento:
    //      x += 5 (equivale a x = x + 5), x -= 3, x *= 2, x /= 2.
    //      i++ (incrementa en 1), i-- (disminuye en 1).
    //   C) Relacionales (Comparacion):
    //      == (igual a), != (diferente de), > (mayor que), < (menor que), >= (mayor o igual), <= (menor o igual).
    //      Siempre devuelven un valor booleano: true (1) o false (0).
    //   D) Logicos (Combinan condiciones):
    //      1ro en prioridad: !  (NOT / Negacion: invierte true a false y viceversa).
    //      2do en prioridad: && (AND / Y logico: devuelve true SOLO si ambas condiciones son verdaderas).
    //      3ro en prioridad: || (OR  / O logico: devuelve true si AL MENOS UNA condicion es verdadera).
    //
    // Enlaces para investigar operadores y precedencia:
    //   - Tabla oficial en Microsoft Learn: https://learn.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity
    //   - Operadores en CppReference:       https://en.cppreference.com/w/cpp/language/expressions

    mostrarEncabezadoSeccion("OPERADORES Y FUNCIONES");

    // Calculamos suma, promedio (usando parentesis para sumar antes de dividir) y potencia con pow() de <cmath>.
    double suma = n1 + n2;
    double promedio = (n1 + n2) / 2.0;
    double cuadradoPrimerNumero = pow(n1, 2);

    // El operador '%' (modulo) solo admite numeros enteros y devuelve lo que sobra de una division.
    int residuo = 10 % 3;

    cout << "Suma: " << suma << " | Promedio: " << promedio << endl;
    cout << "Primer numero al cuadrado: " << cuadradoPrimerNumero << " | Residuo de 10 % 3: " << residuo << endl;

    // Demostracion de operadores de asignacion compuesta.
    int contador = 5;
    contador += 10;
    contador *= 2;
    cout << "Valor del contador tras sumar 10 y multiplicar por 2: " << contador << endl;

    // Evaluacion con operadores relacionales y logicos.
    bool tieneCarnet = true;
    bool puedeConducir = (edad >= EDAD_MINIMA && tieneCarnet);
    cout << "¿Cumple requisitos para conducir? (1=Si, 0=No): " << puedeConducir << endl;

    // Llamamos a nuestra funcion 'calcularSueldoConBono' enviandole 'n1' como argumento y guardamos su retorno.
    double n1ConBono = calcularSueldoConBono(n1);
    cout << "Resultado de la funcion calcularSueldoConBono sobre tu primer numero: " << n1ConBono << endl;


    // ========================================================================================================
    // 10. ESTRUCTURAS SELECTIVAS O CONDICIONALES
    // ========================================================================================================
    // Permiten que el programa tome decisiones y bifurque su camino segun una condicion booleana.
    //
    // Reglas importantes:
    //   - Para comparar igualdad dentro de un 'if', usa SIEMPRE doble igual '=='. Si escribes un solo '='
    //     (ej. if (x = 5)), estaras asignando el 5 a x y la condicion sera siempre verdadera (error logico).
    //   - En condicionales multiples (if - else if - else), ordena los rangos desde el mas exigente/especifico
    //     hacia el mas general. En cuanto una condicion se cumple, C++ ignora todas las demas de esa cadena.
    //   - La estructura 'switch' evalua una unica variable discreta (SOLO admite tipos 'int', 'char' o 'enum';
    //     NO admite 'double', 'string' ni rangos como '>= 10'). Cada 'case' debe cerrarse con 'break;'.
    //
    // Enlaces para investigar condicionales:
    //   - Condicionales en Microsoft Learn: https://learn.microsoft.com/es-es/cpp/cpp/selection-statements-cpp
    //   - Instruccion if (CppReference):    https://en.cppreference.com/w/cpp/language/if
    //   - Instruccion switch (CppReference):https://en.cppreference.com/w/cpp/language/switch

    mostrarEncabezadoSeccion("ESTRUCTURAS CONDICIONALES");

    // 10.1 Condicional simple (if): Solo actua si la condicion es verdadera.
    int stock = 3;
    if (stock < 5) {
        cout << "Alerta de inventario: Quedan pocas unidades en stock." << endl;
    }

    // 10.2 Condicional doble (if - else): Toma uno de dos caminos posibles.
    int nota = 65;
    if (nota >= 70) {
        cout << "Estado con if-else: Aprobado" << endl;
    }
    else {
        cout << "Estado con if-else: Reprobado" << endl;
    }

    // 10.3 Operador ternario (? :): Forma compacta de un if-else simple para asignar o imprimir un valor.
    // Sintaxis: (condicion) ? valor_si_true : valor_si_false;
    string estadoTernario = (nota >= 70) ? "Aprobado" : "Reprobado";
    cout << "Estado con operador ternario: " << estadoTernario << endl;

    // 10.4 Condicional multiple (if - else if - else): Evalua rangos en cascada.
    int calificacion = 85;
    if (calificacion >= 90) {
        cout << "Calificacion literal: A (Excelente)" << endl;
    }
    else if (calificacion >= 80) {
        cout << "Calificacion literal: B (Muy bueno)" << endl;
    }
    else if (calificacion >= 70) {
        cout << "Calificacion literal: C (Aprobado)" << endl;
    }
    else {
        cout << "Calificacion literal: F (Reprobado)" << endl;
    }

    // 10.5 Condicionales anidados (un if dentro de otro if) y logica compuesta (anio bisiesto).
    int anio = 2024;
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El anio " << anio << " es bisiesto." << endl;
    }
    else {
        cout << "El anio " << anio << " no es bisiesto." << endl;
    }

    // 10.6 Estructura switch con validacion interna y agrupacion de casos (caida intencional sin break).
    char operador = '/';
    double valorA = 10.0;
    double valorB = 2.0;

    switch (operador) {
    case '+':
        cout << "Switch suma: " << (valorA + valorB) << endl;
        break;
    case '-':
        cout << "Switch resta: " << (valorA - valorB) << endl;
        break;
    case '*':
        cout << "Switch multiplicacion: " << (valorA * valorB) << endl;
        break;
    case '/':
        // Validamos dentro del case que el divisor no sea cero antes de dividir.
        if (valorB != 0) {
            cout << "Switch division: " << (valorA / valorB) << endl;
        }
        else {
            cout << "Error matematico: No se puede dividir entre cero." << endl;
        }
        break;
    default:
        cout << "Operador no reconocido." << endl;
        break;
    }

    // Agrupacion de casos en switch: varios 'case' comparten una misma respuesta.
    char letra = 'e';
    switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "La letra '" << letra << "' es una vocal." << endl;
        break;
    default:
        cout << "La letra '" << letra << "' es una consonante." << endl;
        break;
    }


    // ========================================================================================================
    // 11. ESTRUCTURAS REPETITIVAS O BUCLES (for, while, do-while)
    // ========================================================================================================
    // Permiten repetir un bloque de instrucciones mientras una condicion logica se mantenga verdadera.
    //
    // Conceptos esenciales dentro de un bucle:
    //   - Contador: Variable entera que aumenta o disminuye en un paso fijo cada vuelta (ej. i++, k--).
    //   - Acumulador: Variable inicializada en 0 antes del bucle que suma valores variables en cada vuelta
    //                 (ej. sumaTotal += sueldo;).
    //   - Centinela: Valor especial (ej. 0 o -1) que el usuario ingresa para indicar que desea salir del bucle.
    //   - Instruccion 'break': Corta y sale del bucle inmediatamente.
    //   - Instruccion 'continue': Salta el resto de la vuelta actual y pasa directo a evaluar la siguiente vuelta.
    //
    // ¿Cuando elegir cada bucle?
    //   1. Bucle 'for': Cuando SABES de antemano cuantas veces exactas se repetira el ciclo (o para recorrer arreglos).
    //      Sintaxis: for (inicializacion; condicion_limite; actualizacion) { ... }
    //   2. Bucle 'while': Cuando NO sabes cuantas veces se repetira; evalua la condicion ANTES de entrar.
    //      Si la condicion es falsa desde el inicio, el bloque no se ejecuta ni una sola vez.
    //   3. Bucle 'do-while': Evalua la condicion al FINAL de la vuelta. Garantiza que el codigo se ejecute
    //      AL MENOS UNA VEZ (ideal para menus interactivos o validar datos de entrada).
    //
    // Enlaces para investigar bucles:
    //   - Bucles en Microsoft Learn:     https://learn.microsoft.com/es-es/cpp/cpp/iteration-statements-cpp
    //   - Bucle for (CppReference):      https://en.cppreference.com/w/cpp/language/for
    //   - Bucle while (CppReference):    https://en.cppreference.com/w/cpp/language/while
    //   - Bucle do-while (CppReference): https://en.cppreference.com/w/cpp/language/do

    mostrarEncabezadoSeccion("ESTRUCTURAS REPETITIVAS (BUCLES)");

    // 11.1 Bucle FOR ascendente (del 1 al 5) con variable acumuladora.
    int sumaAcumulada = 0;
    for (int i = 1; i <= 5; i++) {
        sumaAcumulada += i;
        cout << "Vuelta " << i << " -> Acumulado parcial: " << sumaAcumulada << endl;
    }
    cout << "Suma total acumulada: " << sumaAcumulada << endl;

    // 11.2 Bucle FOR descendente (cuenta regresiva del 5 al 1 usando decremento k--).
    cout << "Cuenta regresiva con for: ";
    for (int k = 5; k >= 1; k--) {
        cout << k << " ";
    }
    cout << endl;

    // 11.3 Bucle WHILE controlado por valor centinela (0 para terminar).
    int numeroLeido = 0;
    cout << "\n--- Prueba de Bucle WHILE (Ingresa 0 para salir) ---" << endl;
    cout << "Ingresa un numero entero: ";
    cin >> numeroLeido;

    while (numeroLeido != 0) {
        cout << "Numero procesado: " << numeroLeido << endl;
        cout << "Ingresa otro numero (0 para salir): ";
        cin >> numeroLeido;
    }

    // 11.4 Bucle DO-WHILE: Se ejecuta al menos una vez antes de revisar la condicion en el 'while' final.
    // Lleva obligatoriamente un punto y coma ';' despues del parentesis de la condicion.
    int opcionMenu = 0;
    do {
        cout << "\n--- Menu Rápido DO-WHILE ---" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Salir del menu" << endl;
        cout << "Elige una opcion: ";
        cin >> opcionMenu;

        if (opcionMenu == 1) {
            cout << "Hola, estas dentro de un ciclo do-while." << endl;
        }
    } while (opcionMenu != 2);


    // ========================================================================================================
    // 12. ARREGLOS UNIDIMENSIONALES (VECTORES ESTATICOS)
    // ========================================================================================================
    // ¿Que es un arreglo (array)?
    // Es una estructura de datos que almacena una coleccion fija de elementos DEL MISMO TIPO en bloques
    // contiguos de memoria RAM bajo un unico nombre.
    //
    // Reglas fundamentales de la sintaxis de arreglos:
    //   1. Declaracion: tipo_dato nombreArreglo[TAMANO_CONSTANTE];
    //      El tamano de un arreglo estatico en C++ estandar debe ser un numero fijo o una constante ('const int').
    //   2. Indices (Posiciones):
    //      En C++, los arreglos SIEMPRE empiezan a contarse desde la posicion 0 (cero-indexados).
    //      Si un arreglo tiene tamano N, su primer elemento es arreglo[0] y su ULTIMO elemento es arreglo[N - 1].
    //   3. Peligro de desbordamiento (Out of bounds / Undefined Behavior):
    //      Si declaras 'int notas[4];', las posiciones validas son 0, 1, 2 y 3. Si intentas escribir en 'notas[4]',
    //      estaras invadiendo memoria ajena fuera del arreglo y el programa puede colapsar.
    //   4. Recorrido con bucle 'for':
    //      La condicion del 'for' siempre debe ser 'int i = 0; i < TAMANO; i++' (usando '<' estricto y nunca '<=').
    //
    // Enlaces para investigar arreglos en C++:
    //   - Arreglos en Microsoft Learn:   https://learn.microsoft.com/es-es/cpp/cpp/arrays-cpp
    //   - Arreglos en CppReference:      https://en.cppreference.com/w/cpp/language/array

    mostrarEncabezadoSeccion("ARREGLOS UNIDIMENSIONALES");

    // Forma A: Declarar e inicializar un arreglo en la misma linea con llaves { }.
    int edadesGrupo[5] = { 18, 21, 19, 25, 20 };
    cout << "Primer elemento del arreglo predefinido (indice 0): " << edadesGrupo[0] << endl;
    cout << "Ultimo elemento del arreglo predefinido (indice 4): " << edadesGrupo[4] << endl;

    // Forma B: Definir una constante para el tamano, declarar el arreglo en 0 y llenarlo con el teclado.
    const int CANTIDAD_NOTAS = 4;
    int notasEstudiante[CANTIDAD_NOTAS] = { 0 };

    // Usamos un bucle 'for' desde i = 0 hasta i < CANTIDAD_NOTAS para pedir cada valor al usuario.
    cout << "\nIngresa las " << CANTIDAD_NOTAS << " calificaciones del estudiante:" << endl;
    for (int i = 0; i < CANTIDAD_NOTAS; i++) {
        cout << "Digita la calificacion para la posicion [" << i << "] (Nota #" << (i + 1) << "): ";
        cin >> notasEstudiante[i];
    }

    // Recorremos el arreglo para mostrar todos sus datos y encontrar la nota mas alta (algoritmo de maximo).
    // Inicializamos 'notaMayor' con el primer elemento del arreglo (indice 0) como punto de comparacion.
    int notaMayor = notasEstudiante[0];

    cout << "\nListado de calificaciones guardadas en el arreglo:" << endl;
    for (int i = 0; i < CANTIDAD_NOTAS; i++) {
        cout << "Posicion [" << i << "] = " << notasEstudiante[i] << endl;

        // Si la nota de la vuelta actual supera a 'notaMayor', actualizamos el valor de 'notaMayor'.
        if (notasEstudiante[i] > notaMayor) {
            notaMayor = notasEstudiante[i];
        }
    }

    // Enviamos el arreglo y su tamano a nuestra funcion personalizada para obtener el promedio.
    double promedioNotas = calcularPromedioArreglo(notasEstudiante, CANTIDAD_NOTAS);

    cout << "Calificacion mas alta encontrada: " << notaMayor << endl;
    cout << "Promedio general del arreglo (calculado mediante funcion): " << promedioNotas << endl;

    // Retornamos 0 indicando que todo el manual de sintaxis se ejecuto sin errores.
    return 0;
}


// ============================================================================================================
// 13. DEFINICION (IMPLEMENTACION) DE LAS FUNCIONES PERSONALIZADAS
// ============================================================================================================
// Aqui desarrollamos el cuerpo de las funciones cuyos prototipos declaramos arriba de 'main()'.

// Definicion de la Funcion 1: Recibe el sueldo base, le suma un 10% y retorna el resultado final.
double calcularSueldoConBono(double sueldoBase) {
    double montoBono = sueldoBase * 0.10;
    double sueldoTotal = sueldoBase + montoBono;
    return sueldoTotal;
}

// Definicion de la Funcion 2: Recibe un texto y lo imprime enmarcado en consola. No lleva 'return' porque es 'void'.
void mostrarEncabezadoSeccion(string titulo) {
    cout << "\n============================================================" << endl;
    cout << "  " << titulo << endl;
    cout << "============================================================" << endl;
}

// Definicion de la Funcion 3: Recibe un arreglo de enteros y su cantidad de elementos, suma todo y devuelve el promedio.
// Nota tecnica: Cuando pasas un arreglo a una funcion en C++, siempre debes pasar tambien su tamano en otro parametro.
double calcularPromedioArreglo(int arreglo[], int tamano) {
    int sumaElementos = 0;

    for (int i = 0; i < tamano; i++) {
        sumaElementos += arreglo[i];
    }

    // Convertimos la division a 'double' multiplicando por 1.0 o usando static_cast<double> para no perder decimales.
    return static_cast<double>(sumaElementos) / tamano;
}