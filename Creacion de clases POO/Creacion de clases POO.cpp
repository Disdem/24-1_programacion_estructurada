// Creacion de clases POO.cpp

#include <string>
#include <iostream>

using namespace std;

/* 
* Esta es la clase principal para los atletas, en esta clase se encuentra lo que son los atributos de los atletas
* primeron se mostraron con un public, para que en cualquier parte del codigo lo pueda modificar
* Despues se puso en Private, ya que dejar los atributos al alcance de todos es peligroso para el codigo
* Con el private se tuvieron que hacer ciertas modificaciones como usar setters o set y getters o get para poder tomar los 
* datos de atributos desde cualquier parte del codigo (!Muy importante, solo los atributos o variables que se colocan
desde inicio son los que colocamos en private abre la clase "Atleta" para ver mas!).
* Despues de los atributos son los metodos y todo eso siempre sera publico ver clase "Atleta", es muy importante colocar 
* un set y un get para cada atributo
*/
class Atleta // Definir clase atleta 
{
    // estos son los atributos que al principio estaban en private
    /*
    * Usamos ahora procteted ya que al crear una herencia los atributos en private tambien son excluidos de lo que son los 
    * hijos que se puedan crear a partir de esta clase, colocando la funcion procteted hacemos que los atributos sigan en 
    * private pero si puedan ser heredados por otras clases o hijos 
    */
protected:
    // Atributos
    int energia;
    float velocidad;
    int fuerza;
    string nombre;

    // Aqui es donde comienzan los atributos 
public:
    /*
    * Esta es una funcion extra donde se indica que gaste una cantidad de energia a cambio de aumnetar la velocidad en 
    * misma cantidad
    */
    /*
    * Funcion polimorfica para aumentar las caracteristicas es con la palabra reservada virtual con lo que lograremos hacer
    * que un mismo void o funcion este para todas las demas clases
    */
    virtual void aumentar_vel()
    {
        velocidad++;
        energia--;
    }
    // Constructor Generico
    /*
    * Este es un contructor que si nosotros no otorgamos atributos este constructor de manera automatica los llenara con 
    * los atributo predeterminados que nosotros hallamos asignado
    */
    Atleta()
    {
        energia = 20;
        velocidad = 20;
        fuerza = 20;
        nombre = "Generico";
    }

    // Constructor especifico 
    /*
    * Este es un constructorr que como su nombre lo indica, nosotros ya empezamos a declarar cada atributo que llevara e 
    * incluso le podremos poner un nombre para este atleta en especifico
    */
    Atleta(int e, float v, int f, string n) {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
    }
    /*
    * Este comando es super importante ya que cada vez que el programa este abierto este genera los atletas y esto consumen 
    * ram de nuestro equipo, lo que vuelve lento el programa, con esta linea hacemos que cada vez que el programa los generen
    * los destruya y libere la ram ocupada por ellos, a esto se le llama un destructor
    */
    ~Atleta() {} //  cout << endl <<  nombre << " Ha sido destruido" << endl;  para mostrar cuando se borran destructor
   
    // Setter Permite modificar el atributo
    /*
    * Permite modificar el atributo desde cualquier parte del codigo, pero ahora tendremos que poner la funcion de la 
    * siguiente forma *NOMBRE DEL ATLETA* + . + SetNombre("*NOMBRE DEL ATLETA*"); o si es un int o float es de la siguiente
    * forma *NOMBRE DEL ATLETA*.SetFuerza(450);
    */
    void SetVelocidad(float v) {
        velocidad = v; 
    }
    // Get Permite leer el valor del atributo
    /*
    * Casi igual a un set el get solo nos permite leer o mostrar en consola que es lo que tenemos ya en ese atributo
    * por ejemplo:
    * Atleta Muhamed(300, 200, 100, "Muhamed");
    * En este caso ya aplicamos los atributo y para mostrarlos usamos lo siguiente:
    * std::cout << "velocidad: " << Muhamed.GetVelocidad() << std::endl;
    * con esto en consola ya mostraria lo que son los atributos
    */
    float GetVelocidad() {
        return velocidad; 
    }

    void SetEnergia(int e) {
        energia = e; 
    }
    int GetEnergia() {
        return energia;
    }

    void SetFuerza(int f) {
        fuerza = f;
    }
    int GetFuerza() {
        return fuerza;
    }

    void SetNombre(string n) {
        nombre = n;
    }
    string GetNombre() {
        return nombre;
    }
    /*
    * En este caso para que todos los atributos esten permitidos y visibles en el void main o int main, debemos crear 
    * los set y get para cada atributo sin exepcion
    */
};

