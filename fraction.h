#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

struct Fraction 
{
    int numerator;
    int denominator;
};

int findGCD(int a, int b);
void simplifyFraction(Fraction& fraction);
Fraction addFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction subtractFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction divideFractions(const Fraction& fraction1, const Fraction& fraction2);

#endif
