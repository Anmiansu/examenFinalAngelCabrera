//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Introduce dos numeros enteros: ";
    cin >> num1 >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    return 0;
}
