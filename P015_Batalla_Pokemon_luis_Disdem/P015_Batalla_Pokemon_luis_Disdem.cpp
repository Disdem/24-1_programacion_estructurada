// P015_Batalla_Pokemon_luis_Disdem.cpp
// Luis Disdem
// Batalla poekmon 
// batalla x turno, 2 personajes, 2 atributos, fin, 

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale.h>

class Pokemon {
public:
    Pokemon(std::string name, int hp, int defensa, float miss_chance, int ability_power)
        : name(name), hp(hp), defensa(defensa), miss_chance(miss_chance), ability_power(ability_power) {}

    void displayInfo() {
        std::cout << name << " (HP: " << hp << " Defense: " << defensa << ")\n";
    }

    bool isAlive() {
        return hp > 0;
    }

    void takeDamage(int damage) {
        hp -= damage;
        if (hp < 0) {
            hp = 0;
        }
    }

    int calculateDamage(int opponent_defense, float miss_chance, int ability_power) {
        float random = static_cast<float>(rand()) / RAND_MAX;
        if (random >= miss_chance) {
            int damage = (ability_power - opponent_defense);
            return (damage > 0) ? damage : 0;
        }
        return -1; // Ataque fallado
    }

    void attack(Pokemon& opponent) {
        int damage = calculateDamage(opponent.defensa, miss_chance, ability_power);
        if (damage >= 0) {
            std::cout << name << " usa su habilidad y causa " << damage << " de daño a " << opponent.name << "!\n";
            opponent.takeDamage(damage);
        }
        else {
            std::cout << name << " usa su habilidad pero falla el ataque.\n";
        }
    }

    std::string getName() {
        return name;
    }

private:
    std::string name;
    int hp;
    int defensa;
    float miss_chance;
    int ability_power;
};

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    srand(static_cast<unsigned>(time(0))); // Corregir el paréntesis faltante

    Pokemon player1("Charizard", 100, 20, 0.1, 35);
    Pokemon player2("Blastoise", 120, 25, 0.3, 30);
    bool seguir = true;
    do
    {

    std::cout << "¡Comienza la batalla entre " << player1.getName() << " y " << player2.getName() << "!\n";

    while (player1.isAlive() && player2.isAlive()) {
        player1.displayInfo();
        player2.displayInfo();

        std::cout << "Jugador 1, presiona 1 para atacar o 0 para rendirte: ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            player1.attack(player2);
        }
        else if (choice == 0) {
            std::cout << "Jugador 1 se rinde. " << player2.getName() << " gana la batalla.\n";
            break;
        }
        else {
            std::cout << "Selección no válida. Jugador 1 pierde el turno.\n";
        }

        if (!player2.isAlive()) {
            std::cout << "¡El ganador es " << player1.getName() << "!\n";
            break;
        }

        player2.attack(player1);

        if (!player1.isAlive()) {
            std::cout << "¡El ganador es " << player2.getName() << "!\n";
            break;
        }
    }
    std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
    std::cin >> seguir;
    system("cls");

    } while (seguir); 
}