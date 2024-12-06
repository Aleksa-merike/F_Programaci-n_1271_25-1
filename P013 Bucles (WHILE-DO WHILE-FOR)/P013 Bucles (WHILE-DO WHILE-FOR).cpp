#include <iostream>
#include <string>

int main() {
    std::string usuario, contrasena;
    std::string usuarioCorrecto = "aleks";  // Ejemplo de usuario correcto
    std::string contrasenaCorrecta = "secreto";  // Ejemplo de contraseña correcta

    // Bucle que pide los datos hasta que el usuario ingrese los correctos
    while (true) {
        // Solicitar los datos del usuario
        std::cout << "Ingrese su nombre de usuario: ";
        std::cin >> usuario;

        std::cout << "Ingrese su contraseña: ";
        std::cin >> contrasena;

        // Verificar si los datos son correctos
        if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta) {
            std::cout << "Login exitoso. Bienvenido, " << usuario << "!\n";
            // Aquí podrías continuar con la lógica del juego
            break;  // Salir del bucle si los datos son correctos
        } else {
            std::cout << "Datos incorrectos. Inténtalo de nuevo.\n";
        }
    }

    return 0;
}