/*
* Creacion de clase con herencia, pero en este caso solo se pasaran los datos publicos y procteted
* con esto podremos evitar seguir colocando y programando sin necesidad de colocar todo nuevamente
*/
/*
* Para crear una clase que pueda heredar, primero se crea normalmente y despues se colocan " : " en lugar de " () " y en la
* siguiente parte la clase de donde queremos heredar los atributos
*/
class boxeador : public Atleta{
    int PeleasGanadas; 
    int PeleasPerdidas;  
    int PeleasEmpatadas; 
    int kos; 
public:
    boxeador() : Atleta() // Constructor Generico
    {
        PeleasGanadas = 0; 
        PeleasPerdidas = 0; 
        PeleasEmpatadas = 0;
        kos = 0; 
    }

    boxeador(int e, float v, int f, string n, int g, int p, int emp, int k) {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
        PeleasGanadas = g;
        PeleasPerdidas = p;
        PeleasEmpatadas = emp;
        kos = k;
    }
    ~boxeador(){} // Destructor
        void SetGanadas(int g) {
        PeleasGanadas = 0;
    }
        int GetGanadas() {
            return PeleasGanadas;
        }

        void SetPerdidas(int p) {
            PeleasPerdidas = 0;
        }
        int GetPerdidas() {
            return PeleasPerdidas;
        }

        void SetEmpatadas(int emp) {
            PeleasEmpatadas = 0;
        }
        int GetEmpatadas() {
            return PeleasEmpatadas;
        }

        void Setkos(int k) {
            kos = 0;
        }
        int Getkos() {
            return kos;
        }
};

class futbolista : public Atleta {
    int CopasGanadas;
    int Partidos;
    int Goles;
public:
    futbolista() : Atleta() // Constructor Generico
    {
        CopasGanadas = 0;
        Partidos = 0;
        Goles = 0;

    }

    futbolista(int e, float v, int f, string n, int cg, int par, int gol) {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
        CopasGanadas = cg;
        Partidos = par;
        Goles = gol;
    }
    ~futbolista() {}

    /*
    * Aqui usamos el override para poder modificarlo a gusto desde la clase hijo sin tener que estar declarando cada vez 
    * una nueva funcion o void
    */
    void aumentar_vel()override
    {
        velocidad += 10;
        energia -= 5;
    }

    void SetCopasGanadas(int cg)
    {
        CopasGanadas = 0;
    }
    int GetCopasGanadas()
    {
        return CopasGanadas;
    }

    void SetPartidos(int par) {
        Partidos = 0;
    }
    int GetPartidos() {
        return Partidos;
    }

    void SetGoles(int gol) {
        Goles = 0;
    }
    int GetGoles() {
        return Goles;
    }
};

class ciclista : public Atleta {
    int stamina;
    int resisitencia;
    int circuitos;
public:
    ciclista() : Atleta() // Constructor Generico
    {
        stamina = 0;
        resisitencia = 0;
        circuitos = 0;

    }

    ciclista(int e, float v, int f, string n, int s, int r, int c) {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
        stamina = s;
        resisitencia = r;
        circuitos = c;
    }
    ~ciclista() {}

    /*
    * Aqui usamos el override para poder modificarlo a gusto desde la clase hijo sin tener que estar declarando cada vez
    * una nueva funcion o void
    */
    void aumentar_vel()override
    {
        velocidad += 100;
        energia -= 5;
        stamina -= 10;
        resisitencia -= 5;
    }

    void SetStamina(int s) {
        stamina = 0;
   }
    int GetStamina() {
        return stamina;
    }

    void SetResistencia(int r) {
        resisitencia = 0;
    }
    int GetResistencia() {
        return resisitencia;
    }

    void SetCircuitos(int c) {
        circuitos = 0;
    }
    int GetCircuitos() {
        return circuitos;
    }
};

class corredor : public Atleta {
    int stamina;
    int resisitencia;
    int circuitos;
public:
    corredor() : Atleta() // Constructor Generico
    {
        stamina = 0;
        resisitencia = 0;
        circuitos = 0;

    }

    corredor(int e, float v, int f, string n, int st, int re, int ci) {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
        stamina = st;
        resisitencia = re;
        circuitos = ci;
    }
    ~corredor() {}

    /*
    * Aqui usamos el override para poder modificarlo a gusto desde la clase hijo sin tener que estar declarando cada vez
    * una nueva funcion o void
    */
    void aumentar_vel()override
    {
        velocidad += 30;
        energia -= 3;
        stamina -= 20;
        resisitencia -= 10;
    }

    void SetStamina(int st) {
        stamina = 0;
    }
    int GetStamina() {
        return stamina;
    }

