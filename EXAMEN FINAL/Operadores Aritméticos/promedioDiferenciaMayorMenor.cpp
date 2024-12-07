//Angel Cabrera
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Introduce tres numeros: ";
    cin >> num1 >> num2 >> num3;

    float promedio = (num1 + num2 + num3) / 3.0;
    int mayor = max({num1, num2, num3});
    int menor = min({num1, num2, num3});
    int diferencia = mayor - menor;

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre el mayor y el menor: " << diferencia << endl;

    return 0;
}
