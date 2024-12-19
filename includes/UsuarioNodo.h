#ifndef USUARIONODO_H
#define USUARIONODO_H

#include <string>
#include "Nodo.h"
#include "Usuario.h"

class UsuarioNodo : public Nodo {
private:
    Usuario usuario;
    Nodo *izquierda;
    Nodo *derecha;
    Nodo *arriba;
    Nodo *abajo;
    Nodo *adelante;
    Nodo *atras;

public:
    UsuarioNodo(Usuario usuario)
        : usuario(usuario),
          izquierda(nullptr), derecha(nullptr), arriba(nullptr), abajo(nullptr), adelante(nullptr), atras(nullptr) {}


    void mostrarDatos() const override;

    friend class MatrizDispersa;
};

#endif