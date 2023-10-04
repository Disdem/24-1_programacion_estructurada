// CP05_Aritmeticos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Esat sera practica de raix cuadarada y de potencia 
// Luis_Disdem

#include <iostream>
#include <math.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    std::cout << "Ingresa un numero: \n";
    std::cin >> a;
    std::cout << "Ingresa la potencia a la que lo quieres elevar: \n";
    std::cin >> b;
    //pow(numero, potencia)
    //Para obtener la raiz debemos elevar el numero a la
    //fracción de potencia que queramos.
    //para raiz cuadrada pow(X,1/2)
    c = pow(a, b);
    std::cout << c << std::endl;
    d = sqrt(c);
    c = pow(c, .5);
    std::cout << "La raiz cuadrada del resultado es: " << c <<
        std::endl << d;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a / b;
    std::cout << "El resultado de la division es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a * b;
    std::cout << "El resultado de la multiplicacion es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a - b;
    std::cout << "El resultado de la resta es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a + b;
    std::cout << "El resultado de la suma es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = pow(a, b);
    std::cout << "La pontencia es " << c << std::endl;
    c = pow(c, .5);
    std::cout << "La raiz cuadrada del resultado es: " << c <<
        std::endl << d;
}