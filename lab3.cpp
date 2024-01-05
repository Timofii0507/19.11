#include <iostream>
#include "fraction.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction1, fraction2;
    cout << "Введіть перший дріб (чисельник та знаменник через пробіл): ";
    cin >> fraction1.numerator >> fraction1.denominator;
    cout << "Введіть другий дріб (чисельник та знаменник через пробіл): ";
    cin >> fraction2.numerator >> fraction2.denominator;
    Fraction sum = addFractions(fraction1, fraction2);
    Fraction difference = subtractFractions(fraction1, fraction2);
    Fraction product = multiplyFractions(fraction1, fraction2);
    Fraction quotient = divideFractions(fraction1, fraction2);
    cout << "Сума: " << sum.numerator << '/' << sum.denominator << endl;
    cout << "Різниця: " << difference.numerator << '/' << difference.denominator << endl;
    cout << "Добуток: " << product.numerator << '/' << product.denominator << endl;
    cout << "Частка: " << quotient.numerator << '/' << quotient.denominator << endl;
    return 0;
}
