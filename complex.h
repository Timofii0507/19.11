#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex 
{
    double real;
    double imag;
};

Complex add(const Complex& a, const Complex& b);
Complex subtract(const Complex& a, const Complex& b);
Complex multiply(const Complex& a, const Complex& b);
Complex divide(const Complex& a, const Complex& b);

#endif 
