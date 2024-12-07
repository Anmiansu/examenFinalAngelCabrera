//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], resultado[2][2];

    cout << "Introduce los elementos de la primera matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Introduce los elementos de la segunda matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultado de la multiplicacion de matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
