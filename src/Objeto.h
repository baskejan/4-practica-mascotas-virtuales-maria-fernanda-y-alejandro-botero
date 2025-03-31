#ifndef OBJETO_H
#define OBJETO_H

#include <string>

using namespace std;
class Objeto {
private:
    string nombre;
    string tipo;
    string efecto;
    int precio;
public:
    Objeto(string nombre, string tipo, string efecto, int precio);
    string getNombre();
    string getTipo();
    string getEfecto();
    int getPrecio();
};
#endif
