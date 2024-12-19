#include "../../includes/UsuarioNodo.h"
#include <iostream>

UsuarioNodo::UsuarioNodo(Usuario usuario)
    : usuario(usuario),
      izquierda(nullptr), derecha(nullptr), arriba(nullptr), abajo(nullptr), adelante(nullptr), atras(nullptr) {
        
        this -> usuario = usuario;

      }

void UsuarioNodo::mostrarDatos() const {
    std::cout << "Usuario: " << usuario.nombreUsuario << std::endl;
    std::cout << "Contraseña: " << usuario.contrasena << std::endl;
    std::cout << "Nombre: " << usuario.nombre << std::endl;
}