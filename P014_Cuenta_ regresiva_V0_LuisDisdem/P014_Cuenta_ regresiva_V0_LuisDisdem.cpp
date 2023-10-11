// P014_Cuenta_ regresiva_V0_LuisDisdem.cpp 
// Luis Disdem
// Contar desde 1000 a 0 con los 3 ciclos
// Contar hasta 100 lento
// Contar hasta 10x10

#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "El ciclo de control For\n";
    int i = 0;
    //Inicio de carrera; Limite; Paso o salto
    for (i = 1000; i >= 0; i = i--)
    {
        std::cout << "El contador va en: " << i << std::endl;      
    }
    for (i = 1000; i >= 0; i = i - 10)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
    for (i = 100; i >= 0; i = i--)
    {
        std::cout << "El contador va en: " << i << std::endl;
        Sleep(200);      
    }

}