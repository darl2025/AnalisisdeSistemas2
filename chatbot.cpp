
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Función para convertir texto a minúsculas (para hacer comparaciones insensibles a mayúsculas)
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string userInput;

    cout << "ChatBot: ¡Hola! Soy tu asistente virtual.\n";
    cout << "Escribe 'salir' para terminar la conversación.\n\n";

    while (true) {
        cout << "Tú: ";
        getline(cin, userInput);
        string inputLower = toLower(userInput);

        if (inputLower == "salir") {
            cout << "ChatBot: ¡Hasta luego! 😊\n";
            break;
        } else if (inputLower == "hola" || inputLower == "buenos dias") {
            cout << "ChatBot: ¡Hola! ¿Cómo estás hoy?\n";
        } else if (inputLower == "como estas" || inputLower == "cómo estás") {
            cout << "ChatBot: Estoy bien, gracias por preguntar. ¿Y tú?\n";
        } else if (inputLower == "que puedes hacer" || inputLower == "¿qué puedes hacer?") {
            cout << "ChatBot: Puedo responder preguntas básicas y ayudarte con temas simples.\n";
        } else if (inputLower.find("tu nombre") != string::npos) {
            cout << "ChatBot: Me puedes llamar ChatBot CPP.\n";
        } else {
            cout << "ChatBot: Lo siento, no entiendo eso. ¿Puedes intentar otra pregunta?\n";
        }
    }

    return 0;
}
