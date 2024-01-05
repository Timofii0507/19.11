#include <iostream>
#include "complex.h"
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex num1, num2;
    cout << "Введіть перше комплексне число (реальна імагінарна частини): ";
    cin >> num1.real >> num1.imag;
    cout << "Введіть друге комплексне число (реальна імагінарна частини): ";
    cin >> num2.real >> num2.imag;
    Complex sum = add(num1, num2);
    Complex diff = subtract(num1, num2);
    Complex product = multiply(num1, num2);
    Complex quotient = divide(num1, num2);
    cout << "Сума: " << sum.real << " + " << sum.imag << "i\n";
    cout << "Різниця: " << diff.real << " + " << diff.imag << "i\n";
    cout << "Добуток: " << product.real << " + " << product.imag << "i\n";
    cout << "Частка: " << quotient.real << " + " << quotient.imag << "i\n";
    return 0;
}
