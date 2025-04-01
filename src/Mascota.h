#ifndef MASCOTA_H
#define MASCOTA_H

#include "Habilidad.h"
#include "Objeto.h"
#include <vector>
#include <string>

using namespace std;

class Mascota {
private:
    string Nombre;
    string EstadoEmocional;
    string EstadoSalud;
    int Edad;
    int NivelExp;
    int NivelEnergia;
    vector <Objeto*> ObjetosAsignados;
    vector<Habilidad*> HabilidadesMascota;

public:
    // Constructor
    Mascota(string nombre);

    // Métodos getters
    string getNombre();
    string getEstadoEmocional();
    string getEstadoSalud();
    int getEdad();
    int getNivelExp();
    int getNivelEnergia();

    // Métodos modificadores
    void setNivelExp(int nivel);

    // Métodos de interacción
    void DarObjeto(Objeto* objeto);
    void VerObjetosAsignados();
    void VerHabilidadesMascota();

    void Evolucionar();
    void AprenderHabilidad(Habilidad* habilidad);
};

#endif