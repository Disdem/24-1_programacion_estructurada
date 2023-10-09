// Practica {For}.cpp 
// Luis Disdem
// Practica de reapso


#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "El ciclo de control For\n";
    int i = 0;
    //Inicio de carrera; Limite; Paso o salto
    for (i = 0; i <= 100; i = i + 2)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
}