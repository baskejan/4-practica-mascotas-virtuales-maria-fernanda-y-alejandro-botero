
#ifndef HABILIDAD_H
#define HABILIDAD_H

#include <string>

using namespace std;
class Habilidad {
private:
    string NombreHabilidad;
    string descripcion;
    int NivelExpRequerida;
public:
    //Constructor
    Habilidad(string NombreHabilidad, string descripcion, int NivelExpRequerida);

    //Gettters
    string getDescripcion();
    string getNombreHabilidad();
    int getNivelExpRequerida();
};

#endif