    void SetResistencia(int re) {
        resisitencia = 0;
    }
    int GetResistencia() {
        return resisitencia;
    }

    void SetCircuitos(int ci) {
        circuitos = 0;
    }
    int GetCircuitos() {
        return circuitos;
    }
};

void main() {
    Atleta messi;

    messi.SetEnergia(150);   
    messi.SetVelocidad(500);
    messi.SetFuerza(70);
    messi.SetNombre("Leo");
    cout << messi.GetNombre() << endl;
    cout << "Fuerza: " << messi.GetFuerza() << endl;
    cout << "Velocidad: " << messi.GetVelocidad() << endl;
    cout << "Energia: " << messi.GetEnergia() << endl;

    cout << endl <<  "----------------------------------------------------------------------------------------" << endl;

    Atleta pedro;
    cout << endl << pedro.GetNombre() << endl;
    cout << "Velocidad: " << pedro.GetVelocidad() << endl;
    cout << "Fuerza: " << pedro.GetFuerza() << endl;
    cout << "Energia: " << pedro.GetEnergia() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta Pitbull(300, 200, 500, "Pitbull");
    cout << endl << "Nombre: " << Pitbull.GetNombre() << endl;
    cout << "Fuerza: " << Pitbull.GetFuerza() << endl;
    cout << "Velocidad: " << Pitbull.GetVelocidad() << endl;
    cout << "Energia: " << Pitbull.GetEnergia() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta Canelo(400, 300, 590, "Canelo"); 
    cout << endl << "Nombre: " << Canelo.GetNombre() << endl;
    cout << "Fuerza: " << Canelo.GetFuerza() << endl;
    cout << "Velocidad: " << Canelo.GetVelocidad() << endl;
    cout << "Energia: " << Canelo.GetEnergia() << endl; 

    Canelo.aumentar_vel();
    cout << "Nueva velocidad de Canelo: " << Canelo.GetVelocidad() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta Tyson(450, 350, 520, "Tyson");
    cout << endl << "Nombre: " << Tyson.GetNombre() << endl;
    cout << "Fuerza: " << Tyson.GetFuerza() << endl;
    cout << "Velocidad: " << Tyson.GetVelocidad() << endl;
    cout << "Energia: " << Tyson.GetEnergia() << endl;

    Tyson.aumentar_vel();
    cout << "Nueva velocidad de Tyson: " << Tyson.GetVelocidad() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta Gervonta(450, 280, 520, "Gervonta");
    cout << endl << "Nombre: " << Gervonta.GetNombre() << endl;
    cout << "Fuerza: " << Gervonta.GetFuerza() << endl;
    cout << "Velocidad: " << Gervonta.GetVelocidad() << endl;
    cout << "Energia: " << Gervonta.GetEnergia() << endl;

    Gervonta.aumentar_vel();
    cout << "Nueva velocidad de Gervonta: " << Tyson.GetVelocidad() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta david;
    cout << endl << david.GetNombre() << endl;
    cout << "Velocidad: " << david.GetVelocidad() << endl;
    cout << "Fuerza: " << david.GetFuerza() << endl;
    cout << "Energia: " << david.GetEnergia() << endl; 

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta *Cruz = new Atleta(100, 100, 500, "Pitbull Cruz");
    cout << endl << "Nombre: " << Cruz->GetNombre() << endl;  
    cout << "Fuerza: " << Cruz->GetFuerza() << endl; 
    cout << "Velocidad: " << Cruz->GetVelocidad() << endl; 
    cout << "Energia: " << Cruz->GetEnergia() << endl; 
   
    Cruz->aumentar_vel(); 
    cout << "Nueva velocidad: " << Cruz->GetVelocidad() << endl;  
    delete Cruz;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta bryan;
    cout << endl << bryan.GetNombre() << endl;
    cout << "Velocidad: " << bryan.GetVelocidad() << endl;
    cout << "Fuerza: " << bryan.GetFuerza() << endl;
    cout << "Energia: " << bryan.GetEnergia() << endl; 

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta *Leo = new Atleta(100, 200, 100, "Leo"); 
    cout << endl << "Nombre: " << Leo->GetNombre() << endl; 
    cout << "Fuerza: " << Leo->GetFuerza() << endl; 
    cout << "Velocidad: " << Leo->GetVelocidad() << endl; 
    cout << "Energia: " << Leo->GetEnergia() << endl; 
 
    Leo->aumentar_vel();  
    cout << "Nueva velocidad: " << Leo->GetVelocidad() << endl; 

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    Atleta *Julio = new Atleta(100, 200, 600, "Julio Cesar Chavez");
    cout << endl << "Nombre: " << Julio->GetNombre() << endl;
    cout << "Fuerza: " << Julio->GetFuerza() << endl;
    cout << "Velocidad: " << Julio->GetVelocidad() << endl;
    cout << "Energia: " << Julio->GetEnergia() << endl;
   
    Julio->aumentar_vel();
    cout << "Nueva velocidad: " << Julio->GetVelocidad() << endl;
     
    cout << endl << "----------------------------------------------------------------------------------------" << endl;
    cout << endl << "Nuevo metodo de Herencia" << endl; 

    boxeador Hippo(400, 280, 520, "Hippo", 12, 2, 0, 10);
    cout << endl << "Nombre: " << Hippo.GetNombre() << endl;
    cout << "Fuerza: " << Hippo.GetFuerza() << endl;
    cout << "Velocidad: " << Hippo.GetVelocidad() << endl;
    cout << "Energia: " << Hippo.GetEnergia() << endl;

    Hippo.aumentar_vel(); 
    cout << "Nueva velocidad: " << Hippo.GetVelocidad() << endl;

    cout << "Peleas Ganadas: " << Hippo.GetGanadas() << endl;
    cout << "Peleas Perdidas: " << Hippo.GetPerdidas() << endl; 
    cout << "Peleas Empatadas: " << Hippo.GetEmpatadas() << endl; 
    cout << "Peleas kos: " << Hippo.Getkos() << endl; 

    cout << endl << "----------------------------------------------------------------------------------------" << endl;
    cout << endl << "Nuevo metodo de Polimorfismo" << endl;

    futbolista Leonel(125, 300, 100, "Leonel Messi", 43, 1054, 828); 
    cout << endl << "Nombre: " << Leonel.GetNombre() << endl; 
    cout << "Fuerza: " << Leonel.GetFuerza() << endl; 
    cout << "Velocidad: " << Leonel.GetVelocidad() << endl; 
    cout << "Energia: " << Leonel.GetEnergia() << endl; 
    Leonel.aumentar_vel(); 
    cout << "Nueva velocidad: " << Leonel.GetVelocidad() << endl;
    cout << "Copas Ganadas: " <<  Leonel.GetCopasGanadas() << endl;
    cout << "Partidos: " << Leonel.GetPartidos() << endl;
    cout << "Goles: " << Leonel.GetGoles() << endl;

    Leonel.aumentar_vel();
    cout << "Aumentar velocidad " << Leonel.GetVelocidad() << endl;
    cout << "nueva energia " << Leonel.GetEnergia() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    ciclista Armstrong(150, 450, 100, "Armstrong", 300, 600, 7);
    cout << endl << "Nombre: " << Armstrong.GetNombre() << endl; 
    cout << "Fuerza: " << Armstrong.GetFuerza() << endl; 
    cout << "Velocidad: " << Armstrong.GetVelocidad() << endl; 
    cout << "Energia: " << Armstrong.GetEnergia() << endl; 
    
    cout << "stamina: " << Armstrong.GetStamina() << endl;
    cout << "Resistencia: " << Armstrong.GetResistencia() << endl;
    cout << "Circuitos: " << Armstrong.GetCircuitos() << endl;

    Armstrong.aumentar_vel();
    cout << "Nueva velocidad " << Armstrong.GetVelocidad() << endl;
    cout << "Nueva energia: " << Armstrong.GetEnergia() << endl;
    cout << "Nueva stamina: " << Armstrong.GetStamina() << endl;
    cout << "Nueva resistencia: " << Armstrong.GetResistencia() << endl;

    cout << endl << "----------------------------------------------------------------------------------------" << endl;

    corredor bolt(300, 1000, 100, "Usain Bolt", 300, 200, 19);
    cout << endl << "Nombre: " << bolt.GetNombre() << endl; 
    cout << "Fuerza: " << bolt.GetFuerza() << endl; 
    cout << "Velocidad: " << bolt.GetVelocidad() << endl; 
    cout << "Energia: " << bolt.GetEnergia() << endl; 

    cout << "stamina: " << bolt.GetStamina() << endl; 
    cout << "Resistencia: " << bolt.GetResistencia() << endl; 
    cout << "Circuitos: " << bolt.GetCircuitos() << endl; 

    bolt.aumentar_vel(); 
    cout << "Nueva velocidad " << bolt.GetVelocidad() << endl; 
    cout << "Nueva energia: " << bolt.GetEnergia() << endl; 
    cout << "Nueva stamina: " << bolt.GetStamina() << endl; 
    cout << "Nueva resistencia: " << bolt.GetResistencia() << endl; 
}