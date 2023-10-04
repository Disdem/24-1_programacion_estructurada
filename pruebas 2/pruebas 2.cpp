// Practica 010 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;
    std::cout << "Hola usuario a continuacion ingresa tu contraseña \n";
    do
    {
        std::cout << "usuario \n";
        std::cin >> usuario;

        std::cout << "Contraseña \n";
        std::cin >> contrasena;

        if (usuario == "iDisdemYT")
        {
            if (contrasena == "Botsito69")
            {
                std::cout << "Welcome to Jurassic Park \n";

            }
            else
            {
                std::cout << "Nelson la contraseña es incorrecta \n";
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
