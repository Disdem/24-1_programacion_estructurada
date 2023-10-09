// P012_Ciclo_de_juego_infinito_V0_Luis.cpp 
// Luis Disdem
// Ciclo de juego infinito, gastar 3 vidas.


#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string respuesta; 
    int i = 0;
    bool seguir = true;
    while (seguir)
    {
        std::cout << "HOLA y bienvenido a roulette game, en este juego tienes 3 vidas \n" << "Dependiendo de tus decisiones tendras eventos que te afectaran \n"
            << "Quieres jugar? \n" << "s = Si, n = NO \n";
        std::cin >> respuesta;
        if (respuesta == "s")
        {
            std::cout << "UY! que mal te encontraste una piedra en el camino y caiste, perdiste 1 vida \n";
            std::cout << "Te quedan 2 vidas mi chavo fijate mas en el camino \n";
            for (i = 100; i <= 0; i++)
            {
                std::cout << "El contador va en: " << i << std::endl; 
            }
        }
       

    }
        
}

