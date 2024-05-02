// Examen poo parte2.cpp 
/*
* Define una clase base llamada FiguraGeometrica con un método virtual puro calcularArea(). 
* Luego, crea dos clases derivadas llamadas Triangulo y Circulo que hereden de FiguraGeometrica y sobrescriban el método calcularArea()
* para calcular el área correspondiente de cada figura.
*/
#include <iostream>
using namespace std;

class FiguraGeometrica {
public:
    virtual float calcularArea() const = 0;
};

class Triangulo : public FiguraGeometrica {
private:
    float base;
    float altura;
public:
    Triangulo(float b, float h) : base(b), altura(h) {}

    float calcularArea() const override {
        return (base * altura) / 2;
    }

    void SetAltura(float h) {
        altura = h;
    }
    float GetAltura() {
        return altura;
    }

    void SetBase(float b) {
        base = b;
    }
    float GetBase() {
        return base;
    }
};

class Circulo : public FiguraGeometrica {
private:
    float radio;
public:

    Circulo(float r) : radio(r) {}

    float calcularArea() const override {
        return 3.14159f * radio * radio;
    }
    
    void SetRadio(float r) {
        radio = r;
    }
    float GetRadio() {
        return radio;
    }
};

int main() {
    
    Triangulo tri(5, 3);
    cout << "Triangulo" << endl;
    cout << "Base: " << tri.GetBase() << endl; 
    cout << "Altura: " << tri.GetAltura() << endl; 
    cout << "Area del triangulo: " << tri.calcularArea() << endl;

    Circulo cir(4); 
    cout << endl << "Circulo" << endl;
    cout << "Radio: " << cir.GetRadio() << endl;
    cout << "Area del circulo: " << cir.calcularArea() << endl;

}
