// Practica 010 Condicionales.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
// Luis Disdem

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;
    std::cout << "Hola usuario a continuacion ingresa tu contrase�a \n";
    do
    {
        std::cout << "usuario \n";
        std::cin >> usuario;

        std::cout << "Contrase�a \n";
        std::cin >> contrasena;

        if (usuario == "iDisdemYT")
        {
            if (contrasena == "Botsito69")
            {
                std::cout << "Welcome to Jurassic Park \n";

            }
            else
            {
                std::cout << "Nelson la contrase�a es incorrecta \n";
            }
        }
        else
        {
            std::cout << "Nelson el usuario es incorrecto \n";
        }

    } while (usuario != "iDisdemYT");  (contrasena != "Botsito69");
     
    bool seguir = true; 
    std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
    std::cin >> seguir; 
    system("cls");

}
