#include <iostream>
using namespace std;

int main(void){
    int numerator, denominator, quotient, modulo;

    numerator = 25;
    denominator = 4;

    quotient = 0;

    while (denominator * quotient <= numerator){
        quotient++;
    }

    modulo = numerator - (denominator * (quotient - 1));

    cout << endl << "With manual integer division: " << endl;
    cout << numerator << " \% " << denominator << " = " << modulo << endl;

    quotient = numerator / denominator;
    modulo = numerator - quotient * denominator;

    cout << endl << "With built-in integer division: " << endl;
    cout << numerator << " \% " << denominator << " = " << modulo << endl;

    return 0;
}