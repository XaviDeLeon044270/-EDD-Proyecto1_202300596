#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {

private:
    std::string nombreUsuario;
    std::string contrasena;
    std::string nombre;

public:
    Usuario(std::string nombreUsuario, std::string contrasena, std::string nombre);

    friend class UsuarioNodo;
};

#endif