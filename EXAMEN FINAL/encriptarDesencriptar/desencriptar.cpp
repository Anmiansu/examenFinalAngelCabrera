//Angel Cabrera
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
string desencriptarPalabra(const string& palabra, int clave);
void mostrarDesencriptados(const string& palabraEncriptada);

int main() {
    string palabraEncriptada;

    // Solicitar la palabra encriptada al usuario
    cout << "Introduce la palabra encriptada: ";
    cin >> palabraEncriptada;

    // Mostrar todas las posibles palabras desencriptadas
    mostrarDesencriptados(palabraEncriptada);

    return 0;
}

// Función para desencriptar la palabra
string desencriptarPalabra(const string& palabra, int clave) {
    string palabraDesencriptada = palabra;  // Copiar la palabra encriptada para modificarla
    for (int i = 0; i < palabra.length(); i++) {
        // Desplazar el valor ASCII de cada letra en sentido contrario según la clave
        palabraDesencriptada[i] = char(palabra[i] - clave);
    }
    return palabraDesencriptada;
}

// Función para mostrar todas las posibles palabras desencriptadas (de 1 a 5)
void mostrarDesencriptados(const string& palabraEncriptada) {
    for (int clave = 1; clave <= 5; clave++) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "valor " << clave << ": " << palabraDesencriptada << endl;
    }
}
