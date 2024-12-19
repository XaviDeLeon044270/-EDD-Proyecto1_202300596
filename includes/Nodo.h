#ifndef NODO_H
#define NODO_H

class Nodo {

protected:
    Nodo *izquierda;
    Nodo *derecha;
    Nodo *arriba;
    Nodo *abajo;
    Nodo *adelante;
    Nodo *atras;

public:
    Nodo();

    virtual ~Nodo();

    virtual void mostrarDatos() const = 0;

    friend class MatrizDispersa;
};

#endif 