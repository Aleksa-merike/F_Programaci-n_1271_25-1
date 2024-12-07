#include <iostream>
#include <string>
using namespace std;

int main() {
    string sujeto, verbo, complemento;
    char opcion;

    do {
        int numOraciones;

        // Solicitar al usuario el número de oraciones a generar
        cout << "¿Cuántas oraciones deseas generar en esta ronda? ";
        cin >> numOraciones;
        cin.ignore(); // Limpiar el buffer de entrada

        // Bucle for para generar múltiples oraciones
        for (int i = 1; i <= numOraciones; i++) {
            cout << "\nOración #" << i << endl;

            // Solicitar datos para formar la oración
            cout << "Introduce el sujeto (por ejemplo, 'El gato'): ";
            getline(cin, sujeto);

            cout << "Introduce un verbo en presente (por ejemplo, 'come'): ";
            getline(cin, verbo);

            cout << "Introduce el complemento (por ejemplo, 'pescado'): ";
            getline(cin, complemento);

            // Generar y mostrar la oración
            cout << "Oración generada: " << sujeto << " " << verbo << " " << complemento << "." << endl;

            // Concordancia básica
            if (sujeto.find("s") != string::npos) {
                cout << "Nota: El sujeto parece plural. Asegúrate de que el verbo concuerde." << endl;
            }
        }

        // Preguntar al usuario si desea continuar
        cout << "\n¿Quieres generar más oraciones? (s/n): ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

    } while (opcion == 's' || opcion == 'S'); // Continuar si el usuario ingresa 's'

    cout << "¡Gracias por participar! Adiós." << endl;
    return 0;
}
