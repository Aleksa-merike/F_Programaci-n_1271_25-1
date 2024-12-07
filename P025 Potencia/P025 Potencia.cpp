#include <iostream>
using namespace std;

// Función recursiva para calcular la potencia de un número
int potencia(int a, int b) {
    // Caso base: cualquier número elevado a 0 es 1
    if (b == 0) {
        return 1;
    }
    // Caso recursivo: a * potencia(a, b - 1)
    return a * potencia(a, b - 1);
}

int main() {
    int a, b;

    cout << "Ingresa la base (a): ";
    cin >> a;
    cout << "Ingresa el exponente (b): ";
    cin >> b;

    // Llamada a la función recursiva
    int resultado = potencia(a, b);

    cout << a << " elevado a " << b << " es: " << resultado << endl;

    return 0;
}
