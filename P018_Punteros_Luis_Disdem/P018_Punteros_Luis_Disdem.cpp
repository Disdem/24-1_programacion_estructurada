#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    bool seguir = true;
    int fil, col;

    do {
        std::cout << "\t\t**Bienvenido al generador de matrices**\t\t\n";
        std::cout << "\t\t--A continuación ingresa el tamaño de la matriz--\t\t\n";
        std::cout << "\tPrimero las filas\t\n";
        std::cin >> fil;
        std::cout << "\tAhora las columnas\t\n";
        std::cin >> col;

        int** Matriz = new int* [fil];

        if ((fil == 2 && col == 2) || (fil == 3 && col == 3) || (fil == 2 && col == 3)) {
            std::cout << "\tPara este tamaño de matriz debes colocar los elementos manualmente\t\n";
            for (int i = 0; i < fil; i++) {
                Matriz[i] = new int[col];
                for (int j = 0; j < col; j++) {
                    std::cout << "\tIngresa un valor para la posición [" << i << "][" << j << "]: ";
                    std::cin >> Matriz[i][j];
                }
            }
        }
        else {
            std::cout << "Continuemos\n";
            for (int i = 0; i < fil; i++) {
                Matriz[i] = new int[col];
            }
            std::srand(static_cast<unsigned>(std::time(0)));

            for (int i = 0; i < fil; i++) {
                for (int j = 0; j < col; j++) {
                    Matriz[i][j] = std::rand() % 9;
                    std::cout << Matriz[i][j] << " ";
                }
                std::cout << "\n";
            }
        }
        if ((fil == 2 && col == 2) || (fil == 3 && col == 3) || (fil == 2 && col == 3)) {
            std::cout << "\n\tPosiciones de la matriz:\n";
            for (int i = 0; i < fil; i++) {
                for (int j = 0; j < col; j++) {
                    std::cout << "[" << i << "][" << j << "] ";
                }
                std::cout << "\n";
            }
        }
        for (int i = 0; i < fil; i++) {
            delete[] Matriz[i];
        }
        delete[] Matriz;

        std::cout << "\t\t¿Quieres repetir el algoritmo?\t\t\n";
        std::cout << "\t\t1.-si\t" << "\t0.-No\t\t\n";
        std::cin >> seguir;
        system("CLS");
    } while (seguir);
}
