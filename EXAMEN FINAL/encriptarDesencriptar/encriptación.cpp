//Angel Cabrera
#include <iostream>
#include <string>
using namespace std;

// Prototipo de la funci�n
string encriptarPalabra(const string& palabra, int clave);

int main() {
    string palabra;
    int clave;

    // Solicitar la palabra al usuario
    cout << "Introduce la palabra que deseas encriptar: ";
    cin >> palabra;

    // Solicitar la clave (un n�mero entre 1 y 5)
    do {
        cout << "Introduce un numero clave entre 1 y 5: ";
        cin >> clave;
    } while (clave < 1 || clave > 5);  // Validar que la clave est� en el rango permitido

    // Encriptar la palabra
    string palabraEncriptada = encriptarPalabra(palabra, clave);

    // Mostrar la palabra encriptada
    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}

// Definici�n de la funci�n
string encriptarPalabra(const string& palabra, int clave) {
    string palabraEncriptada = palabra;  // Copiar la palabra original para modificarla
    for (int i = 0; i < palabra.length(); i++) {
        // Desplazar el valor ASCII de cada letra seg�n la clave
        palabraEncriptada[i] = char(palabra[i] + clave);
    }
    return palabraEncriptada;
}
