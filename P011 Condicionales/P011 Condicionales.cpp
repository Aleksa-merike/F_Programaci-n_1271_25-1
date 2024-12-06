#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Función para adivinar de qué se trata en base a las pistas
string adivinarDeQueSeTrata(const vector<string>& pistas) {
    // Aquí se pueden agregar más reglas basadas en las pistas para hacer adivinaciones
    if (pistas[0].find("vuela") != string::npos && pistas[1].find("aéreo") != string::npos) {
        return "avión";
    }
    if (pistas[0].find("humano") != string::npos && pistas[1].find("camina") != string::npos) {
        return "persona";
    }
    if (pistas[0].find("tecnología") != string::npos && pistas[1].find("smartphone") != string::npos) {
        return "teléfono inteligente";
    }
    if (pistas[0].find("grande") != string::npos && pistas[1].find("animal") != string::npos) {
        return "elefante";
    }
    if (pistas[0].find("agua") != string::npos && pistas[1].find("beber") != string::npos) {
        return "agua";
    }
    return "No estoy seguro de lo que estás hablando.";
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
