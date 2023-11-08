// P013_Login_de_juego_V0_LuisDisdem.cpp
// Luis Disdem 
// Login en un videojuego con confirmacion de datos 

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string usuario;
    std::string contrasena; 
    bool seguir = true; 

    do
    {
        std::cout << "*************+ Bienvenido a la pagina de inicio +*********** \n";
        std::cout << "*************+ Ingresa tu usuario y contraseña +************* \n";
        std::cout << "********************+ Usuario: +******************** \n";
        getline(std:: cin, usuario);
        system("cls");
        std::cout << "*******************+ Contraseña: +*******************\n";
        getline(std:: cin, contrasena);  
        system("cls");

        if (usuario == "Disdem")
        {
            if (contrasena == "333491luis")
            {
                std::cout << "##########-Bienvenido de nuevo :D-##########\n  ";
                std::cout << "                                            \n  ";
            }
            else
            {
                std::cout << "##########+Intentalo nuevamente, la contraseña es incorrecta+##########\n         ";
            }
        }
        else
        {
            std::cout << "##########+Intentalo nuevamente, el usuario es incorrecto+##########\n         ";
        }
    } while (seguir);
    
}