//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int matriz[2][2], suma = 0;

    cout << "Introduce los elementos de una matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
