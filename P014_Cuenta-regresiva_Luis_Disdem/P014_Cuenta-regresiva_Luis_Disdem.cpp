// P014_Cuenta-regresiva_Luis_Disdem.cpp
// Luis Disdem
// Cuenta regresiva

#include <iostream>
#include <locale>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    bool seguir = true;

    while (seguir);{
        std::cout << "El contador de 1000 con 3 variantes va en: \n";
        int i = 0;
        //Contador For
        for (i = 1000; i >= 0; i--)
        {
            std::cout << "El contador for de 1000 va en: " << i << std::endl;
         
            system("cls");
        }
        // DO_While
        int a = 1000;
        do {
            std::cout << "Ciclo DO de 1000 va en: " << a << std::endl;
            a--;
            system("cls");
         } while (a >= 0);
         //While
         std::cout << "Ciclo while de 1000 va en: \n";
         int l = 1000;
         while (l >= 0) {
             std::cout << "Ciclo while de 1000 va en: " << l << std::endl;
             l--;
             system("cls");
         }
         // contador de 100 lento
        for (i = 100; i >= 0; i--)
        {
            std::cout << "El contador 100 lento va en: " << i << std::endl;
            Sleep(100);
            system("cls");
        }
        //contador 10x10
        for (int i = 1; i <= 100; ++i)
        {
            std::cout << "El contador 10x10 va en: " << i << " ";
            if (i % 10 == 9)
            {
                std::cout << std::endl;
                Sleep(70);                
            }           
        }   
        std::cout << "¿ Quieres reiniciar ? 1.-SI   0.-NO\n ";
        std::cin >> seguir;
    }
    return 0;
}