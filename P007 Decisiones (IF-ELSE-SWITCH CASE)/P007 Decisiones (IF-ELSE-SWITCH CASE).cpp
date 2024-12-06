#include <iostream>
#include <cmath> // Para ceil()

using namespace std;

int main() 
{
    int numPeleadores, sistema;

    // Solicitar el número de peleadores
    cout << "Ingrese el número de peleadores en la arena: ";
    cin >> numPeleadores;

    // Validar que el número de peleadores sea positivo
    if (numPeleadores <= 1) {
        cout << "Debe haber al menos 2 peleadores para una competencia.\n";
        return 0;
    }

    // Solicitar el sistema de combate
    cout << "\nSeleccione el sistema de combate:\n";
    cout << "1. Royal Rumble\n";
    cout << "2. Eliminatoria directa\n";
    cout << "3. Grupos, semifinal y final\n";
    cout << "Ingrese el número de su elección: ";
    cin >> sistema;

    int numBatallas;

    // Selección del sistema de combate
    if (sistema == 1) {
        // Royal Rumble: Todos luchan contra todos
        numBatallas = (numPeleadores * (numPeleadores - 1)) / 2;
        cout << "En el sistema Royal Rumble habrá " << numBatallas << " batallas.\n";
    } else if (sistema == 2) {
        // Eliminatoria directa
        numBatallas = numPeleadores - 1;
        cout << "En el sistema de eliminatoria directa habrá " << numBatallas << " batallas.\n";
    } else if (sistema == 3) {
        // Grupos, semifinal y final
        int grupos = ceil(numPeleadores / 4.0); // Grupos redondeados hacia arriba
        int batallasGrupos = grupos * 6; // 6 batallas por grupo (round-robin de 4)
        int semifinales = grupos; // Una batalla por grupo para avanzar
        int final = 1; // Una final
        numBatallas = batallasGrupos + semifinales + final;
        cout << "En el sistema de grupos, semifinal y final habrá " << numBatallas << " batallas.\n";
    } else {
        // Opción inválida
        cout << "Opción inválida. Por favor seleccione 1, 2 o 3.\n";
    }

    return 0;
}

