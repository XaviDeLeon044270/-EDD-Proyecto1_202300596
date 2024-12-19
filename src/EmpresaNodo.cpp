#include "../../includes/EmpresaNodo.h"
#include <iostream>

EmpresaNodo::EmpresaNodo(std::string nombre) : nombre(nombre), abajo(nullptr), derecha(nullptr), izquierda(nullptr) {
    this -> nombre = nombre;
}

void EmpresaNodo::mostrarDatos() const {
    std::cout << "Empresa: " << nombre << std::endl;
}