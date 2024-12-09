#include <iostream>
#include <cmath> // Para operaciones como potencia

using namespace std;

void suma(int num1, int num2) 
{
    double suma = num1 + num2;
    cout << "Suma: " << num1 << " + " << num2 << " = " << suma << endl;

}

void resta(int num1, int num2)
{
    double resta = num1 - num2;
    cout << "resta: " << num1 << " - " << num2 << " = " << suma << endl;
}

void multiplicasion(int num1, int num2)
{
    double multiplicasion = num1 * num2;
    cout << "multiplicasion: " << num1 << " * " << num2 << " = " << suma << endl;
}

void division(int num1, int num2)
{
    double division = num1 / num2;
    cout << "division: " << num1 << " / " << num2 << " = " << suma << endl;
}

int main() {
    // Declaración de variables
   
    double num1, num2, operasion;

    // Entrada de datos
    cout << "que tipo de operacion buscas \n1:suma\n2:resta\n3:multiplicacion\n4:divicion\n";
    cin >> operasion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (operasion == 1)
    {
        suma(num1,num2);
    }

    else if (operasion == 2)
    {
        resta(num1, num2);
    }

    else if (operasion == 3)
    {
        multiplicasion(num1, num2);
    }

    else if (operasion == 4)
    {
        division(num1, num2);
    }
    return 0;
}
