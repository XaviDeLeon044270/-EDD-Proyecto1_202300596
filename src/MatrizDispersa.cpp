#include "../../includes/MatrizDispersa.h"

MatrizDispersa::MatrizDispersa() {
    this->cabeceraColumna = nullptr;
    this->cabeceraFila = nullptr;


}

bool MatrizDispersa::matrizVacia() {
    return cabeceraColumna == nullptr && cabeceraFila == nullptr;
}

EmpresaNodo *MatrizDispersa::existeColumna(std::string empresa) {
    if (matrizVacia()) {
        return nullptr;
    }

    EmpresaNodo *auxEmpresa = cabeceraColumna;

    while (auxEmpresa != nullptr) {
        if (auxEmpresa -> nombre == empresa) return auxEmpresa;
        
        auxEmpresa = auxEmpresa -> derecha;
    }

    return nullptr;
}

DepartamentoNodo *MatrizDispersa::existeFila(std::string departamento) {
    if (matrizVacia()) {
        return nullptr;
    }

    DepartamentoNodo *auxDepartamento = cabeceraFila;

    while (auxDepartamento != nullptr) {
        if (auxDepartamento -> nombre == departamento) return auxDepartamento;
        
        auxDepartamento = auxDepartamento -> abajo;
    }

    return nullptr;
}

EmpresaNodo *MatrizDispersa::insertarColumna(std::string empresa) {
    EmpresaNodo *nuevaEmpresa = new EmpresaNodo(empresa);

    if (cabeceraColumna == nullptr) {
        cabeceraColumna = nuevaEmpresa;
        return nuevaEmpresa;
    }

    EmpresaNodo *auxEmpresa = cabeceraColumna;

    while (auxEmpresa -> derecha != nullptr) {
        auxEmpresa = auxEmpresa -> derecha;
    }

    auxEmpresa -> derecha = nuevaEmpresa;
    nuevaEmpresa -> izquierda = auxEmpresa;

    return nuevaEmpresa;
}

DepartamentoNodo *MatrizDispersa::insertarFila(std::string departamento) {
    DepartamentoNodo *nuevoDepartamento = new DepartamentoNodo(departamento);

    if (cabeceraFila == nullptr) {
        cabeceraFila = nuevoDepartamento;
        return nuevoDepartamento;
    }

    DepartamentoNodo *auxDepartamento = cabeceraFila;

    while (auxDepartamento -> abajo != nullptr) {
        auxDepartamento = auxDepartamento -> abajo;
    }

    auxDepartamento -> abajo = nuevoDepartamento;
    nuevoDepartamento -> arriba = auxDepartamento;

    return nuevoDepartamento;
}

void MatrizDispersa::insertarUsuario(UsuarioNodo *usuario, std::string empresa, std::string departamento) {
    
    if (matrizVacia()) {
        EmpresaNodo *nuevaEmpresa = insertarColumna(empresa);
        DepartamentoNodo *nuevoDepartamento = insertarFila(departamento);

        insertarUsuarioAlFinal(usuario, nuevaEmpresa, nuevoDepartamento);

    }



}

void MatrizDispersa::insertarUsuarioAlFinal(UsuarioNodo *usuario, EmpresaNodo *empresa, DepartamentoNodo *departamento) {
    Nodo *auxColumna = empresa;
    Nodo *auxFila = departamento;

    
    while (auxColumna -> abajo != nullptr) {
        auxColumna = auxColumna -> abajo;
    }

    auxColumna -> abajo = usuario;
    usuario -> arriba = auxColumna;

    while (auxFila -> derecha != nullptr) {
        auxFila = auxFila -> derecha;
    }

    auxFila -> derecha = usuario;
    usuario -> izquierda = auxFila;
}

void MatrizDispersa::mostrarMatriz(){
    if (matrizVacia()) {
        std::cout << "La matriz está vacía" << std::endl;
        return;
    }

    EmpresaNodo *auxEmpresa = cabeceraColumna;
    DepartamentoNodo *auxDepartamento = cabeceraFila;

    while (auxEmpresa != nullptr) {
        std::cout << auxEmpresa -> nombre << " -> ";
        auxEmpresa = auxEmpresa -> derecha;
    }

    std::cout << std::endl;

    while (auxDepartamento != nullptr) {
        std::cout << auxDepartamento -> nombre << " -> ";
        auxDepartamento = auxDepartamento -> abajo;
    }

    std::cout << std::endl;
}


