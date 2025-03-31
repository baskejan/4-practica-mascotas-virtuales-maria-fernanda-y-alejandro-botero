#ifndef SISTEMA_H
#define SISTEMA_H

#include <string>

#include "Usuario.h"
#include "Tienda.h"
#include <vector>
using namespace std;

class Sistema {
public:
    //Atributos
    //1. Una lista de Usuarios Registrados
    vector <Usuario> UsuariosRegistrados;

    //2. Una lista de Habilidades Disponibles
    vector <Habilidad> HabilidadDisponibles;

    //3. Lista de EmocionesDisponibles
    vector <string> EmocionesDisponibles;

    //4. Lista de Estados de Salud Disponibles
    vector <string> EstadosSaludDisponibles;

    //5. Tienda

    Tienda mitienda;

    //Metodos
    //Constructor Vacio
    //Este constructor debe hacer lo siguiente:
    //1. Inicializar Habilidades Disponibles
    //2. Inicializar Estados de Salud Disponibles
    //3. Inicializar Emociones Disponibles
    //4.Inicializar la Tienda
    Sistema();


    //1. Registrar Usuario
    void RegistrarUsuario(string nombre, string password);

    //2. Iniciar Sesion
    Usuario* IniciarSesion(string nombre, string password);

    //3. Funciones Asociadas a generar cambios en las caracteristicas de una mascota

    void AdoptarMascota(Usuario* usuario);
    void AgregarHabilidadMascota(Mascota* mi_mascota);
    void CambiarEstadoSaludMascota(Mascota* mi_mascota);
    void CambiarEstadoEmocionalMascota(Mascota* mi_mascota);

    //4. Ver Habilidades Disponibles
    void VerHabilidadDisp();
    void VerEmocionesDisp();
    void VerEstadosSaludDisp();
};


#endif
