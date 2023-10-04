// P009 Condicionales_.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem

#include <iostream>


int main()
{
	int num1, num2;
	int operador;
	bool repetir = true;
	while (repetir)
		
	{
		std::cout << "Dime un numero de 0 a infito \n";
		std::cin >> num1;

		std::cout << "Que accion quieres realizar\n" <<
			"1- Suma, 2- Resta, 3- Multiplicacion, 4- Division, 5- Pontencia, 6- Valor absoluto, 7- Mayor menor que \n";
		std::cin >> operador;

		std::cout << "Dime un numero de 0 a infito \n";
		std::cin >> num2;

		int resultado;
		switch (operador)
		{
		case 1:
			resultado = num1 + num2;
			std::cout << "El resultado de la suma es: " << resultado << std::endl;
			break;

		case 2:
			resultado = num1 - num2;
			std::cout << "El resultado de la resta es: " << resultado << std::endl;
			break;

		case 3:
			resultado = num1 * num2;
			std::cout << "El resultado de la multaplicacion es: " << resultado << std::endl;
			break;

		case 4:
			resultado = num1 / num2;
			std::cout << "El resultado de la division es: " << resultado << std::endl;
			break;

		case 5:
			resultado = num1 ^ num2;
			std::cout << "El resultado de la potencia es: " << resultado << std::endl;
			break;

		case 6:
			float num;
			std::cout << "Dame un numero y te dare el valor Absoluto: \n";
			std::cin >> num;
			if (num >= 0)
			{
				std::cout << "El resultado de valor absoluto es: " << num << std::endl;
			}
			else
			{

			}
			break;

		case 7:
			std::cout << "Dime dos numeros y te dire cual es mayor o menor que: \n";
			int a, b;
			a = 0, b = 0;
			std::cout << "Los numeros se declaran con a y b: \n";
			std::cout << "Dame en primer valor de a: \n";
			std::cin >> a;
			std::cout << "Dame en primer valor de b: \n";
			std::cin >> b;
			if (a > b)
				std::cout << "Ah mira a es meyor que b: \n";
			{if (b > a)
				std::cout << "Ah mira b es meyor que a: \n";
			{
			if (a = b)
				std::cout << "Ambos dan lo mismo :): \n";
			{

			}

			}
			}
			break;
		default:
			std::cout << "Syntax Error: \n";
			return 0;
		}
		bool seguir = true;
		std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
		std::cin >> seguir;
		system("cls");







	}
}