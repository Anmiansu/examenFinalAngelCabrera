//Angel Cabrera
#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros enteros y devuelve su suma
int sumaNumeros(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int numero1, numero2;

    cout << "Introduce dos numeros: ";
    cin >> numero1 >> numero2;

    // Llamada a la funci�n y muestra el resultado
    cout << "La suma es: " << sumaNumeros(numero1, numero2) << endl;

    return 0;
}
