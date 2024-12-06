#include <iostream>
#include <string>

using namespace std;

int main() {
    // Solicitud de datos de tipo bool
    bool tieneAlergias, fuma, practicaDeporte;
    cout << "¿Tiene alergias? (1 para sí, 0 para no): ";
    cin >> tieneAlergias;
    cout << "¿Fuma? (1 para sí, 0 para no): ";
    cin >> fuma;
    cout << "¿Practica algún deporte? (1 para sí, 0 para no): ";
    cin >> practicaDeporte;

    // Solicitud de datos de tipo string
    string nombre, apellido;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;

    // Solicitud de dato de tipo char
    char genero;
    cout << "Ingrese su género (M/F/O): ";
    cin >> genero;

    // Solicitud de datos de tipo int
    int edad, altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su altura en cm: ";
    cin >> altura;

    // Solicitud de dato de tipo float
    float peso;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;

    // Cálculo del IMC
    float alturaMetros = altura / 100.0;
    float imc = peso / (alturaMetros * alturaMetros);

    // Resultados
    cout << "\n--- Resultados del Consultorio Médico ---\n";
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Género: " << genero << endl;
    cout << "Edad: " << edad << " años\n";
    cout << "Altura: " << altura << " cm\n";
    cout << "Peso: " << peso << " kg\n";
    cout << "IMC: " << imc << endl;

    // Estado de salud basado en el IMC
    if (imc < 18.5)
        cout << "Estado: Bajo peso\n";
    else if (imc >= 18.5 && imc < 24.9)
        cout << "Estado: Peso normal\n";
    else if (imc >= 25 && imc < 29.9)
        cout << "Estado: Sobrepeso\n";
    else
        cout << "Estado: Obesidad\n";

    // Otros datos
    cout << "Tiene alergias: " << (tieneAlergias ? "Sí" : "No") << endl;
    cout << "Fuma: " << (fuma ? "Sí" : "No") << endl;
    cout << "Practica deporte: " << (practicaDeporte ? "Sí" : "No") << endl;

    // Explicación general del IMC sin mostrar la fórmula
    cout << "\n--- Información del IMC ---\n";
    cout << "El IMC (Índice de Masa Corporal) indica si tienes un peso saludable según tu altura.\n";
    cout << "Categorías según la OMS:\n";
    cout << " - Bajo peso: Menor de 18.5\n";
    cout << " - Peso normal: Entre 18.5 y 24.9\n";
    cout << " - Sobrepeso: Entre 25 y 29.9\n";
    cout << " - Obesidad: 30 o más\n";
    cout << "Recuerda que el IMC es solo una referencia y no mide la grasa corporal directamente.\n";

    return 0;
}