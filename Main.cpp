#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Main {
private:
    string usuario, password, departamento, empresa;
    
    

public:
    void iniciarSesion() {
        
        cout << "Ingrese su usuario: ";
        cin >> usuario;
        cout << "Ingrese su contraseña: ";
        cin >> password;
        if (usuario == "admin" && password == "admin") {
            cout << "Bienvenido administrador" << endl;
            return;
        } else {
            cout << "Ingrese su departamento: ";
            cin >> departamento;
            cout << "Ingrese su empresa: ";
            cin >> empresa;
            
            cout << "Bienvenido " << usuario << " al departamento de " << departamento << " de la empresa " << empresa << endl;
        }

    }
};

int main() {
    Main login;
    login.iniciarSesion();
    return 0;
}