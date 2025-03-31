#include "Objeto.h"
#include <string>

using namespace std;
Objeto::Objeto(string nombre, string tipo, string efecto, int precio){
    this->nombre = nombre;
    this->tipo = tipo;
    this->efecto = efecto;
    this->precio = precio;
};

string Objeto::getNombre() {
    return this->nombre;
};

string Objeto::getTipo(){
    return this->tipo;
}

string Objeto::getEfecto() {
    return this->efecto;
}

int Objeto::getPrecio(){
    return this->precio;
}