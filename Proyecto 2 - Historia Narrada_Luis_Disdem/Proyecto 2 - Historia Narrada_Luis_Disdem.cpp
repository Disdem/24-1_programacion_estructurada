// Proyecto 2 - Historia Narrada_Luis_Disdem.cpp 
// Luis Disdem
// Toma de desiciones
// Final

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

int main() {
    srand(static_cast<unsigned int>(std::time(0)));
    setlocale(LC_ALL, "es_MX.UTF-8");

    char jugarNuevamente;

    do {
        std::cout << "\t--------------------------------------------------\n";
        std::cout << "\tEntre las Penumbras\t\t\n";
        std::cout << "\tBienvenido al menu principal\t\t\n" <<
            "\tPresiona Enter para continuar\t\t\n";
        std::cout << "\t--------------------------------------------------";
        std::cin.get(); 
        system("cls");

        std::cout << "\t\t--------------------------------------------------------------------------\n";
        std::cout << "\t\tEstás solo en una mansión oscura y tenebrosa. Sientes que algo te observa.\n";
        std::cout << "\t\tDe repente, escuchas un ruido proveniente del piso de arriba.\n";
        std::cout << "\t\t--------------------------------------------------------------------------\n";

        std::cout << "\t\t------------------------------------------------------------\n";
        std::cout << "\t\t1. Subir las escaleras para investigar el ruido.\n";
        std::cout << "\t\t2. Permanecer en el lugar actual y esperar a ver qué sucede.\n";
        std::cout << "\t\t------------------------------------------------------------\n";

        int decision1;
        std::cin >> decision1;
        system("cls");

        if (decision1 == 1) {
            std::cout << "\t\t-------------------------------------------------------------------\n";
            std::cout << "\t\tMientras subes las escaleras, sientes que la temperatura disminuye.\n";
            std::cout << "\t\tLlegas a una puerta entreabierta. ¿Qué haces?\n";
            std::cout << "\t\t1. Entrar a la habitación.\n";
            std::cout << "\t\t2. Retroceder y bajar las escaleras.\n";
            std::cout << "\t\t-------------------------------------------------------------------\n";

            int decision2;
            std::cin >> decision2;
            system("cls");

            if (decision2 == 1) {
                std::cout << "\t\t---------------------------------------------------------------------------------\n";
                std::cout << "\t\tDentro de la habitación, encuentras una figura sombría. Te quedas paralizado y...\n";
                std::cout << "\n";
                std::cout << "\t\t============\n";
                std::cout << "\t\t==GameOver==\n";  
                std::cout << "\t\t============\n";
                std::cout << "\n";
                std::cout << "\t\tHas caído en la trampa de la presencia maligna.\n";
                std::cout << "\t\t---------------------------------------------------------------------------------\n";
                return 0;
            }
            else {
                std::cout << "\t\t-----------------------------------------------------------------------------------\n";
                std::cout << "\t\tRetrocedes y decides bajar las escaleras. Sientes un alivio momentáneo.\n";
                std::cout << "\t\tMientras bajas, escuchas un susurro escalofriante, pero logras salir de la mansión.\n";
                std::cout << "\t\t¡Felicidades! Escapaste con éxito de la mansión tenebrosa.\n";
                std::cout << "\t\t-----------------------------------------------------------------------------------\n";
            }
        }
        else {
            std::cout << "\t\t-------------------------------------------------------------------------------\n";
            std::cout << "\t\tPermaneces en el lugar, pero el ruido se hace más fuerte.\n";
            std::cout << "\t\tDe repente, una sombra te envuelve. Te das cuenta de que ya es demasiado tarde.\n";
            std::cout << "\n";
            std::cout << "\t\t============\n";
            std::cout << "\t\t=!GameOver¡=\n";
            std::cout << "\t\t============\n";
            std::cout << "\n";
            std::cout << "\t\tLa oscuridad te consume.\n";
            std::cout << "\t\t-------------------------------------------------------------------------------\n";
            return 0;
        }

        std::cout << "\t\t--------------------------------------------------------------------------\n";
        std::cout << "\t\tMiras a tu alrededor y encuentras una llave oxidada en una mesa cercana.\n";
        std::cout << "\t\t1. Tomar la llave.\n";
        std::cout << "\t\t2. Ignorar la llave y continuar explorando.\n";
        std::cout << "\t\t--------------------------------------------------------------------------\n";

        int decision3;
        std::cin >> decision3;
        system("cls");

        if (decision3 == 1) {
            std::cout << "\t\t-----------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tGuardas la llave en tu bolsillo. No estás seguro de para qué será útil, pero parece importante.\n";
            std::cout << "\t\t-----------------------------------------------------------------------------------------------\n";
        }
        else {
            std::cout << "\t\t---------------------------------------------------------\n";
            std::cout << "\t\tDecides dejar la llave y continuar explorando la mansión.\n";
            std::cout << "\t\t---------------------------------------------------------\n";
        }

        std::cout << "\t\t---------------------------------------------------------------------------\n";
        std::cout << "\t\tMientras exploras, escuchas risas distorsionadas y murmullos inexplicables.\n";
        std::cout << "\t\t1. Seguir explorando sin prestar atención a los sonidos.\n";
        std::cout << "\t\t2. Intentar localizar la fuente de los sonidos.\n";
        std::cout << "\t\t----------------------------------------------------------------------------\n";


        int decision4;
        std::cin >> decision4;
        system("cls");

        if (decision4 == 1) {
            std::cout << "\t\t------------------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tAvanzas con cautela, pero los sonidos te siguen. Comienzas a sentir una presencia cada vez más fuerte.\n";
            std::cout << "\t\tDe repente, te encuentras atrapado en una ilusión espeluznante.\n";
            std::cout << "\n";
            std::cout << "\t\t============\n";
            std::cout << "\t\t=!GameOver¡=\n";
            std::cout << "\t\t============\n";
            std::cout << "\n";
            std::cout << "\t\t------------------------------------------------------------------------------------------------------\n";
            return 0;
        }
        else {
            std::cout << "\t\t------------------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tDecides buscar la fuente de los sonidos. Encuentras una puerta secreta y decides abrirla con la llave.\n";
            std::cout << "\t\tTe enfrentas a una habitación oculta donde descubres la verdad detrás de la maldición de la mansión.\n";
            std::cout << "\t\t¡Felicidades! Has desentrañado el misterio y te has liberado de la mansión encantada.\n";
            std::cout << "\t\t------------------------------------------------------------------------------------------------------\n";
        }

        std::cout << "\t\t------------------------------------------------------------------------------------\n";
        std::cout << "\t\t\nMientras exploras la habitación oculta, encuentras un viejo diario sobre una mesa.\n";
        std::cout << "\t\t1. Leer el diario para obtener más información.\n";
        std::cout << "\t\t2. Ignorar el diario y seguir explorando la habitación.\n";
        std::cout << "\t\t------------------------------------------------------------------------------------\n";

        int decision5;
        std::cin >> decision5;
        system("cls");

        if (decision5 == 1) {
            std::cout << "\t\t--------------------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tAl leer el diario, descubres que la mansión está maldita debido a un trágico evento del pasado.\n";
            std::cout << "\t\tTe das cuenta de que hay una manera de romper la maldición, pero requiere realizar un ritual específico.\n";
            std::cout << "\t\t--------------------------------------------------------------------------------------------------------\n";
        }
        else {
            std::cout << "\t\t---------------------------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tDecides no leer el diario y continuar explorando la habitación. Encuentras un extraño artefacto en una esquina.\n";
            std::cout << "\t\t1. Investigar el artefacto.\n";
            std::cout << "\t\t2. Dejar el artefacto y continuar con el diario.\n";
            std::cout << "\t\t---------------------------------------------------------------------------------------------------------------\n";

            int decision6;
            std::cin >> decision6;
            system("cls");

            if (decision6 == 1) {
                std::cout << "\t\t------------------------------------------------------------------------------------------------------------------\n";
                std::cout << "\t\tAl tocar el artefacto, sientes una extraña energía. De repente, te encuentras en un lugar completamente diferente.\n";
                std::cout << "\t\tHas activado un portal dimensional sin darte cuenta.\n";
                std::cout << "\n";
                std::cout << "\t\t============\n";
                std::cout << "\t\t=!GameOver¡=\n";
                std::cout << "\t\t============\n";
                std::cout << "\n";
                std::cout << "\t\t------------------------------------------------------------------------------------------------------------------\n";
                return 0;
            }
            else {
                std::cout << "\t\t-----------------------------------------------------------------------------------------------------------\n";
                std::cout << "\t\tDecides dejar el artefacto y retomar la lectura del diario.\n";
                std::cout << "\t\tDescubres que la única manera de romper la maldición es realizar un ritual específico en la sala principal.\n";
                std::cout << "\t\t-----------------------------------------------------------------------------------------------------------\n";
            }
        }

        std::cout << "\t\t-------------------------------------------------------------------------------------\n";
        std::cout << "\t\t\nDecides regresar a la sala principal para realizar el ritual y romper la maldición.\n";
        std::cout << "\t\t1. Ir directamente a la sala principal.\n";
        std::cout << "\t\t2. Inspeccionar otras habitaciones antes de ir a la sala principal.\n";
        std::cout << "\t\t-------------------------------------------------------------------------------------\n";

        int decision7;
        std::cin >> decision7;
        system("cls");

        if (decision7 == 1) {
            std::cout << "\t\t-------------------------------------------------------------------------------------\n";
            std::cout << "\t\tLlegas a la sala principal y comienzas el ritual. Sientes una presión en el aire y...\n";
            std::cout << "\t\t¡Felicidades! Has logrado romper la maldición y escapar de la mansión.\n";
            std::cout << "\t\t-------------------------------------------------------------------------------------\n";
        }
        else {
            std::cout << "\t\t------------------------------------------------------------------------------------------------------------------\n";
            std::cout << "\t\tDecides inspeccionar otras habitaciones antes de ir a la sala principal. En una de las habitaciones, encuentras...\n";
            std::cout << "\t\t1. Una pista crucial para el ritual.\n";
            std::cout << "\t\t2. Un peligro inesperado que te atrapa.\n";
            std::cout << "\t\t------------------------------------------------------------------------------------------------------------------\n";

            int decision8;
            std::cin >> decision8;
            system("cls");

            if (decision8 == 1) {
                std::cout << "\t\t--------------------------------------------------------------------------------------\n";
                std::cout << "\t\tEncuentras una pista crucial que te ayuda a realizar el ritual de manera más efectiva.\n";
                std::cout << "\t\tFinalmente, en la sala principal, realizas el ritual con éxito y rompes la maldición.\n";
                std::cout << "\t\t¡Felicidades! Has escapado de la mansión y revelado todos sus secretos.\n";
                std::cout << "\t\t--------------------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "\t\t---------------------------------------------------------------\n";
                std::cout << "\t\tTe enfrentas a un peligro inesperado que te atrapa.\n";
                std::cout << "\n";
                std::cout << "\t\t============\n";
                std::cout << "\t\t=!GameOver¡=\n";
                std::cout << "\t\t============\n";
                std::cout << "\n";
                std::cout << "\t\t---------------------------------------------------------------\n";
                return 0;
            }
        }

        std::cout << "\t\t----------------------------------\n";
        std::cout << "\t\t\n¿Quieres jugar nuevamente? (s/n): ";
        std::cout << "\t\t----------------------------------\n";
        std::cin >> jugarNuevamente;
        system("cls");

    } while (jugarNuevamente == 's' || jugarNuevamente == 'S');

    return 0;
}



