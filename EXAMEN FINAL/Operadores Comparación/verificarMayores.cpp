//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int ref, num;
    bool todos_mayores = true;

    cout << "Introduce un numero de referencia: ";
    cin >> ref;

    cout << "Introduce cinco numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num <= ref) {
            todos_mayores = false;
        }
    }

    if (todos_mayores) {
        cout << "Todos los numeros son mayores que el numero de referencia." << endl;
    } else {
        cout << "No todos los numeros son mayores que el numero de referencia." << endl;
    }

    return 0;
}
