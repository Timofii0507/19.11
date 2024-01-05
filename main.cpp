#include <iostream>
#include "complex.h"
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex num1, num2;
    cout << "������ ����� ���������� ����� (������� ��������� �������): ";
    cin >> num1.real >> num1.imag;
    cout << "������ ����� ���������� ����� (������� ��������� �������): ";
    cin >> num2.real >> num2.imag;
    Complex sum = add(num1, num2);
    Complex diff = subtract(num1, num2);
    Complex product = multiply(num1, num2);
    Complex quotient = divide(num1, num2);
    cout << "����: " << sum.real << " + " << sum.imag << "i\n";
    cout << "г�����: " << diff.real << " + " << diff.imag << "i\n";
    cout << "�������: " << product.real << " + " << product.imag << "i\n";
    cout << "������: " << quotient.real << " + " << quotient.imag << "i\n";
    return 0;
}
