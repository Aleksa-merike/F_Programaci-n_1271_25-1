#include <iostream>
using namespace std;

// Función recursiva para convertir un número decimal a binario
void decimalABinario(int n) {
    // Caso base: si n es 0, no hacemos nada
    if (n == 0) {
        return;
    }
    
    // Llamada recursiva para el cociente de n dividido entre 2
    decimalABinario(n / 2);
    
    // Mostrar el residuo de n dividido entre 2 (el bit actual)
    cout << n % 2;
}

int main() {
    int numero;

    cout << "Ingresa un número decimal: ";
    cin >> numero;

    // Mostrar el equivalente binario
    cout << "El número " << numero << " en binario es: ";
    
    // Si el número es 0, mostramos directamente 0
    if (numero == 0) {
        cout << 0;
    } else {
        decimalABinario(numero);  // Llamada a la función recursiva
    }

    cout << endl;

    return 0;
}
