#include <iostream>
using namespace std;

// Función recursiva para calcular el MCD utilizando el Algoritmo de Euclides
int mcd(int a, int b) {
    // Caso base: cuando el segundo número es 0, el MCD es el primer número
    if (b == 0) {
        return a;
    }
    // Llamada recursiva con el segundo número y el residuo de la división
    return mcd(b, a % b);
}

int main() {
    int a, b;

    cout << "Ingresa el primer número: ";
    cin >> a;
    cout << "Ingresa el segundo número: ";
    cin >> b;

    // Llamada a la función recursiva para calcular el MCD
    int resultado = mcd(a, b);

    cout << "El Máximo Común Divisor de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
