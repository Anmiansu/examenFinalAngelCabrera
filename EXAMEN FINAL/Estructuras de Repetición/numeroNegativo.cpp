//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;

    cout << "Introduce numeros (un numero negativo para salir):\n";
    while (true) {
        cin >> num;
        if (num < 0) break;
        suma += num;
    }

    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}
