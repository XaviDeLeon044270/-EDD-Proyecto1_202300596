#include <iostream>
#include <string>
#include <limits>
#include "includes/MatrizDispersa.h"
using namespace std;

class Main {
private:
    string usuario, password, departamento, empresa;
    
    

public:
    void iniciarSesion() {
        int opcionIniciarSesion;
        do {
            cout << "1. Iniciar sesión" << endl;
            cout << "0. Salir" << endl;
            cin >> opcionIniciarSesion;
            if (opcionIniciarSesion == 1) {
                cout << "Ingrese su usuario: ";
                cin >> usuario;
                cout << "Ingrese su contraseña: ";
                cin >> password;
                if (usuario == "admin" && password == "admin") {
                    cout << "Bienvenido administrador" << endl;
                    menuAdmin();
                } else {
                    cout << "Ingrese su departamento: ";
                    cin >> departamento;
                    cout << "Ingrese su empresa: ";
                    cin >> empresa;
                    
                    cout << "Bienvenido " << usuario << " al departamento de " << departamento << " de la empresa " << empresa << endl;
                }
            }
            
        } while (opcionIniciarSesion != 0);

    }

    void menuAdmin() {
        int opcionMenuAdmin;
        do {
            cout << "1. Agregar usuario" << endl;
            cout << "2. Reporte de Matriz Dispersa" << endl;
            cout << "3. Reporte de Activos disponibles de un departamento" << endl;
            cout << "4. Reporte de Activos disponibles de una empresa" << endl;
            cout << "5. Reporte de Transacciones" << endl;
            cout << "6. Reporte de Activos de un usuario" << endl;
            cout << "7. Activos rentados por un usuario" << endl;
            cout << "8. Ordenar transacciones" << endl;
            cout << "9. Salir" << endl;
            cout << "" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcionMenuAdmin;
            switch (opcionMenuAdmin) {
                case 1:
                    cout << "Agregar usuario" << endl;
                    break;
                case 2:
                    cout << "Reporte de Matriz Dispersa" << endl;
                    break;
                case 3:
                    cout << "Reporte de Activos disponibles de un departamento" << endl;
                    break;
                case 4:
                    cout << "Reporte de Activos disponibles de una empresa" << endl;
                    break;
                case 5:
                    cout << "Reporte de Transacciones" << endl;
                    break;
                case 6:
                    cout << "Reporte de Activos de un usuario" << endl;
                    break;
                case 7:
                    cout << "Activos rentados por un usuario" << endl;
                    break;
                case 8:
                    cout << "Ordenar transacciones" << endl;
                    break;
                case 9:
                    cout << "Saliendo..." << endl;
                    break;
                default:
                    cout << "Opción no válida" << endl;
                    break;
            }
        } while (opcionMenuAdmin != 9);
    }
};

int main() {
    Main login;
    login.iniciarSesion();
    return 0;
}