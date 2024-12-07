//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;

    cout << "Menu de operaciones:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Elige una opcion (1-4): ";
    cin >> opcion;

    cout << "Introduce dos numeros: ";
    cin >> num1 >> num2;

    switch (opcion) {
        case 1: cout << "Resultado: " << num1 + num2 << endl; break;
        case 2: cout << "Resultado: " << num1 - num2 << endl; break;
        case 3: cout << "Resultado: " << num1 * num2 << endl; break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        default: cout << "Opcion invalida" << endl; break;
    }

    return 0;
}
