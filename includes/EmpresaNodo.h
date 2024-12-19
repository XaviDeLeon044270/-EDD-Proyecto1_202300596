#ifndef EMPRESANODO_H
#define EMPRESANODO_H

#include <string>
#include "Nodo.h"
#include "UsuarioNodo.h"

class EmpresaNodo : public Nodo {
private:
    std::string nombre;
    Nodo *abajo;
    EmpresaNodo *derecha;
    EmpresaNodo *izquierda;

public:
    EmpresaNodo(std::string nombre) : nombre(nombre), abajo(nullptr), derecha(nullptr), izquierda(nullptr) {}

    void mostrarDatos() const override;

    friend class MatrizDispersa;
};

#endif