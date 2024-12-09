#include <iostream>
#include <string>

using namespace std;

int main() {
    // Login de juego
    string nombreGuardado = "Aleks";
    string correoGuardado = "correo@gmail.com";
    string contrasenaGuardada = "12345";

    string nombre, correo, contrasena;

    cout << "=== Login del Juego ===\n";
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su correo: ";
    cin >> correo;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    // Decisión 1: Verificar login
    if (nombre == nombreGuardado && correo == correoGuardado && contrasena == contrasenaGuardada) {
        cout << "¡Bienvenido al juego, " << nombre << "!\n";
    } else {
        cout << "Error: Nombre, correo o contraseña incorrectos.\n";
        return 0; // Termina la ejecución si los datos son incorrectos
    }

    // Solicitar edad
    int edad;
    cout << "\nIngrese su edad: ";
    cin >> edad;

    // Decisión 2: Verificar si es menor de edad
    if (edad < 18) {
        cout << "Aquí no es la choza de los pequeñines.\n";
        return 0; // Termina la ejecución si es menor de edad
    }

    // Decisión 3: Verificar si es mayor de 50 años
    if (edad > 50) {
        cout << "¡Eres un veterano del gaming! ¡Bienvenido!\n";
    } else {
        cout << "¡Listo para jugar con toda la energía de la juventud!\n";
    }

    // Decisión 4: Elección de personaje
    int personaje;
    cout << "\nSeleccione un personaje:\n";
    cout << "1. Guerrero\n";
    cout << "2. Mago\n";
    cout << "3. Arquero\n";
    cout << "Ingrese el número de su elección: ";
    cin >> personaje;

    switch (personaje) {
        case 1:
            cout << "Has elegido al Guerrero: ¡Fuerza y resistencia!\n";
            break;
        case 2:
            cout << "Has elegido al Mago: ¡Sabiduría y poder arcano!\n";
            break;
        case 3:
            cout << "Has elegido al Arquero: ¡Velocidad y precisión!\n";
            break;
        default:
            cout << "Opción inválida. No se reconoce el personaje.\n";
            return 0; // Termina la ejecución si la elección es inválida
    }

    // Decisión 5: Verificar si el usuario quiere continuar
    char continuar;
    cout << "\n¿Deseas iniciar la partida? (S/N): ";
    cin >> continuar;

    if (continuar == 'S' || continuar == 's') {
        cout << "¡Comienza la aventura! ¡Buena suerte!\n";
    } else {
        cout << "Juego terminado. ¡Hasta la próxima!\n";
    }

    return 0;
}
