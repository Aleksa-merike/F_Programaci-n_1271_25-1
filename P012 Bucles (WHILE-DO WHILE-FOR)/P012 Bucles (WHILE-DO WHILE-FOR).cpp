#include <iostream>

using namespace std;

int main() {
    int vidas = 3;
    char continuar;

    // Ciclo de juego infinito
    while (vidas > 0) {
        // Contar hasta 100
        for (int i = 1; i <= 100; i++) {
            cout << i << " ";
        }
        cout << endl;

        // Preguntar al usuario si quiere continuar
        cout << "Quieres continuar? (s/n): ";
        cin >> continuar;

        // Si el jugador no quiere continuar, termina el juego
        if (continuar == 'n' || continuar == 'N') {
            cout << "Fin del juego!" << endl;
            break;
        }

        // Perder una vida después de contar hasta 100 y preguntar
        vidas--;
        cout << "Has perdido una vida. Vidas restantes: " << vidas << endl;
    }

    if (vidas <= 0) {
        cout << "Has quedado sin vidas. Fin del juego!" << endl;
    }

    return 0;
}

