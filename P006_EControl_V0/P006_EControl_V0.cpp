// P006_EControl_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis_Disdem


#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int mayor_edad = 7;
    //Sintaxys de IF-ELSE
    if (mayor_edad >= 18)
    {
        std::cout << "Bienvenido al bar de mou \n"
            << "como eres mayor puedes beber cerveza \n";
    }
    else
    {
        std::cout << "Sal de aquí pequeñín\n";
    }
    //dungeon
    bool llave1, llave2;
    std::string Cal1 = "Calabozo 1", Cal2 = "Calabozo 2";
    std::cout << "Bienvenido caballero te encontraste con una araña" <<
        " Que haces? 1.- Atacas 0.- Huyes\n";
    std::cin >> llave1;
    if (llave1 == true)
    {
        std::cout << "Que valiente eres acabas de ingresar al " << Cal1 <<
            " Te encontraste con un troll que deseas hacer? \n" <<
            "1.- Atacas 0.- Huyes \n";
        std::cin >> llave2;
        if (llave2 == true)
        {
            std::cout << "Derrotaste al troll y encontraste una princesa" <<
                " Como eres un caballero la llevas a su reyno donde " <<
                "Te apalean porque piensan que tu la secuestraste XD\n";
        }
        else
        {
            std::cout << "Culito pero sanito\n";
        }
    }
    else
    {
        std::cout << "Ni una araña neta? \n";
    }
    //Sintaxys de SWITCH CASE
    int opc = 0;
    std::cout << "Que opción deseas realizar? \n1.- Suma\n2.- Resta\n" <<
        "3.- Multiplicación \n";
    std::cin >> opc;
    int a = 1, b = 1;
    switch (opc)
    {
    case 1:
        std::cout << "La suma es: " << a + b;
        break;
    case 2:
        a = 1;
        b = 1;
        std::cout << "La resta es: " << a - b;
        break;
    case 3:
        std::cout << "La multiplicación es: " << a * b;
        break;
    default:
        std::cout << "Esa opción no la conozco\n";
    }
}