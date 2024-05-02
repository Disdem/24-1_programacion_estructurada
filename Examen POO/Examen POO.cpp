// Examen POO.cpp 
/* Directions
* Escribe una clase llamada Rectangulo que represente un rectángulo en un plano cartesiano. 
* La clase debe tener miembros privados para almacenar la longitud y el ancho del rectángulo, y métodos públicos para calcular el área y el perímetro del rectángulo. 
* Además, crea dos objetos Rectangulo con diferentes dimensiones y muestra sus áreas y perímetros.
*/

#include <iostream>
#include <string>

using namespace std;

class rectangulo
{
private:
    float longitud;
    float ancho;
    string nombre;
    float area;
    float perimetro;

public:

    void perimetroc() {
        perimetro = longitud + longitud + ancho + ancho;
    }
    void areac() {     
        area = longitud * ancho;
    }

    rectangulo()
    {
        longitud = 20;
        ancho = 10;
        nombre = "Rectangulo";
        area = 200;
        perimetro = 60;
    }

    rectangulo(float l, float a, string n, float ar, float p)
    {
        longitud = l;
        ancho = a;
        nombre = n;
        area = ar;
        perimetro = p;
    }

    ~rectangulo() {}

    void SetLongitud(float l)
    {
        longitud = l;
    }
    float GetLongitud() {
        return longitud;
    }

    void SetAncho(float a) {
        ancho = a;
    }
    float GetAncho() {
        return ancho;
    }

    void SetNombre(string n) {
        nombre = n;
    }
    string GetNombre() {
        return nombre;
    }

    void SetArea(float ar) {
        area = ar;
    }
    float GetArea() {
        return area;
    }

    void SetPerimetro(float p) {
        perimetro = p;
    }
    float GetPerimetro() {
        return perimetro;
    }
};

int main()
{
    rectangulo uno;
    cout << "Nombre: " << uno.GetNombre() << endl;
    cout << "Longitud: " << uno.GetLongitud() << endl;
    cout << "Ancho: " << uno.GetAncho() << endl;
    cout << "Area: " << uno.GetArea() << endl;
    cout << "Perimetro: " << uno.GetPerimetro() << endl;

    rectangulo dos(40, 10, "Rectangulo 2", 0, 0);
    cout << "Nombre: " << dos.GetNombre() << endl;
    cout << "Longitud: " << dos.GetLongitud() << endl;
    cout << "Ancho: " << dos.GetAncho() << endl;
    dos.perimetroc();
    cout << "Perimetro: " << dos.GetPerimetro() << endl;
    dos.areac();
    cout << "Area: " << dos.GetArea() << endl;
   

}
