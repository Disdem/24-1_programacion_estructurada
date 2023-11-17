// P018_Punteros_Luis_Disdem.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib> // Para utilizar la función rand()
#include <ctime>   // Para inicializar la semilla de números aleatorios

int main() {

	int fil, col;
	std::cout << "\t\t**Bienvenido al generador de matrizes**\t\t\n";
	std::cout << "\t\t--A continuacion ingresa el tamaño de la matriz--\t\t\n";
	std::cout << "\t\t--Intenta que sean pares--\t\t\n";
	std::cout << "\tPrimero las filas\t\n";
	std::cin >> fil;
	std::cout << "\tAhora las columnas\t\n";
	std::cin >> col;
	int** Matriz = new int* [fil];
	if (fil == 2, 3)(col == 2, 3);
	{
	for (int i = 0; i < fil; i++)
	{
		Matriz[i] = new int[col];
	}
	for (int a = 0; a < fil; a++)
	{
		for (int b = 0; b < col; b++)
		{
			Matriz[a][b] = rand() % 9;
			std::cout << Matriz[a][b] << " ";
		}
		std::cout << "\n";
	}
	for (int j = 0; j < col; j++)
	{
		delete[] Matriz[j];
	}
	delete[] Matriz;
	}
}