// Programa que resuelva un factorial.cpp 
#include <iostream>

int main()
{
    int numero, fact = 1;
    std::cout << "ingrese el numero para calcular el factorial: \n";
    std::cin >> numero;
    for (int i = 1; i <= numero; ++i)
    {
        fact *= i;
    }
    std::cout << "El factorial de " << numero << " es: " << fact << std::endl;

    return 0;
}
