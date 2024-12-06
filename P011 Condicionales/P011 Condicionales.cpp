#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Función para adivinar de qué se trata en base a las pistas
string adivinarDeQueSeTrata(const vector<string>& pistas) {
    // Convertimos las pistas a minúsculas para facilitar la comparación
    vector<string> pistasLowerCase;
    for (const auto& pista : pistas) {
        string temp = pista;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        pistasLowerCase.push_back(temp);
    }

    // Aquí puedes agregar más reglas o cambiar las condiciones según sea necesario
    if (find(pistasLowerCase.begin(), pistasLowerCase.end(), "vuela") != pistasLowerCase.end() && 
        find(pistasLowerCase.begin(), pistasLowerCase.end(), "aéreo") != pistasLowerCase.end()) {
        return "avión";
    }
    if (find(pistasLowerCase.begin(), pistasLowerCase.end(), "humano") != pistasLowerCase.end() &&
        find(pistasLowerCase.begin(), pistasLowerCase.end(), "camina") != pistasLowerCase.end()) {
        return "persona";
    }
    if (find(pistasLowerCase.begin(), pistasLowerCase.end(), "tecnología") != pistasLowerCase.end() &&
        find(pistasLowerCase.begin(), pistasLowerCase.end(), "smartphone") != pistasLowerCase.end()) {
        return "teléfono inteligente";
    }
    if (find(pistasLowerCase.begin(), pistasLowerCase.end(), "grande") != pistasLowerCase.end() &&
        find(pistasLowerCase.begin(), pistasLowerCase.end(), "animal") != pistasLowerCase.end()) {
        return "elefante";
    }
    if (find(pistasLowerCase.begin(), pistasLowerCase.end(), "agua") != pistasLowerCase.end() &&
        find(pistasLowerCase.begin(), pistasLowerCase.end(), "beber") != pistasLowerCase.end()) {
        return "agua";
    }

    // Si no se encuentra ninguna coincidencia, se puede hacer una adivinanza general
    return "No estoy seguro de lo que estás hablando. ¿Podrías darme más detalles?";
}

int main() {
    vector<string> pistas(5);
    cout << "Hola, soy una IA que intentará adivinar de qué estás hablando. Por favor, da 5 pistas.\n";

    // Recoger las 5 pistas
    for (int i = 0; i < 5; i++) {
        cout << "Introduce la pista " << i + 1 << ": ";
        getline(cin, pistas[i]);
    }

    // La IA intenta adivinar de qué se trata
    string adivinanza = adivinarDeQueSeTrata(pistas);

    // Mostrar la adivinanza
    cout << "Creo que estás hablando de: " << adivinanza << endl;

    return 0;
}
