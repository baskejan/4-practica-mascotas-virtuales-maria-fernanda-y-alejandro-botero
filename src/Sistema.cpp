#include "Sistema.h"
#include <tuple>
#include <iostream>
#include <map>

Sistema::Sistema() {
    //Inicializamos la Tienda
    this->mitienda = Tienda();

    //Inicializamos los Estados Emocionales
    this->EmocionesDisponibles = {"Feliz", "Triste", "Enojado", "Sorprendido"};

    //Inicializamos los Estados de Salud
    this->EstadosSaludDisponibles = {"Sano", "Enfermo", "Riesgo"};

    //Inicializamos las Habilidades
    map<string, tuple<string, int>> Habilidades;

    Habilidades["Bailar"] = make_tuple("Mover el cuerpo al ritmo de la musica.", 2);
    Habilidades["Saludar"] = make_tuple("Expresar cortesía con un gesto o palabra.", 1);
    Habilidades["Girar"] = make_tuple("Rotar sobre un eje o punto fijo.", 1);
    Habilidades["Saltar"] = make_tuple("Impulsarse hacia arriba o adelante con los pies.", 3);
    Habilidades["Correr"] = make_tuple("Desplazarse rapidamente con pasos largos.", 3);

    // Mostrar las habilidades
    for (auto& habilidad : Habilidades) {
        Habilidad habilidad_nueva(habilidad.first, get<0>(habilidad.second), get<1>(habilidad.second));
        this->HabilidadDisponibles.push_back(habilidad_nueva);
    }
};

void Sistema::VerHabilidadDisp() {
    cout << "Habilidades" << "\n";
    for (auto& habilidad : this->HabilidadDisponibles) {
        cout << "Nombre " << habilidad.getNombreHabilidad() << " Descrip " << habilidad.getDescripcion() << "Nivel Exp R " << habilidad.getNivelExpRequerida() << "\n" << endl;
    }
}

void Sistema::VerEmocionesDisp() {
    cout << "Emociones" << "\n";
    for (auto& emocion: this->EmocionesDisponibles) {
        cout << emocion << "\n" << endl;
    }
}

void Sistema::VerEstadosSaludDisp(){
    cout << "Estados Salud" << "\n";
    for (auto& estado: this->EstadosSaludDisponibles) {
        cout << estado <<  "\n" << endl;
    }
}

void Sistema::RegistrarUsuario(string nombre, string password) {
    Usuario nuevo_usuario(nombre, password);
    this->UsuariosRegistrados.push_back(nuevo_usuario);
}

Usuario* Sistema::IniciarSesion(string nombre, string password) {
    for (auto& usuario : this->UsuariosRegistrados) {
        if (usuario.getNombre() == nombre) {
            return &usuario;
        }
    }
    return nullptr;
}




