//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float numero;

    do {
        cout << "Menu:\n";
        cout << "1. Calcular el cuadrado de un numero\n";
        cout << "2. Calcular el cubo de un numero\n";
        cout << "3. Salir\n";
        cout << "Elige una opcion (1-3): ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            cout << "Introduce un numero: ";
            cin >> numero;
        }

        switch (opcion) {
            case 1: cout << "El cuadrado de " << numero << " es " << numero * numero << endl; break;
            case 2: cout << "El cubo de " << numero << " es " << numero * numero * numero << endl; break;
            case 3: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion invalida. Intenta de nuevo.\n"; break;
        }
    } while (opcion != 3);

    return 0;
}
