// Luis Disdem
// Proyecto de matematicas calculadora de probabilidad
// Calculadora de videojuegos

#include <iostream>
#include <cmath>
#include <locale>

//probabilidad simple
double probabilidadSimple(double eventosFavorables, double eventosPosibles) {
    return eventosFavorables / eventosPosibles;
}

//probabilidad de eventos dependientes
double probabilidadDependiente(double probabilidadA, double probabilidadB_dado_A) {
    return probabilidadA * probabilidadB_dado_A;
}

//probabilidad de eventos independientes
double probabilidadIndependiente(double probabilidadA, double probabilidadB) {
    return probabilidadA * probabilidadB;
}

// Función para calcular combinaciones (n choose r)
double combinaciones(int n, int r) {
    return tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1));
}

// 5Función para calcular permutaciones (n P r)
double permutaciones(int n, int r) {
    return tgamma(n + 1) / tgamma(n - r + 1);
}

// probabilidad geométrica
double probabilidadGeometrica(double probabilidadExito, int numeroIntentos) {
    return pow((1 - probabilidadExito), numeroIntentos - 1) * probabilidadExito;
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    double eventosFavorables, eventosPosibles, probabilidadA, probabilidadB_dado_A, probabilidadB, probabilidadExito;
    int n, r, numeroIntentos;
    int metodo;
    bool seguir = true;

    std::cout << "\t\tBienvenido a la calculadora de videojuegos.\t\t\n" <<
        "\t\tEn esta calculadora clacularemos la probabilidad de victoria con datos basados en la teoria, ronadas .etc\t\t\n" <<
        "\t\tPor seleccione el metodo de calculo. \t\t\n" <<
        "\t\t1.- Probabilidad simple\t\n" << "\t\t2.- Probabilidad de eventos independientes (dado)\t\n" <<
        "\t\t3.- Probabilidad de eventos independientes\t\n" << "\t\t4.- Combinaciones\t\n" <<
        "\t\t5.- Permutaciones\t\n" << "\t\t6.- Probabilidad geométrica\t\n";
    std::cin >> metodo; 

    do
    {
    switch (metodo) 
    {
    case 1:
           // Probabilidad simple
           std::cout << "Ingrese el número de eventos favorables: ";
           std::cin >> eventosFavorables;
           std::cout << "Ingrese el número total de eventos posibles: ";
           std::cin >> eventosPosibles;
           std::cout << "La probabilidad simple es: " << probabilidadSimple(eventosFavorables, eventosPosibles) << std::endl;
           break;

    case 2:
           // Probabilidad de eventos dependientes
    {  std::cout << "\nIngrese la probabilidad de A: ";
    std::cin >> probabilidadA;
    std::cout << "Ingrese la probabilidad de B dado A: ";
    std::cin >> probabilidadB_dado_A;
    std::cout << "La probabilidad de eventos dependientes es: " << probabilidadDependiente(probabilidadA, probabilidadB_dado_A) << std::endl; }
           break;

    case 3:
           // Probabilidad de eventos independientes
    {std::cout << "\nIngrese la probabilidad de A: ";
    std::cin >> probabilidadA;
    std::cout << "Ingrese la probabilidad de B: ";
    std::cin >> probabilidadB;
    std::cout << "La probabilidad de eventos independientes es: " << probabilidadIndependiente(probabilidadA, probabilidadB) << std::endl; }
           break;

    case 4:
           // Combinaciones
    { std::cout << "\nIngrese el total de elementos: ";
    std::cin >> n;
    std::cout << "Ingrese el nuemro de elementos a ordenar: ";
    std::cin >> r;
    std::cout << "Combinaciones de " << n << " choose " << r << " es: " << combinaciones(n, r) << std::endl; }
           break;

    case 5:
           // Permutaciones
    { std::cout << "\nIngrese el total de elementos: ";
    std::cin >> n;
    std::cout << "Ingrese el nuemro de elementos a ordenar: ";
    std::cin >> r;
    std::cout << "Permutaciones de " << n << " P " << r << " es: " << permutaciones(n, r) << std::endl; }
           break;

    case 6:
           // Probabilidad geométrica
    {std::cout << "\nIngrese la probabilidad de éxito en un solo intento: ";
    std::cin >> probabilidadExito;
    std::cout << "Ingrese el número total de intentos: ";
    std::cin >> numeroIntentos;
    std::cout << "La probabilidad geométrica es: " << probabilidadGeometrica(probabilidadExito, numeroIntentos) << std::endl; }
           break;

    default:
        std::cout << "\t\tTe fuiste muy lejos master ;D\t\t\n";
        return 0;
    }
    std::cout << "0.- Salir 1.- Menu principal: ";
    std::cin >> seguir;
    system("cls");
    } while (seguir); {
    }
}
