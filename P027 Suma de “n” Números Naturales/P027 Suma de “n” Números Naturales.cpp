#include <iostream>
using namespace std;

// Función recursiva para calcular la suma de los primeros n números naturales
int sumaNaturales(int n) {
    // Caso base: si n es 0, la suma es 0
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: suma n con la suma de los primeros n-1 números
    return n + sumaNaturales(n - 1);
}

int main() {
    int n;

    cout << "Ingresa un número natural: ";
    cin >> n;

    // Llamada a la función recursiva
    int resultado = sumaNaturales(n);

    cout << "La suma de los primeros " << n << " números naturales es: " << resultado << endl;

    return 0;
}
