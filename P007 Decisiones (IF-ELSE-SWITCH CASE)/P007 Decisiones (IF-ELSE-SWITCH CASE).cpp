// P007 Decisiones (IF-ELSE-SWITCH CASE).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis_Disdem
// Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//  1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final

#include <iostream>
#include <locale>
#include <string>

int main()

  
{
	setlocale(LC_ALL, "es_MX.UTF-8");

	std::cout << "Hola y bienvenidos a la terrible arena de Overlord \n";
	
	
    // Eliminatoria directa 
	bool seguir = true;
    std::string G1 = "Grupo 1" , G2 = "Grupo 2";
    int G1;
    int G2;
    while (seguir)
    {

        std::cout << "Hola usuario dime cuantos jugadores quieres en el grupo 1 y presiona enter: \n";
        std::cin >> G1; 
        std::cout << "\nExcelente ahora dime cuantos jugadores en el segundo grupo: \n";
        std::cin >> G2; 
        if (G1 == G2) 
        {
            std::cout << "\n Quedamos en un empate por ambos bandos\n";
        }
        else
        {
            if (G1 < G2)
            {
                std::cout << "El grupo ganador es: " << G2 << "\nY el perdedor es: " << G1 << std::endl;
            }
            else
            {
                std::cout << "El grupo ganador es: " << G1 << "\nY el perdedor es: " << G2 << std::endl;
            }
        }
        std::cout << "Deseas repetir la batalla? 0.- NO 1.- SI: ";
        std::cin >> seguir;
        system("cls");

    }









}

