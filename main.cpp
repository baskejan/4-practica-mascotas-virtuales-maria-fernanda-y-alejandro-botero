#include <iostream>
#include "src/Sistema.h"
#include "src/Mascota.h"

using namespace std;

int main() {
    Sistema sistema;
    Usuario* usuarioActual = nullptr;

    string nombreUsuario, password;

    // 🔹 Iniciar sesión antes de mostrar el menú
    cout << "Bienvenido a VirtualPets!\n";
    cout << "Ingrese su nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese su contraseña: ";
    cin >> password;

    usuarioActual = sistema.IniciarSesion(nombreUsuario, password);

    if (!usuarioActual) {
        cout << "Usuario no encontrado. Creando un nuevo usuario...\n";
        sistema.RegistrarUsuario(nombreUsuario, password);
        usuarioActual = sistema.IniciarSesion(nombreUsuario, password);
    }

    int opcion;

    do {
        cout << "\nBienvenido " << usuarioActual->getNombre() << " a VirtualPets-\n";
        cout << "1. Registrar nueva mascota\n";
        cout << "2. Mostrar mascotas de usuario\n";
        cout << "3. Enseñar habilidad a mascota\n";
        cout << "4. Aumentar experiencia de mascota\n";
        cout << "5. Consultar historial de mascota\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombreMascota;
                cout << "Ingrese el nombre de la nueva mascota: ";
                cin >> nombreMascota;

                Mascota nuevaMascota(nombreMascota);
                usuarioActual->getMascotas().push_back(nuevaMascota);

                cout << "Mascota " << nombreMascota << " registrada exitosamente!\n";
                break;
            }

            case 2:
                cout << "Mascotas de " << usuarioActual->getNombre() << ":\n";
                for (auto& mascota : usuarioActual->getMascotas()) {
                    cout << "- " << mascota.getNombre() << "\n";
                }
                break;

            case 3: {
                string nombreMascota;
                cout << "Ingrese el nombre de la mascota: ";
                cin >> nombreMascota;
                Mascota* mascota = usuarioActual->getMascota(nombreMascota);
                if (mascota) {
                    sistema.AgregarHabilidadMascota(mascota);
                } else {
                    cout << "Mascota no encontrada.\n";
                }
                break;
            }

            case 4: {
                string nombreMascota;
                cout << "Ingrese el nombre de la mascota: ";
                cin >> nombreMascota;
                Mascota* mascota = usuarioActual->getMascota(nombreMascota);
                if (mascota) {
                    int nuevaExp;
                    cout << "Ingrese la nueva experiencia: ";
                    cin >> nuevaExp;
                    mascota->setNivelExp(nuevaExp);  // ✅ Ahora usa el setter
                    cout << "Experiencia actualizada.\n";
                } else {
                    cout << "Mascota no encontrada.\n";
                }
                break;
            }

            case 5: {
                string nombreMascota;
                cout << "Ingrese el nombre de la mascota: ";
                cin >> nombreMascota;
                Mascota* mascota = usuarioActual->getMascota(nombreMascota);
                if (mascota) {
                    cout << "Historial de " << mascota->getNombre() << ":\n";
                    mascota->VerHabilidadesMascota();
                    mascota->VerObjetosAsignados();
                } else {
                    cout << "Mascota no encontrada.\n";
                }
                break;
            }

            case 6:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 6);

    return 0;
}