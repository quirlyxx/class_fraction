#pragma once

class Fraction {
private:
    int numerator;
    int denominator;

    int reduct(int a, int b);

public:
    Fraction();
    Fraction(int num, int den);

    void input();
    void output();

    inline Fraction add(Fraction other);
    inline Fraction subtract(Fraction other);
    inline Fraction multiply(Fraction other);
    inline Fraction divide(Fraction other);

    inline int getNumerator() { return numerator; }
    inline int getDenominator() { return denominator; }
};



