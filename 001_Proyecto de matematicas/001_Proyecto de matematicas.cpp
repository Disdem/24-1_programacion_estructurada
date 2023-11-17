#include <iostream>
#include <cmath>

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

// Función para calcular permutaciones (n P r)
double permutaciones(int n, int r) {
    return tgamma(n + 1) / tgamma(n - r + 1);
}

// probabilidad geométrica
double probabilidadGeometrica(double probabilidadExito, int numeroIntentos) {
    return pow((1 - probabilidadExito), numeroIntentos - 1) * probabilidadExito;
}

int main() {
    // Ejemplo de uso
    double eventosFavorables, eventosPosibles, probabilidadA, probabilidadB_dado_A, probabilidadB, probabilidadExito;
    int n, r, numeroIntentos;

    // Probabilidad simple
    std::cout << "Ingrese el número de eventos favorables: ";
    std::cin >> eventosFavorables;
    std::cout << "Ingrese el número total de eventos posibles: ";
    std::cin >> eventosPosibles;
    std::cout << "La probabilidad simple es: " << probabilidadSimple(eventosFavorables, eventosPosibles) << std::endl;

    // Probabilidad de eventos dependientes
    std::cout << "\nIngrese la probabilidad de A: ";
    std::cin >> probabilidadA;
    std::cout << "Ingrese la probabilidad de B dado A: ";
    std::cin >> probabilidadB_dado_A;
    std::cout << "La probabilidad de eventos dependientes es: " << probabilidadDependiente(probabilidadA, probabilidadB_dado_A) << std::endl;

    // Probabilidad de eventos independientes
    std::cout << "\nIngrese la probabilidad de A: ";
    std::cin >> probabilidadA;
    std::cout << "Ingrese la probabilidad de B: ";
    std::cin >> probabilidadB;
    std::cout << "La probabilidad de eventos independientes es: " << probabilidadIndependiente(probabilidadA, probabilidadB) << std::endl;

    // Combinaciones
    std::cout << "\nIngrese el valor de n para combinaciones: ";
    std::cin >> n;
    std::cout << "Ingrese el valor de r para combinaciones: ";
    std::cin >> r;
    std::cout << "Combinaciones de " << n << " choose " << r << " es: " << combinaciones(n, r) << std::endl;

    // Permutaciones
    std::cout << "\nIngrese el valor de n para permutaciones: ";
    std::cin >> n;
    std::cout << "Ingrese el valor de r para permutaciones: ";
    std::cin >> r;
    std::cout << "Permutaciones de " << n << " P " << r << " es: " << permutaciones(n, r) << std::endl;

    // Probabilidad geométrica
    std::cout << "\nIngrese la probabilidad de éxito en un solo intento: ";
    std::cin >> probabilidadExito;
    std::cout << "Ingrese el número total de intentos: ";
    std::cin >> numeroIntentos;
    std::cout << "La probabilidad geométrica es: " << probabilidadGeometrica(probabilidadExito, numeroIntentos) << std::endl;
}
