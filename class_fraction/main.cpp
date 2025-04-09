#include "fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction a, b;

    cout << "Enter first fraction:\n";
    a.input();

    cout << "Enter second fraction:\n";
    b.input();

    cout << "\nSum: ";
    a.add(b).output();

    cout << "Minus: ";
    a.subtract(b).output();

    cout << "Multiplicate: ";
    a.multiply(b).output();

    cout << "Division: ";
    a.divide(b).output();

    return 0;
}
