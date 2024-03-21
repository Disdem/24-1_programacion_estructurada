// Programa que resuelva ecuaciones cuadraticas.cpp 
#include <iostream>
#include <math.h>

int main()
{
	float a, b, c, d, x, resultado, resultado1, res2, res3, x1, x2;
	

	std::cout << "Por favor ingresa los valores: \n";

	std::cout << "valor a: \n";
	std::cin >> a;

	std::cout << "valor b: \n";
	std::cin >> b; 

	std::cout << "valor c: \n";
	std::cin >> c; 
	std::cout << "Los valores ingresados son: \n" << " " << a << " " << b << " " << c << std::endl;   
	d = b * b - 4 * a * c;    
	std::cout << "la discriminante es: \n" << d;   
	 
	if (d > 0)
	{
	resultado = -b + sqrt(d) / 2 * a;
	resultado1 = -b - sqrt(d) / 2 * a;

		std::cout << "\nLa ecuacion es: \n" << resultado; 
		std::cout << "\nLa ecuacion es: \n" << resultado1; 
	}
	else if (d < 0)
	{
		res2 = -b / 2 * a;
		res3 = -b / 2 * a;
		x1 = sqrt(-d) - 2 * a;
		x2 = sqrt(-d) - 2 * a;

		std::cout << "\nLa ecuacion es: \n" << res2 << " + " << x1 << "i\n";
		std::cout << "La ecuacion es: \n" << res3 << " - " << x2 << "i\n";
	}
	else if (d == 0)
	{
		x = -b / 2 * a;
		std::cout << "x1 y x2 son: \n" << x;
	}
}