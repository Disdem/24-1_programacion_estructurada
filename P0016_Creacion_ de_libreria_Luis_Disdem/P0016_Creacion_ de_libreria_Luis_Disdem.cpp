// P0016_Creacion_ de_libreria_Luis_Disdem.cpp 
// Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).
// Nombre
// Año de publicación
// Autor
// Estudio que lo creo

#include <iostream>
#include <string>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "ES_MX.UTF-8");
	std::string Nombres[4];
	std::string Autor[4];
	std::string Estudio[4];
	int Ano[4];
	bool repeat = true;
	do
	{

	// Captura de datos
	for (int i = 0; i <=3; i++)
	{
		if (i >= 1)
		{
			std::cin.ignore();
		}
		std::cout << "Ingresa el nombre del juego: " << i + 1 << std::endl;
		getline(std::cin, Nombres[i]);
		std::cout << "Ingresa el nombre del Autor del juego: \n";
		getline(std::cin, Autor[i]); 
		std::cout << "Ingresa el nombre del Estudio del juego: \n";
		getline(std::cin, Estudio[i]);
		std::cout << "Ingresa el anio en el que se creo el juego: \n";
		std::cin >> Ano[i]; 
	}
	// Mostra datos
	for (int a = 0; a <=3; a++)
	{
		std::cout << "El juego: " << a + 1 << " Se llama " << Nombres[a] << std::endl;
		std::cout << "El autor del juego " << a + 1 << " se llama " << Autor[a] << std::endl;
		std::cout << "El estudio que creo el juego " << a + 1 << " se llama " << Estudio[a] << std::endl;
		std::cout << "El juego " << a + 1 << " se creo en el año " << Ano[a] << std::endl;
	}
	std::cout << "¿Quieres repetir el algoritmo? 1.-si, 0.-no\n";
	std::cin >> repeat;
	} while (repeat);
}

