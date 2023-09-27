// P009 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int opc = 0;
    std::cout << "Que opción deseas realizar? \n1.- Suma\n2.- Resta\n" <<
        "3.- Multiplicación \n4.- Valor Absoluto\n5.- Mayor y menor que\n";
    std::cin >> opc;
    int a = 1, b = 1;
   
   
    switch (opc)
    {
    case 1:
        std::cout << "La suma es: " << a + b;
        break;
    case 2:
        a = 1;
        b = 1;
        std::cout << "La resta es: " << a - b;
        break;
    case 3:
        std::cout << "La multiplicación es: " << a * b;
        break;
    case 4:
        a = -1;
        std::cout << "El valor absoluto es: \n";
        if (a >= 0) 
        { 
            std::cout << "El valor absoluto es :" << a;
        }

        else 
        {
            std::cout << (a = a * -1);
        }
       
        break;
    case 5:
        if (a == b)
        {
            std::cout << "\naaa mira son iguales!\n";
        }
        else
        {
            if (a < b)
            {
                std::cout << "El mayor es " << b << "\nY el menor es " << a << std::endl;
            }
            else
            {
                std::cout << "El mayor es " << a << "\nY el menor es " << b << std::endl;
            }
            break;

    default:
        std::cout << "Esa opción no la conozco\n";




        }

    }

























}