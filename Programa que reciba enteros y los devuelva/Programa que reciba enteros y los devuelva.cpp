// Programa que reciba enteros y los devuelva.cpp 

#include <iostream>

int main() {
    char respuesta;

    do {
        int numero;

        std::cout << "Ingrese un numero entre 0 y 999: ";
        std::cin >> numero;

        if (numero < 0 || numero > 999) {
            std::cout << "El numero ingresado esta fuera del rango. Intenta de nuevo." << std::endl;
            continue;
        }

        int centenas = numero / 100;
        int residuo = numero % 100;
        int decenas = residuo / 10;
        int unidades = residuo % 10;

        std::cout << "El numero ingresado es: " << numero << std::endl;
        std::cout << "Centenas: " << centenas << std::endl;
        std::cout << "Decenas: " << decenas << std::endl;
        std::cout << "Unidades: " << unidades << std::endl;

        std::cout << "¿Desea repetir el proceso? (s/n): ";
        std::cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    std::cout << "Fin del programa." << std::endl;

    return 0;
}
