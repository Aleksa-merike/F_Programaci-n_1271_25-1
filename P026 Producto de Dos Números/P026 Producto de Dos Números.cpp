#include <iostream>
using namespace std;

// Función recursiva para calcular el producto de dos números
int producto(int a, int b) {
    // Caso base: si b es 0, el producto es 0
    if (b == 0) {
        return 0;
    }
    // Caso recursivo: a + producto(a, b-1)
    return a + producto(a, b - 1);
}

int main() {
    int a, b;

    cout << "Ingresa el primer número: ";
    cin >> a;
    cout << "Ingresa el segundo número: ";
    cin >> b;

    // Llamada a la función recursiva
    int resultado = producto(a, b);

    cout << "El producto de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
