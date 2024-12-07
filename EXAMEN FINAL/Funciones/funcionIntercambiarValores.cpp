//Angel Cabrera
#include <iostream>
using namespace std;

// Función para intercambiar los valores de dos variables
void intercambiarValores(int &valor1, int &valor2) {
    int temp = valor1;
    valor1 = valor2;
    valor2 = temp;
}

int main() {
    int numero1, numero2;

    cout << "Introduce dos numeros: ";
    cin >> numero1 >> numero2;

    // Llamada a la función para intercambiar los valores
    intercambiarValores(numero1, numero2);

    cout << "Despues de intercambiar:\n";
    cout << "Numero 1: " << numero1 << "\nNumero 2: " << numero2 << endl;

    return 0;
}
