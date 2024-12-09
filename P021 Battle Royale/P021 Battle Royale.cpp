#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// Enumerador PowerUp para asignar bonificaciones aleatorias
enum class PowerUp { NONE, EXTRA_ATTACK, EXTRA_DEFENSE, EXTRA_SPEED };

// Estructura que representa a un personaje del juego
struct Jugador {
    string nombre;
    int salud;
    int ataque;
    int defensa;
    int velocidad;
    PowerUp powerUp;

    // Constructor para inicializar las propiedades del personaje
    Jugador(string nom) : nombre(nom), salud(rand() % 51 + 50), ataque(rand() % 51 + 10),
                          defensa(rand() % 51 + 10), velocidad(rand() % 51 + 10), powerUp(PowerUp::NONE) {}

    // Asignar power-up aleatorio
    void asignarPowerUp() {
        int random = rand() % 4;
        switch (random) {
            case 1: powerUp = PowerUp::EXTRA_ATTACK; break;
            case 2: powerUp = PowerUp::EXTRA_DEFENSE; break;
            case 3: powerUp = PowerUp::EXTRA_SPEED; break;
            default: powerUp = PowerUp::NONE; break;
        }
    }

    // Aplicar power-up a las propiedades
    void aplicarPowerUp() {
        switch (powerUp) {
            case PowerUp::EXTRA_ATTACK: ataque += 10; break;
            case PowerUp::EXTRA_DEFENSE: defensa += 10; break;
            case PowerUp::EXTRA_SPEED: velocidad += 10; break;
            default: break;
        }
    }

    // Imprimir las propiedades del jugador
    void imprimir() {
        cout << nombre << " | Salud: " << salud << " | Ataque: " << ataque
             << " | Defensa: " << defensa << " | Velocidad: " << velocidad;
        if (powerUp != PowerUp::NONE) {
            cout << " | PowerUp: " << (powerUp == PowerUp::EXTRA_ATTACK ? "Extra Ataque" :
                                    (powerUp == PowerUp::EXTRA_DEFENSE ? "Extra Defensa" : "Extra Velocidad"));
        }
        cout << endl;
    }

    // Función para recibir daño
    void recibirDanio(int dano) {
        salud -= dano;
        if (salud < 0) salud = 0;
    }
};

// Función para realizar el combate entre dos jugadores
Jugador combate(Jugador& jugador1, Jugador& jugador2) {
    jugador1.aplicarPowerUp();
    jugador2.aplicarPowerUp();

    // Calcular el daño (si el ataque supera la defensa del oponente)
    int dano1 = jugador1.ataque - jugador2.defensa;
    if (dano1 < 0) dano1 = 0;

    int dano2 = jugador2.ataque - jugador1.defensa;
    if (dano2 < 0) dano2 = 0;

    // Aplicar el daño
    jugador1.recibirDanio(dano2);
    jugador2.recibirDanio(dano1);

    // Imprimir los resultados del combate
    cout << jugador1.nombre << " recibe " << dano2 << " de daño. Salud restante: " << jugador1.salud << endl;
    cout << jugador2.nombre << " recibe " << dano1 << " de daño. Salud restante: " << jugador2.salud << endl;

    // Determinar el ganador
    if (jugador1.salud > 0 && jugador2.salud <= 0) {
        cout << jugador1.nombre << " gana el combate!" << endl;
        return jugador1;
    } else if (jugador2.salud > 0 && jugador1.salud <= 0) {
        cout << jugador2.nombre << " gana el combate!" << endl;
        return jugador2;
    } else {
        // Si ambos tienen salud, el que tenga mayor velocidad puede decidir el resultado
        if (jugador1.velocidad > jugador2.velocidad) {
            cout << jugador1.nombre << " gana por velocidad!" << endl;
            return jugador1;
        } else {
            cout << jugador2.nombre << " gana por velocidad!" << endl;
            return jugador2;
        }
    }
}

// Función para contar cuántas batallas se necesitan en el modo 50% vs 50%
int modo50vs50(vector<Jugador>& jugadores) {
    int batallas = 0;
    for (int i = 0; i < 10; i += 2) {
        cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[i + 1].nombre << endl;
        combate(jugadores[i], jugadores[i + 1]);
        batallas++;
    }
    return batallas;
}

// Función para el modo Free for All (FFA)
int modoFFA(vector<Jugador>& jugadores) {
    int batallas = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[(i + 1) % 10].nombre << endl;
        combate(jugadores[i], jugadores[(i + 1) % 10]);
        batallas++;
    }
    return batallas;
}

int main() {
    srand(time(0));  // Inicializar la semilla de números aleatorios

    vector<string> nombres = {"Aatrox", "Biego", "Diana", "Gang Plank", "Briar", "Anivia", "Ashe", "Kaitlin", 
                              "Vi", "Jinx", "Jase", "Victor", "Gnar", "Renata", "Jin", "Echo", "Heimerdinger", 
                              "Garen", "Darius"};

    vector<Jugador> jugadores;

    // Crear los jugadores y asignarles power-ups aleatorios
    for (int i = 0; i < nombres.size(); ++i) {
        jugadores.push_back(Jugador(nombres[i]));
        jugadores[i].asignarPowerUp();
    }

    // Imprimir las propiedades iniciales de los jugadores
    cout << "Propiedades iniciales de los jugadores: \n";
    for (Jugador& jugador : jugadores) {
        jugador.imprimir();
    }

    // Elección de modo
    int modo;
    cout << "Selecciona el modo de batalla: \n(1: 50% vs 50%, 2: Free for All): ";
    cin >> modo;

    int batallas = 0;

    switch (modo) {
        case 1:
            batallas = modo50vs50(jugadores);
            break;
        case 2:
            batallas = modoFFA(jugadores);
            break;
        default:
            cout << "Modo no válido!" << endl;
            break;
    }
}
