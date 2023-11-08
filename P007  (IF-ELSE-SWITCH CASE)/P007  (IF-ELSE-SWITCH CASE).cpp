// P007  (IF-ELSE-SWITCH CASE).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis Disdem

#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "es_MX.utf8"); 

    int ganadores[] = { 1, 3, 6, 27, 10, 13, 15, 20 };
    int num;
    char jugarNuevamente;

    do {
        int opc;
        int rropc;

        std::cout << "Hola bienvenido a la arena\n";
        std::cout << "¿Qué te gustaría jugar?\n1.- Royal Rumble\n2.- Elimination Chamber\n3.- Torneo\n";
        std::cin >> opc;

        switch (opc) {
        case 1:
            std::cout << "Bienvenido al modo Royal Rumble\n";
            std::cout << "¿De cuántos luchadores será tu Royal Rumble?\n1.- 10 Luchadores\n2.- 20 Luchadores\n3.- 30 Luchadores\n";
            std::cin >> rropc;

            switch (rropc) {
            case 1:
                std::cout << "Veo que has elegido la opción de 10 luchadores\n";
                std::cout << "Elige un número del 1 al 10\n";
                std::cin >> num;

                for (int i = 0; i < 8; i++) {
                    if (num == ganadores[i]) {
                        std::cout << "¡Felicidades, haz ganado el Royal Rumble!\n";
                        break;
                    }
                    else if (i == 7) {
                        std::cout << "Lo siento, has perdido el Royal Rumble\n";
                    }
                }
                break;

            case 2:
                std::cout << "Veo que has elegido la opción de 20 luchadores\n";
                std::cout << "Elige un número del 1 al 20\n";
                std::cin >> num;

                for (int i = 0; i < 8; i++) {
                    if (num == ganadores[i]) {
                        std::cout << "¡Felicidades, haz ganado el Royal Rumble!\n";
                        break;
                    }
                    else if (i == 7) {
                        std::cout << "Lo siento, has perdido el Royal Rumble\n";
                    }
                }
                break;

            case 3:
                std::cout << "Veo que has elegido la opción de 30 luchadores\n";
                std::cout << "Elige un número del 1 al 30\n";
                std::cin >> num;

                for (int i = 0; i < 8; i++) {
                    if (num == ganadores[i]) {
                        std::cout << "¡Felicidades, haz ganado el Royal Rumble!\n";
                        break;
                    }
                    else if (i == 7) {
                        std::cout << "Lo siento, has perdido el Royal Rumble\n";
                    }
                }
                break;

            default:
                break;
            }
            break;

        case 2:
            std::cout << "Bienvenido al modo Elimination Chamber\n";
            std::cout << "Elige el número de entrada de tu luchador del 1 al 6\n";
            std::cin >> num;

            for (int i = 0; i < 8; i++) {
                if (num == ganadores[i]) {
                    std::cout << "¡Felicidades, haz ganado la Elimination Chamber!\n";
                    std::cout << "Ahora eres el nuevo campeón mundial\n";
                    break;
                }
                else if (i == 7) {
                    std::cout << "Lo siento, has perdido la Elimination Chamber\n";
                }
            }
            break;

        case 3:
            std::cout << "Bienvenido al modo torneo\n";
            std::cout << "¿Cuál será tu número en el torneo del 1 al 16?\n";
            std::cin >> num;

            for (int i = 0; i < 8; i++) {
                if (num == ganadores[i]) {
                    std::cout << "¡Felicidades, haz ganado el torneo!\n";
                    std::cout << "Ahora eres el nuevo campeón mundial indiscutido\n";
                    break;
                }
                else if (i == 7) {
                    std::cout << "Lo siento, has perdido el torneo\n";
                }
            }
            break;

        default:
            break;
        }

        std::cout << "¿Deseas jugar nuevamente? (S/N): ";
        std::cin >> jugarNuevamente;
        system("cls");

    } while (jugarNuevamente == 'S' || jugarNuevamente == 's');

    return 0;
}