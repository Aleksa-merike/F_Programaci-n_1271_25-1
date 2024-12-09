#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para rellenar una matriz de forma aleatoria entre 0 y 10
void llenarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 11; // Generar un número entre 0 y 10
        }
    }
}

// Función para mostrar la matriz completa
void mostrarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para mostrar la información con la posición de cada número
void mostrarConPosiciones(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Posición [" << i << "][" << j << "] = " << matriz[i][j] << endl;
        }
    }
}

int main() {
    srand(time(0)); // Semilla para números aleatorios

    // Declarar matrices
    int matriz3x3[3][10] = {0}; // Se usa 10 como tamaño máximo de columnas
    int matriz5x5[5][10] = {0};
    int matriz10x10[10][10] = {0};

    // Llenar las matrices con datos aleatorios
    llenarMatriz(matriz3x3, 3, 3);
    llenarMatriz(matriz5x5, 5, 5);
    llenarMatriz(matriz10x10, 10, 10);

    int opcion;

    do {
        cout << "\n--- Menú de Matrices ---" << endl;
        cout << "1. Ver matriz 3x3" << endl;
        cout << "2. Ver matriz 5x5" << endl;
        cout << "3. Ver matriz 10x10" << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nMatriz 3x3 Completa:" << endl;
                mostrarMatriz(matriz3x3, 3, 3);
                cout << "\nMatriz 3x3 con Posiciones:" << endl;
                mostrarConPosiciones(matriz3x3, 3, 3);
                break;

            case 2:
                cout << "\nMatriz 5x5 Completa:" << endl;
                mostrarMatriz(matriz5x5, 5, 5);
                cout << "\nMatriz 5x5 con Posiciones:" << endl;
                mostrarConPosiciones(matriz5x5, 5, 5);
                break;

            case 3:
                cout << "\nMatriz 10x10 Completa:" << endl;
                mostrarMatriz(matriz10x10, 10, 10);
                cout << "\nMatriz 10x10 con Posiciones:" << endl;
                mostrarConPosiciones(matriz10x10, 10, 10);
                break;

            case 4:
                cout << "¡Gracias por usar el programa! Adiós." << endl;
                break;

            default:
                cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
