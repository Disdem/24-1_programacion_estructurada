// p004.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Disdem
// Realizare un consultorio medico en el cual solicito 3 bool 2 string 1 char 1 float
// Al final entrega tu IMC


#include <iostream>
#include <locale.h>
#include <string>



int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string nombre;
    std::string relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;

    std::cout << "Usuario dime tienes fiebre 1-si, 0-no;" <<
        std::endl;
    std::cin >> sintoma1;
    std::cout << "Usuario dime tienes dolores de cabeza ;" <<
        std::endl;
    std::cin >> sintoma2;
    std::cout << "Usuario dime tienes cuerpo cortado ;" <<
        std::endl;
    std::cin >> sintoma3;
    std::cout << "Usuario dime tu nombre;" <<
        std::endl;
    std::cin >> nombre;
    std::cout << "Cuentame tu relato ;" <<
        std::endl;
    std::cin >> relato;
    std::cout << "Usuario dime eres Hombre(H) o Mujer(M);" <<
        std::endl;
    std::cin >> sexo;
    std::cout << "Usuario dime cual es tu peso ;" <<
        std::endl;
    std::cin >> peso;
    std::cout << " dime cual es tu edad ;" <<
        std::endl;
    std::cin >> edad;
    std::cout << "Usuario dime cual es tu altura ;" <<
        std::endl;
    std::cin >> altura;

    IMC = peso / altura;
    std::cout << "Tu indie de masa corporal " << IMC << std::endl;


















}