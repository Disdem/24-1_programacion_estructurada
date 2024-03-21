// Programa que llene una matriz.cpp 
//Llene una matriz de 3x3, imprima la matriz y encuentre su determinante


#include <iostream>

int main() {
    int matriz[3][3];
    int filas = sizeof(matriz) / sizeof(matriz[0]);
    std::cout << "Ciclo de columnas 3x3 \n";
    std::cout << "\n";
    std::cout << "El numero de filas es: " << filas << std::endl;

    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    std::cout << "El numero de columnas es: " << columnas << std::endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Ingrese el valor para la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " "; 
        }
        std::cout << "\n";
    }

    return 0;
}
