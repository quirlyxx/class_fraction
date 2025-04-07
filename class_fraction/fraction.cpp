#include "fraction.h"
#include <iostream>

using namespace std;

int Fraction::reduct(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void Fraction::input() {
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    while (denominator == 0) {
        cout << "Denominator can't be zero. Try again: ";
        cin >> denominator;
    }
}

void Fraction::output() {
    int divisor = reduct(numerator, denominator);
    cout << numerator / divisor << "/" << denominator / divisor << endl;
}

Fraction Fraction::add(Fraction other) {
    Fraction result;

    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::subtract(Fraction other) {
    Fraction result;

    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::multiply(Fraction other) {
    Fraction result;

    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::divide(Fraction other) {
    Fraction result;

    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}
