#include "Mascota.h"
#include <iostream>

using namespace std;

Mascota::Mascota(string nombre) {
    Nombre = nombre;
    EstadoEmocional = "Feliz";
    EstadoSalud = "Sano";
    Edad = 1;
    NivelExp = 0;
    NivelEnergia = 5;
}

// Getters
string Mascota::getNombre() { return Nombre; }
string Mascota::getEstadoEmocional() { return EstadoEmocional; }
string Mascota::getEstadoSalud() { return EstadoSalud; }
int Mascota::getEdad() { return Edad; }
int Mascota::getNivelExp() { return NivelExp; }
int Mascota::getNivelEnergia() { return NivelEnergia; }

void Mascota::setNivelExp(int nivel) { NivelExp = nivel; }

// Métodos para objetos y habilidades
void Mascota::DarObjeto(Objeto* objeto) {
    ObjetosAsignados.push_back(objeto);
}

void Mascota::VerObjetosAsignados() {
    cout << "Objetos asignados a " << Nombre << ":\n";
    for (Objeto* obj : ObjetosAsignados) {
        cout << "- " << obj->getNombre() << "\n";
    }
}

void Mascota::VerHabilidadesMascota() {
    cout << "Habilidades de " << Nombre << ":\n";
    for (Habilidad* habilidad : HabilidadesMascota) {
        cout << "- " << habilidad->getNombreHabilidad() << "\n";
    }
}


void Mascota::Evolucionar() {
    if (NivelExp >= 5) {
        Edad++;
        NivelEnergia += 2;
        NivelExp = 1;
        cout << Nombre << " ha evolucionado! Ahora tiene " << Edad << " años y más energía.\n";
    } else {
        cout << Nombre << " necesita más experiencia para evolucionar.\n";
    }
}


void Mascota::AprenderHabilidad(Habilidad* habilidad) {
    if (NivelExp >= habilidad->getNivelExpRequerida()) {
        HabilidadesMascota.push_back(habilidad);
        cout << Nombre << " ha aprendido la habilidad " << habilidad->getNombreHabilidad() << "!\n";
    } else {
        cout << Nombre << " no tiene suficiente experiencia para aprender esta habilidad.\n";
    }
}