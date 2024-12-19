#include "../../includes/DepartamentoNodo.h"
#include <iostream>

DepartamentoNodo::DepartamentoNodo(std::string nombre) : nombre(nombre), derecha(nullptr), arriba(nullptr), abajo(nullptr) {
    this -> nombre = nombre;
}

void DepartamentoNodo::mostrarDatos() const {
    std::cout << "Departamento: " << nombre << std::endl;
}