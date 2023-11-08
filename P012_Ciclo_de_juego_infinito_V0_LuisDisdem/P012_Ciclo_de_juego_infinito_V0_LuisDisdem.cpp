// P012_Ciclo_de_juego_infinito_V0_LuisDisdem.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem
// Ciclo de juego infinito, gastar 3 vidas.


#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string respuesta;
    int i = 100;
    bool seguir = true; // Cambiamos a true para que el bucle se ejecute al menos una vez

    do
    {
        std::cout << "HOLA y bienvenido a roulette game, en este juego tienes 3 vidas \n"
            << "Dependiendo de tus decisiones tendrás eventos que te afectarán \n"
            << "Quieres jugar? \n"
            << "s = Si, n = NO \n";
        std::cin >> respuesta;
        system("cls");

        if (respuesta == "s")
        {
            std::cout << "UY! que mal te encontraste una piedra en el camino y caíste, perdiste 1 vida \n";
            std::cout << "Te quedan 2 vidas mi chavo, fíjate más en el camino \n";
            std::cout << "Quieres continuar: s/n \n";
            std::cin >> respuesta;
            system("cls");

            for (i = 100; i >= 0; i--)
            {
                std::cout << "El contador va en: " << i << std::endl;
                system("cls");
            }

            if (respuesta == "s")
            {
                std::cout << "Por ir mirando todo el tiempo el suelo te golpeaste la cabeza con una rama \n"
                    << "Perdiste 1 vida, te restan 1 vida \n"
                    << "Cuidado en el camino, tienes que estar alerta a todo \n";
                std::cout << "Deseas continuar s/n \n";
                std::cin >> respuesta;
                system("cls");

                for (i = 100; i >= 0; i--)
                {
                    std::cout << "El contador va en: " << i << std::endl;
                    system("cls");
                }

                if (respuesta == "s")
                {
                    std::cout << "En tu travesía por el camino te encontraste con unas personas muy amables que te dijeron que tomaras otra ruta, ya que la original está bloqueada,"
                        << "al seguir su consejo caíste en la trampa de unos ladrones llamados Brayan y te dieron una bienvenida. \n"
                        << "Has muerto, te quedan 0 vidas \n";
                    std::cout << "Deseas continuar, s/n \n";
                    std::cin >> respuesta;
                    system("cls");

                    for (i = 100; i >= 0; i--)
                    {
                        std::cout << "El contador va en: " << i << std::endl;
                        std::cout << "GAME OVER D:\n";
                        system("cls");
                    }
                }
                else
                {
                    std::cout << "GAME OVER \n";
                    system("cls");
                }
            }
            else
            {
                std::cout << "Decidiste cambiar de camino y te encontraste con una manada de lobos que te devoraron \n"
                    << "Perdiste tu última vida \n";
                system("cls");
            }
        }
        else
        {
            std::cout << "Culito pero sanito \n";
            system("cls");
        }

        std::cout << "¿Quieres jugar de nuevo? s = Si, n = NO \n";
        std::cin >> respuesta;
        system("cls");

        if (respuesta != "s")
        {
            seguir = false;
            std::cout << "Gracias por jugar. Hasta la próxima.\n";
            system("cls");
        }

    } while (seguir);

    std::cout << "Gracias por jugar. Hasta la próxima.\n";
    system("cls");
    return 0;
}