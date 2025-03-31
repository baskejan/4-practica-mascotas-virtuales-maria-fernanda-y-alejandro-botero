#ifndef TIENDA_H
#define TIENDA_H

#include <string>
#include <vector>
#include "Objeto.h"

using namespace std;

class Tienda {
private:
    string NombreTienda;
    vector <Objeto> ObjetosDisponibles;
public:
    Tienda();

    //Metodos

    void VerObjetos();
};
#endif