// Examen de poo parte4.cpp 
/*
* Define una clase llamada Vector2D que represente un vector bidimensional con componentes x y y.
* Sobrecarga los operadores + y - para sumar y restar vectores respectivamente. 
* Luego, crea dos objetos Vector2D y realiza operaciones de suma y resta entre ellos, mostrando el resultado.
*/

#include <iostream>

class Vector2D {
private:
    float x;
    float y;

public:
    Vector2D(float x_val = 0.0f, float y_val = 0.0f) : x(x_val), y(y_val) {}

    Vector2D operator+(const Vector2D& vec) const {
        return Vector2D(x + vec.x, y + vec.y);
    }

    Vector2D operator-(const Vector2D& vec) const {
        return Vector2D(x - vec.x, y - vec.y);
    }

    void imprimir() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector2D vec1(3.0f, 4.0f);
    Vector2D vec2(1.5f, 2.5f);

    Vector2D suma = vec1 + vec2;
    Vector2D resta = vec1 - vec2;

    std::cout << "La suma de los vectores ";
    vec1.imprimir();
    std::cout << " y ";
    vec2.imprimir();
    std::cout << " es: ";
    suma.imprimir();
    std::cout << std::endl;

    std::cout << "La resta de los vectores ";
    vec1.imprimir();
    std::cout << " y ";
    vec2.imprimir();
    std::cout << " es: ";
    resta.imprimir();
    std::cout << std::endl;

}
