#include <iostream>
#include <cmath> // Para operaciones como potencia

using namespace std;

int main() {
    // Declaración de variables
    double num1, num2;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Operaciones aritméticas
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = num1 / num2; // Nota: Verifica que num2 no sea 0
    double potencia = pow(num1, num2); // num1 elevado a la potencia de num2
    double modulo = fmod(num1, num2); // Resto de la división

    // Resultados
    cout << "\n--- Resultados de las Operaciones ---\n";
    cout << "Suma: " << num1 << " + " << num2 << " = " << suma << endl;
    cout << "Resta: " << num1 << " - " << num2 << " = " << resta << endl;
    cout << "Multiplicación: " << num1 << " * " << num2 << " = " << multiplicacion << endl;

    // Verificar división entre 0
    if (num2 != 0) {
        cout << "División: " << num1 << " / " << num2 << " = " << division << endl;
        cout << "Módulo (resto): " << num1 << " % " << num2 << " = " << modulo << endl;
    } else {
        cout << "División y módulo no definidos para divisor igual a 0.\n";
    }

    cout << "Potencia: " << num1 << " ^ " << num2 << " = " << potencia << endl;

    return 0;
}
