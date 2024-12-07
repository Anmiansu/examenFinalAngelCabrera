//Angel Cabrera
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float radio;
    const float PI = 3.1416;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    float area = PI * (radio * radio);
    float circunferencia = 2 * PI * radio;

    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
