//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Introduce tres numeros: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num2 < num3) {
        cout << "Estan en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Estan en orden descendente." << endl;
    } else {
        cout << "Estan desordenados." << endl;
    }

    return 0;
}
