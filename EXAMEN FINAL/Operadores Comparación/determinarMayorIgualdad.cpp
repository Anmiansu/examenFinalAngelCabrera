//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Introduce dos numeros: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "El primer numero es mayor." << endl;
    } else if (num1 < num2) {
        cout << "El segundo numero es mayor." << endl;
    } else {
        cout << "Los numeros son iguales." << endl;
    }

    return 0;
}
