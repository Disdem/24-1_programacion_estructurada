#include <iostream>
#include <string>
#include<math.h>


int main()
{
    int opc = 0, m1 = 0, m2 = 0, rm = 0, d1 = 0, d2 = 0, s1 = 0, s2 = 0, rs = 0, r1 = 0, r2 = 0, rr = 0, mm1 = 0, mm2 = 0;
    double p1 = 0, p2 = 0, rp = 0;
    float rd = 0.0;
    do
    {
        system("cls");
        std::cout << "\t \t \t Hola! \n \t Este programa es una calculadora, elije la \n \t operacion que deseas realizar:" << std::endl;
        std::cout << "\t 1.- Multiplicacion \t 2.- Division \n\t 3.- Suma \t\t 4.- Resta \n\t 5.- Valor Absoluto \t\t 6.- Mayor que Menor que \n\t\t\t 7.- Salir" << std::endl;
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            system("cls");
            std::cout << "\tHas elegido la opcion de multiplicacion" << std::endl;
            std::cout << "\tEscribe el primer numero que deseas multiplicar: ";
            std::cin >> m1;
            std::cout << "\tAhora escribe el segundo numero: ";
            std::cin >> m2;
            rm = m1 * m2;
            std::cout << "\tTu respuesta es: " << rm << std::endl;
            system("pause");
            break;

        case 2:
            system("cls");
            std::cout << "\tHas elegido la opcion de division" << std::endl;
            std::cout << "\tEscribe el numero que deseas dividir: ";
            std::cin >> d1;
            std::cout << "\tAhora escribe el numero que lo va a dividir: ";
            std::cin >> d2;
            rd = d1 / d2;
            std::cout << "\tTu respuesta es: " << rd << std::endl;
            system("pause");
            break;

        case 3:
            system("cls");
            std::cout << "\tHas elegido la opcion de suma" << std::endl;
            std::cout << "\tEscribe el primer numero que deseas sumar: ";
            std::cin >> s1;
            std::cout << "\tAhora escribe el segundo numero: ";
            std::cin >> s2;
            rs = s1 + s2;
            std::cout << "\tTu respuesta es: " << rs << std::endl;
            system("pause");
            break;

        case 4:
            system("cls");
            std::cout << "\tHas elegido la opcion de resta" << std::endl;
            std::cout << "\tEscribe el primer numero: ";
            std::cin >> r1;
            std::cout << "\tAhora escribe la cantidad que le deseas restar: ";
            std::cin >> r2;
            rr = r1 - r2;
            std::cout << "\tTu respuesta es: " << rr << std::endl;
            system("pause");
            break;

        case 5:
            system("cls");
            std::cout << "\tHas elegido la opcion de el valor absoluto" << std::endl;
            std::cout << "\t Escribe un numero: ";
            std::cin >> p1;
            if (p1 < 0)
            {
                rp = p1 * -1;
                std::cout << "\tEl valor absoluto de " << p1 << "es: " << rp << std::endl;
            }
            else
            {
                std::cout << "\t" << p1 << " es su propio valor absoluto!" << std::endl;
            }
            system("pause");
            break;

        case 6:
            system("cls");
            std::cout << "\tHas elegido la opcion de mayor que menor que" << std::endl;
            std::cout << "\tEscribe un numero: ";
            std::cin >> mm1;
            std::cout << "\tEscribe otro numero: ";
            std::cin >> mm2;
            if (mm1 == mm2)
            {
                std::cout << "\t Ambos numeros son iguales" << std::endl;
            }
            else
            {
                if (mm1 < mm2)
                {
                    std::cout << "\t" << mm1 << " es menor que " << mm2 << std::endl;
                }
                else
                {
                    std::cout << "\t" << mm1 << " es mayor que " << mm2 << std::endl;
                }
            }
            system("pause");
            break;
        }
    } while (opc < 7);
    std::cout << "Hasta luego!" << std::endl;
}