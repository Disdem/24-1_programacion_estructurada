#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Piensa en un deporte (f�tbol, baloncesto, tenis, b�isbol, nataci�n, atletismo, rugby, voleibol)." << std::endl;
    std::cout << "Por favor, responde 's' o 'n' a las preguntas." << std::endl;
    std::string respuesta;
    bool repetir = true;

    while (repetir)
    {


        // Pregunta 1
        std::cout << "�Se juega con una pelota? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == "s") {
            // Pregunta 2
            std::cout << "�Se juega en equipo? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                // Pregunta 3
                std::cout << "�Se juega en un campo grande? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    // Pregunta 4
                    std::cout << "�Se juega con las manos y los pies? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        // Pregunta 5
                        std::cout << "�Es un deporte acu�tico? (s/n): ";
                        std::cin >> respuesta;

                        if (respuesta == "s") {
                            std::cout << "Estoy pensando en la nataci�n." << std::endl;
                        }
                        else {
                            std::cout << "Estoy pensando en el baloncesto." << std::endl;
                        }
                    }
                    else {
                        std::cout << "Estoy pensando en el f�tbol." << std::endl;
                    }
                }
                else {
                    // Pregunta 6
                    std::cout << "�Se juega en una cancha con red? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        std::cout << "Estoy pensando en el voleibol." << std::endl;
                    }
                    else {
                        std::cout << "Estoy pensando en el tenis." << std::endl;
                    }
                }
            }
            else {
                // Pregunta 7
                std::cout << "�Se juega con un bate? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    std::cout << "Estoy pensando en el b�isbol." << std::endl;
                }
                else {
                    std::cout << "Estoy pensando en el atletismo." << std::endl;
                }
            }
        }
        else {
            // Pregunta 8
            std::cout << "�Se juega con un bal�n ovalado? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                std::cout << "Estoy pensando en el rugby." << std::endl;
            }
            else {
                std::cout << "No puedo adivinar el deporte en el que est�s pensando." << std::endl;
            }
        }

        bool seguir = true;
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
        std::cin >> seguir;
        system("cls");

    }
    return 0;

}
