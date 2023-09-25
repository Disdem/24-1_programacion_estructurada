// Mayor menor que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis_Disdem

// Algoritmo y programa para evaluar 2 numeros y 
// decidir cual es mayor y cual menor.
//

#include <iostream>

int main()
{
    //Declarar 2 variables a analizar.
    int N1;
    int N2;
    bool seguir = true;
    //Solicitar al usuario 2 numeros
    while (seguir)
    {

        std::cout << "Hola usuario dame 1 numero y presiona enter: ";
        std::cin >> N1;
        std::cout << "\nExcelente ahora dame otro numero y te dire";
        std::cout << " cual es mayor y cual es menor: ";
        std::cin >> N2;
        if (N1 == N2)
        {
            std::cout << "\naaa mira son iguales!\n";
        }
        else
        {
            if (N1 < N2)
            {
                std::cout << "El mayor es " << N2 << "\nY el menor es " << N1 << std::endl;
            }
            else
            {
                std::cout << "El mayor es " << N1 << "\nY el menor es " << N2 << std::endl;
            }
        }
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
        std::cin >> seguir;
        //Sirve para limpiar la pantalla
        system("cls");
    }
}

