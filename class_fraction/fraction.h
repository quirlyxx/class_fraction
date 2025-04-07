#pragma once

class Fraction {
private:
    int numerator;
    int denominator;

    int reduct(int a, int b);

public:
    void input();
    void output();

    Fraction add(Fraction other);
    Fraction subtract(Fraction other);
    Fraction multiply(Fraction other);
    Fraction divide(Fraction other);
};


