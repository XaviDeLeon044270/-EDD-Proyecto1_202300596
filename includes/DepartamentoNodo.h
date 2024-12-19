#ifndef DEPARTAMENTONODO_H
#define DEPARTAMENTONODO_H

#include <string>
#include "Nodo.h"
#include "UsuarioNodo.h"

class DepartamentoNodo : public Nodo {
private:
    std::string nombre;
    Nodo *derecha;
    DepartamentoNodo *arriba;
    DepartamentoNodo *abajo;

public:
    DepartamentoNodo(std::string nombre) : nombre(nombre), derecha(nullptr), arriba(nullptr), abajo(nullptr) {}

    void mostrarDatos() const override;

    friend class MatrizDispersa;
};

#endif