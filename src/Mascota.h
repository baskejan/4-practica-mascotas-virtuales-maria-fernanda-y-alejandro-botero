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
    //Constructor de la clase Mascota
    Mascota(string nombre);

    //Metodos
    string getNombre();
    string getEstadoEmocional();
    string getEstadoSalud();
    int getEdad();
    int getNivelExp();
    int getNivelEnergia();

    //Dar Objeto
    void DarObjeto(Objeto* objeto);

    //Ver las Habilidades y los Objetos que se le dio a la Mascota
    void VerObjetosAsignados();
    void VerHabilidadesMascota();
};

#endif