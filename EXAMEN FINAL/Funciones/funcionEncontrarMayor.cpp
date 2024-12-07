//Angel Cabrera
#include <iostream>
using namespace std;

// Función para encontrar el mayor de tres números y devolverlo por referencia
void encontrarMayor(int num1, int num2, int num3, int &mayorNumero) {
    mayorNumero = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3 ? num2 : num3);
}

int main() {
    int numero1, numero2, numero3, mayor;

    cout << "Introduce tres numeros: ";
    cin >> numero1 >> numero2 >> numero3;

    // Llamada a la función para obtener el mayor número
    encontrarMayor(numero1, numero2, numero3, mayor);

    cout << "El mayor numero es: " << mayor << endl;

    return 0;
}
