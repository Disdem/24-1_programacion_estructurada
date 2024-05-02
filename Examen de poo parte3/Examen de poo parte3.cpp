// Examen de poo parte3.cpp
/*
* Define una clase llamada CuentaBancaria con miembros privados para el saldo y métodos públicos para depositar y retirar dinero. 
* Implementa un mecanismo para asegurar que el saldo no pueda ser negativo. Luego, crea un objeto CuentaBancaria, 
* realiza algunas operaciones de depósito y retiro, y muestra el saldo resultante.
*/

#include <iostream>

class CuentaBancaria {
private:
    float saldo;

public:
    // Constructor
    CuentaBancaria(float saldoInicial) : saldo(saldoInicial) {}

    
    void depositar(float cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            std::cout << "Se depositaron $" << cantidad << " en la cuenta." << std::endl;
        }
        else {
            std::cout << "Error: la cantidad a depositar debe ser mayor que cero." << std::endl;
        }
    }


    void retirar(float cantidad) {
        if (cantidad > 0) {
            if (saldo >= cantidad) {
                saldo -= cantidad;
                std::cout << "Se retiraron $" << cantidad << " de la cuenta." << std::endl;
            }
            else {
                std::cout << "Error: fondos insuficientes." << std::endl;
            }
        }
        else {
            std::cout << "Error: la cantidad a retirar debe ser mayor que cero." << std::endl;
        }
    }

   
    float obtenerSaldo() const {
        return saldo;
    }
};

int main() {
   
    CuentaBancaria cuenta(1000);

    cuenta.depositar(500);
    cuenta.retirar(200);
    cuenta.retirar(1500); // Intenta retirar más de lo que hay en la cuenta

    std::cout << "Saldo final: $" << cuenta.obtenerSaldo() << std::endl;

 
}
