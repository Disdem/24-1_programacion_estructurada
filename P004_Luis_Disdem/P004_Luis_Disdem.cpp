// P004_Luis_Disdem.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Realizar un consultorio

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;
    bool seguir = true;
    do
    {

    std::cout << "Bienvenido al consultorio de Amerike!\n";
    std::cout << "Cual es tu nombre? " << std::endl; 
    getline(std::cin, Nombre);
    
    std::cout << "\n ¿Cuentame que es lo que te sucede?\n";
    getline(std::cin, Relato);


    std::cout << "Eres hombre o mujer? Coloca M para mujer y H para hombre\n";
    std::cin >> sexo;

    std::cout << "Responde a la siguientes preguntas con 1 si tu respuesta es si y 0 si tu respuesta es no\n";
    std::cout << "¿Tienes fiebre?\n";
    std::cin >> sintoma1;

    std::cout << "¿Te duele el estomago?\n";
    std::cin >> sintoma2;

    std::cout << "¿tiene dolor de cabeza?\n";
    std::cin >> sintoma3;

    std::cout << "¿Cuantos años tienes?\n";
    std::cin >> edad;

    std::cout << "¿Cuanto pesas?\n";
    std::cin >> peso;

    std::cout << "¿Cual es tu altura?\n";
    std::cin >> altura;

    IMC = peso / (altura * altura); 
    std::cout << "Tu IMC es de\n";
    std::cout << IMC;

    std::cout << "\nDeseas repetir el algoritmo? 0.- NO 1.- SI: \n";
    std::cin >> seguir; 
    system("cls"); 

    } while (seguir); 

}





