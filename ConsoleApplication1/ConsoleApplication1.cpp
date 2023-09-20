// P003_Variables.cpp : 
// Luis Disdem
// Este programa tendrá impresión de pantalla.
// Creación de variables
// Inicialización de variables
// Solicitud de variables al usuario

#include <iostream>
#include <string>


int main()
{
   
    //Variables
    //Tipo - Nombre - Inicialización
    bool mi_primer_booleano = true;
    int mi_primer_entero = 100;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100] = "Hola vato";
    std::string mi_primer_string = "Alo chavalitos";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos días Disdem espero estes bien\n";
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Solicitar al usuario cada una de las variables
    std::cout << "Usuario dame un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "Usuario dame un 0 o 100;" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "Usuario dime un numero entre 0.0 a 100.0;" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "Usuario dame un caracter;" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "Usuario dame una cadena de caracters;" <<
        std::endl;
    std::cin >> mi_primer_cadenacaracteres;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "Usuario dame un formato string;" <<
        std::endl;
    std::cin >> mi_primer_string;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;


    //Solicitar al usuario cada una de las variables

    // Realizar operaciones
    float a, b, d, c;
    a = 285;
    b = 5;
    d = a;
    c = a / b;
    std::cout << "El resultado de la division es: " << c << std::endl;
    c = a + b;
    std::cout << "El resultado de la suma es: " << c << std::endl;
    c = a - b;
    std::cout << "El resultado de la resta es: " << c << std::endl;
    c = a * b;
    std::cout << "El resultado de la multiplicacion es: " << c << std::endl;
    c = d * a;
    std::cout << "El resultado de la multiplicacion de caracteres es: " << c << std::endl;

}