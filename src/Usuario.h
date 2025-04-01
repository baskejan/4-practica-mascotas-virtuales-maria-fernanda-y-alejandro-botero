#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "Mascota.h"

using namespace std;


class Usuario {
private:
    string nombre;
    string password;
    int dinero;
    vector <Objeto*> ObjetosComprados;
    vector<Mascota> MisMascotas;


public:
    //Constructor Vacio
    Usuario(string nombre, string password);

    //Getters
    string getNombre();
    string getPassword();
    int getDinero();

    //setters
    void setdinero(int dinero);

    //Metodos Adicionales

    //Comprar Objeto
    void Comprar(Objeto* objeto);

    //Buscar Mascota
    Mascota* getMascota(string nombre);

    //Get todas las mascotas
    vector<Mascota>& getMascotas();
    //Dar Objeto a Mascota
    void DarObjetoMascota(Mascota* mascota, Objeto* objeto);

    //Ver los objetos comprados
    void VerObjetosComprados();
};
#endif
