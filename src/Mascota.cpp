#include "Mascota.h"

#include <iostream>
#include <ostream>

Mascota::Mascota(string nombre) {
    this->Nombre = nombre;
    this->EstadoEmocional = "Feliz";
    this->EstadoSalud = "Sano";
    this->Edad = 1;
    this->NivelExp = 1;
    this->NivelEnergia = 1;
}

string Mascota::getNombre() {
    return this->Nombre;
}

string Mascota::getEstadoEmocional() {
    return this->EstadoEmocional;
};

string Mascota::getEstadoSalud() {
    return this->EstadoSalud;
}

int Mascota::getNivelExp() {
    return this->NivelExp;
}

int Mascota::getNivelEnergia() {
    return this->NivelEnergia;
}

int Mascota::getEdad() {
    return this->Edad;
}

void Mascota::DarObjeto(Objeto* objeto) {
    this->ObjetosAsignados.push_back(objeto);
}

void Mascota::VerObjetosAsignados() {
    for(auto& objeto : this->ObjetosAsignados) {
        cout << objeto->getNombre() << objeto->getEfecto() << "\n" << endl;
    }
}

void Mascota::VerHabilidadesMascota() {
    cout << this->Nombre << "tiene las siguientes habilidades:\n" << endl;
    for(auto& habilidad: this->HabilidadesMascota) {
         cout << habilidad->getNombreHabilidad() <<" " << habilidad->getDescripcion() << "\n" << endl;

    }
}
