#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Parte 1: Matriz 2x3
    int matriz1[2][3];

    cout << "Matriz 2x3:\n";
    // Ingresar los datos para la matriz 2x3
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingresa el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Mostrar la matriz 2x3
    cout << "\nMatriz 2x3 ingresada:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    // Parte 2: Matriz Dinámica n x m
    int n, m;
    cout << "\nAhora, ingresa las dimensiones para la matriz dinámica:" << endl;
    cout << "Ingresa el número de filas (n): ";
    cin >> n;
    cout << "Ingresa el número de columnas (m): ";
    cin >> m;

    // Crear la matriz dinámica
    int** matriz2 = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz2[i] = new int[m];
    }

    srand(time(0));  // Inicializar la semilla para los números aleatorios

    // Llenar la matriz dinámica
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n > 3 || m > 3) {
                matriz2[i][j] = rand() % 11;  // Generar un número aleatorio entre 0 y 10
                cout << "Se ingresó el valor " << matriz2[i][j] << " en la posición [" << i << "][" << j << "]" << endl;
            } else {
                cout << "Ingresa el valor para la posición [" << i << "][" << j << "]: ";
                cin >> matriz2[i][j];
            }
        }
    }

    // Mostrar la matriz dinámica
    cout << "\nMatriz dinámica de tamaño " << n << "x" << m << " generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar la memoria dinámica
    for (int i = 0; i < n; i++) {
        delete[] matriz2[i];
    }
    delete[] matriz2;

    return 0;
}
