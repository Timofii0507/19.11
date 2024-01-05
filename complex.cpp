#include "complex.h"

using namespace std;

Complex add(const Complex& a, const Complex& b) 
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(const Complex& a, const Complex& b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(const Complex& a, const Complex& b)
{
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex divide(const Complex& a, const Complex& b) 
{
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    if (denominator != 0)
    {
        result.real = (a.real * b.real + a.imag * b.imag) / denominator;
        result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    }
    else 
    {
        cerr << "Помилка: ділення на нуль\n";
        result.real = result.imag = 0;
    }
    return result;
}
