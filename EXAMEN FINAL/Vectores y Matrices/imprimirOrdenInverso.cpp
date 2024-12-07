//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Introduce 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "Numeros en orden inverso: ";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
