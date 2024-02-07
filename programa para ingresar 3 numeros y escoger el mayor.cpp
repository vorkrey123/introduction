#include <iostream>
using namespace std;

int main() {
    // Declarar variables para almacenar los números
    double num1, num2, num3;

    // Solicitar al usuario que ingrese los tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Determinar el número mayor
    double mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    // Mostrar el resultado
    cout << "El número mayor es: " << mayor << endl;

    return 0;
}
