#include <iostream>
using namespace std;

int main(void){
    short int x, y;

    x = 2;
    y = 5;

    cout << endl << "Initial values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << endl << "Swapped values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}