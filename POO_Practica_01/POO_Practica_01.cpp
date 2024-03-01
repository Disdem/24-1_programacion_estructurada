// POO_Practica_01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Carro {
public:
    string marca;
    string modelo;
    int anio;
    void Capturar();
    void Mostrar();
};

void Carro::Capturar() {
    cout << "\nMarca: ";
    cin.ignore();
    getline(cin, marca);
    cout << "\nModelo: ";
    getline(cin, modelo);
    cout << "\nAño: ";
    cin >> anio;
}

void Carro::Mostrar() {
    cout << "\nMarca: " << marca << "\nModelo: " << modelo << "\nAño: " << anio << endl;
}

int main() {
    Carro autos[5];
    int opcion, contador = 0;
    do {
        cout << "\nSelecciona la opcion: \n1.-Capturar\n2.-Mostrar\n3.-Salir\n";
        cin >> opcion;
        switch (opcion) {
        case 1:
            if (contador != 5) {
                autos[contador].Capturar();
                contador++;
            }
            else {
                cout << "\n¡¡No hay espacio!!" << endl;
            }
            break;
        case 2:
            if (contador == 0) {
                cout << "\nNO HAY DATOS CAPTURADOS" << endl;
            }
            else {
                for (int i = 0; i < contador; i++) {
                    autos[i].Mostrar();
                }
            }
            break;
        }
    } while (opcion != 3);

    return 0;
}