#include <iostream>
#include "fraction.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction1, fraction2;
    cout << "������ ������ ��� (��������� �� ��������� ����� �����): ";
    cin >> fraction1.numerator >> fraction1.denominator;
    cout << "������ ������ ��� (��������� �� ��������� ����� �����): ";
    cin >> fraction2.numerator >> fraction2.denominator;
    Fraction sum = addFractions(fraction1, fraction2);
    Fraction difference = subtractFractions(fraction1, fraction2);
    Fraction product = multiplyFractions(fraction1, fraction2);
    Fraction quotient = divideFractions(fraction1, fraction2);
    cout << "����: " << sum.numerator << '/' << sum.denominator << endl;
    cout << "г�����: " << difference.numerator << '/' << difference.denominator << endl;
    cout << "�������: " << product.numerator << '/' << product.denominator << endl;
    cout << "������: " << quotient.numerator << '/' << quotient.denominator << endl;
    return 0;
}
