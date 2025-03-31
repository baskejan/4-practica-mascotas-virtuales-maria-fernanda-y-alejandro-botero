#include "Tienda.h"

#include <iostream>
#include <tuple>
#include <map>
#include <ostream>
//Constructor de Tienda

Tienda::Tienda() {
    this->NombreTienda = "LA TIENDA";
    map<string, tuple<string, string, int>> Objetos;
    Objetos["Gorro"] = make_tuple("Ropa", "Mejora Emocion", 5000);
    Objetos["Vestido"] = make_tuple("Ropa", "Mejora Emocion", 2000);
    Objetos["Pastel"] = make_tuple("Comida", "Mejora Salud", 4000);
    Objetos["Zanahoria"] = make_tuple("Comida", "Mejora Salud", 4800);
    Objetos["Agua"] = make_tuple("Comida", "Mejora Salud", 7000);
    Objetos["Medicina"] = make_tuple("Comida", "Mejora Salud", 4500);
    Objetos["Peluche"] = make_tuple("Juguete", "Mejora Emocion", 2000);
    Objetos["Pelota"] = make_tuple("Juguete", "Mejora Emocion", 3400);

    for(auto &iter: Objetos) {
        Objeto nuevo_Objeto(iter.first, get<0>(iter.second), get<1>(iter.second), get<2>(iter.second));
        this->ObjetosDisponibles.push_back(nuevo_Objeto);
    }
};

void Tienda::VerObjetos() {
    for (auto &iter: this->ObjetosDisponibles) {
        cout << "nombre " << iter.getNombre() << " tipo " << iter.getTipo() << " efecto " << iter.getEfecto() << " precio " << iter.getPrecio()<< "\n" << endl;
    }
}




