#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H

#include "EmpresaNodo.h"
#include "DepartamentoNodo.h"
#include "UsuarioNodo.h"
#include <iostream>


class MatrizDispersa {
private:
    EmpresaNodo *cabeceraColumna;
    DepartamentoNodo *cabeceraFila;
    
public:
    MatrizDispersa();

    bool matrizVacia();

    EmpresaNodo *existeColumna(std::string empresa);

    DepartamentoNodo *existeFila(std::string departamento);

    EmpresaNodo *insertarColumna(std::string empresa);

    DepartamentoNodo *insertarFila(std::string departamento);

    void insertarUsuario(UsuarioNodo *usuario, std::string empresa, std::string departamento);
    void insertarUsuarioAlFinal(UsuarioNodo *usuario, EmpresaNodo *empresa, DepartamentoNodo *departamento);
    
    void mostrarMatriz();
};

#endif
