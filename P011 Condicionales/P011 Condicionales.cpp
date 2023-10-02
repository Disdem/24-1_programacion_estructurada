// P011 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem


#include <iostream>
#include <locale>
#include <string>

int main()
{
	int opc = 0;
	std::setlocale(LC_ALL, "es_MX.UTF-8");
	std::cout << "Adivina quien? \n a que personaje de overlord te refieres\n el personaje es\n";

	std::cout << "ainz oal gon :\n";
	std::cout << "1.- es una calavera?, 2.-usa ropa negra?, 3.- es mago?, 4.-Usa espada?\n";
	std::cin >> opc;
	switch (opc)
	{
	case 1:
		std::cout << "respuesta correcta el es Ainz\n";
		break;
	case 2:
		std::cout << "respuesta incorrecta no es ainz\n";
		break;
	case 3:
		std::cout << "respuesta incorrecta no es ainz\n";
		break;
	case 4:
		std::cout << "respuesta incorrecta no es ainz\n";
		break;
	default:
		break;
	}

	std::cout << "Shaltear:\n";
	std::cout << "1.-es una maga? , 2.-es una vampira?, 3.-usa un baston?, 4.-es hombre o mujer?\n";
	std::cin >> opc;
	switch (opc)
	{
	case 1:
		std::cout << "respuesta incorrecta no es Shaltear\n";
		break;
	case 2:
		std::cout << "respuesta correcta es Shaltear\n";
		break;
	case 3:
		std::cout << "respuesta incorrecta no es Shaltear\n";
		break;
	case 4:
		std::cout << "respuesta incorrecta no es Shaltear\n";
		break;
	default:
		break;
	}
	
}