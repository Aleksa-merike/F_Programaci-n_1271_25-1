#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Estructura para un Pokémon
struct Pokemon {
    string nombre;
    int vida;
    int ataque;
    int defensa;
    string ataqueEspecial;
};

// Función para calcular daño
int calcularDanio(int ataque, int defensa) {
    int danio = ataque - defensa / 2; // Fórmula básica de daño
    return (danio > 0) ? danio : 1;  // Asegurar que el daño mínimo sea 1
}

// Función para mostrar la vida de los Pokémon
void mostrarVida(const Pokemon& p1, const Pokemon& p2) {
    cout << p1.nombre << " tiene " << p1.vida << " HP restante." << endl;
    cout << p2.nombre << " tiene " << p2.vida << " HP restante." << endl;
    cout << "----------------------------------------" << endl;
}

// Main
int main() {
    srand(time(0)); // Semilla para números aleatorios

    // Crear Pokémon
    Pokemon pikachu = {"Pikachu", 100, 25, 10, "Impactrueno"};
    Pokemon charmander = {"Charmander", 100, 20, 15, "Llamarada"};

    // Elegir Pokémon del jugador y del oponente
    Pokemon jugador, enemigo;

    cout << "¡Bienvenido al simulador de batalla Pokémon!" << endl;
    cout << "Elige tu Pokémon:" << endl;
    cout << "1. Pikachu\n2. Charmander" << endl;
    int eleccion;
    cin >> eleccion;

    if (eleccion == 1) {
        jugador = pikachu;
        enemigo = charmander;
    } else {
        jugador = charmander;
        enemigo = pikachu;
    }

    cout << "\nHas elegido a " << jugador.nombre << " para combatir contra " << enemigo.nombre << "!" << endl;

    // Bucle de batalla
    while (jugador.vida > 0 && enemigo.vida > 0) {
        cout << "\nTu turno. ¿Qué deseas hacer?" << endl;
        cout << "1. Ataque normal\n2. " << jugador.ataqueEspecial << " (especial)" << endl;
        int accion;
        cin >> accion;

        int danio;
        if (accion == 1) {
            danio = calcularDanio(jugador.ataque, enemigo.defensa);
            cout << "¡" << jugador.nombre << " ataca y causa " << danio << " de daño!" << endl;
        } else {
            danio = calcularDanio(jugador.ataque + 10, enemigo.defensa); // Ataque especial más fuerte
            cout << "¡" << jugador.nombre << " usa " << jugador.ataqueEspecial << " y causa " << danio << " de daño!" << endl;
        }
        enemigo.vida -= danio;

        if (enemigo.vida <= 0) {
            cout << enemigo.nombre << " se ha debilitado. ¡Has ganado!" << endl;
            break;
        }

        // Turno del enemigo
        cout << enemigo.nombre << " contraataca." << endl;
        danio = calcularDanio(enemigo.ataque, jugador.defensa);
        cout << enemigo.nombre << " causa " << danio << " de daño." << endl;
        jugador.vida -= danio;

        if (jugador.vida <= 0) {
            cout << jugador.nombre << " se ha debilitado. ¡Has perdido!" << endl;
            break;
        }

        // Mostrar la vida restante
        mostrarVida(jugador, enemigo);
    }
    return 0;
}
