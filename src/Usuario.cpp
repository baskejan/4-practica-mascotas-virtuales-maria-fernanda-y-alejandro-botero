#include "Usuario.h"

#include <iostream>
#include <ostream>
#include <string>
Usuario::Usuario(string nombre, string password) {
    this->nombre = nombre;
    this->password = password;
    this->dinero = 10000;
}

string Usuario::getNombre() {
    return this->nombre;
}

string Usuario::getPassword() {
    return this->password;
}
int Usuario::getDinero() {
    return this->dinero;
}
void Usuario::setdinero(int dinero) {
    this->dinero = dinero;
}

void Usuario::Comprar(Objeto* objeto) {
    this->ObjetosComprados.push_back(objeto);
}

Mascota* Usuario::getMascota(string nombre) {
    for (auto& mascota: this->MisMascotas) {
        if (mascota.getNombre() == nombre) {
            return &mascota;
        }
    }
    return nullptr;
}

vector<Mascota>& Usuario::getMascotas() {
    return MisMascotas;
}

void Usuario::DarObjetoMascota(Mascota *mascota, Objeto *objeto) {
    mascota->DarObjeto(objeto);
}

void Usuario::VerObjetosComprados() {
    for (auto& objeto: this->ObjetosComprados) {
        cout << objeto->getNombre() << " " << objeto->getEfecto() << " " << objeto->getPrecio() << "\n" << endl;
    }
}


