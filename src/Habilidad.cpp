#include "Habilidad.h"

#include <string>


using namespace std;
Habilidad::Habilidad(string nombre, string descripcion, int NivelExpRequerida) {
    this->NombreHabilidad = nombre;
    this->descripcion = descripcion;
    this->NivelExpRequerida = NivelExpRequerida;
};

string Habilidad::getNombreHabilidad() {
    return this->NombreHabilidad;
};

string Habilidad::getDescripcion() {
    return this->descripcion;
};

int Habilidad::getNivelExpRequerida() {
    return this->NivelExpRequerida;
}