#include "fraction.h"

int findGCD(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(Fraction& fraction) 
{
    int gcd = findGCD(fraction.numerator, fraction.denominator);
    fraction.numerator /= gcd;
    fraction.denominator /= gcd;
}

Fraction addFractions(const Fraction& fraction1, const Fraction& fraction2) 
{
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator;
    result.denominator = fraction1.denominator * fraction2.denominator;
    simplifyFraction(result);
    return result;
}

Fraction subtractFractions(const Fraction& fraction1, const Fraction& fraction2) 
{
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator;
    result.denominator = fraction1.denominator * fraction2.denominator;
    simplifyFraction(result);
    return result;
}

Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2) 
{
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.numerator;
    result.denominator = fraction1.denominator * fraction2.denominator;
    simplifyFraction(result);
    return result;
}

Fraction divideFractions(const Fraction& fraction1, const Fraction& fraction2) 
{
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.denominator;
    result.denominator = fraction1.denominator * fraction2.numerator;
    simplifyFraction(result);
    return result;
}
