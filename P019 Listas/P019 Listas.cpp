#include <iostream>
#include <string>
using namespace std;

// Definir la estructura del nodo
struct Nodo {
    string parteDelCuerpo;  // Parte del cuerpo (Cabeza, Torso, Pies)
    Nodo* siguiente;        // Puntero al siguiente nodo

    // Constructor para inicializar el nodo
    Nodo(string parte) : parteDelCuerpo(parte), siguiente(nullptr) {}
};

int main() {
    // Crear los nodos para las partes del cuerpo
    Nodo* cabeza = new Nodo("Cabeza");
    Nodo* torso = new Nodo("Torso");
    Nodo* pies = new Nodo("Pies");

    // Enlazar los nodos
    cabeza->siguiente = torso;
    torso->siguiente = pies;
    
    // Imprimir las partes del cuerpo desde la cabeza
    Nodo* actual = cabeza;  // Empezamos desde la cabeza
    while (actual != nullptr) {
        cout << actual->parteDelCuerpo << endl;
        actual = actual->siguiente;  // Avanzamos al siguiente nodo
    }

    // Liberar la memoria
    delete cabeza;
    delete torso;
    delete pies;

    return 0;
}
